<?php

/**
 * @file
 * Admin page callback file for the Login Destination module.
 */

/**
 * List destination rules.
 */
function login_destination_overview() {
  $header = array(
    t('Machine Name'),
    t('Destination'),
    t('Triggers'),
    t('Pages'),
    t('Roles'),
    array('data' => t('Operations'), 'colspan' => 3),
  );
  $rows = array();

  foreach (login_destination_load_all() as $rule) {
    $triggers = array_map('check_plain', $rule->triggers);
    $roles = array_map('check_plain', $rule->roles);
    if ($rule->export_type & EXPORT_IN_DATABASE) {
      $op = 'delete';
      $op_label = t('Delete');
    }
    if ($rule->export_type & EXPORT_IN_CODE) {
      if (empty($rule->disabled)) {
        $toggle_op_label = t('Disable');
        $toggle_op = 'disable';
      }
      else {
        $toggle_op_label = t('Enable');
        $toggle_op = 'enable';
      }
      if ($rule->export_type & EXPORT_IN_DATABASE) {
        $op = 'revert';
        $op_label = t('Revert');
      }
    }

    $delete_op = !empty($op) ? l($op_label, 'admin/config/people/login-destination/' . $op .'/' . $rule->machine_name) : '';
    $toggle_op = !empty($toggle_op) ? l($toggle_op_label, 'admin/config/people/login-destination/' . $toggle_op . '/' . $rule->machine_name) : '';

    $rows[] = array(
      check_plain($rule->machine_name),
      theme('login_destination_destination', array('destination' => $rule->destination)),
      theme('login_destination_triggers', array('items' => $triggers)),
      theme('login_destination_pages', array('pages' => $rule->pages, 'pages_type' => $rule->pages_type)),
      theme('login_destination_roles', array('items' => $roles)),
      l(t('Edit'), 'admin/config/people/login-destination/edit/' . $rule->machine_name),
      $toggle_op,
      $delete_op,
    );
  }

  if (!$rows) {
    $rows[] = array(array(
      'data' => t('No rules available.'),
      'colspan' => 8,
    ));
  }

  $build['login-destination_table'] = array(
    '#theme' => 'table',
    '#header' => $header,
    '#rows' => $rows,
  );
  return $build;
}

function theme_login_destination_destination($variables) {
  $output = nl2br(check_plain($variables['destination']));

  if (empty($output)) {
    $output = '<i>' . t('Empty') . '</i>';
  }

  return $output;
}

function theme_login_destination_triggers($variables) {
  $items = array_map('check_plain', $variables['items']);

  if (empty($items)) {
    return '<i>' . t('All triggers') . '</i>';
  }

  $output = '';
  foreach ($items as &$item) {
    switch ($item) {
      case 'login':
        $item = 'Login';
        break;
      case 'logout':
        $item = 'Logout';
        break;
    }
    $output .= $item . "<br/>";
  }

  return $output;
}

function theme_login_destination_pages($variables) {
  $type = $variables['pages_type'];
  
  if ($type == LOGIN_DESTINATION_REDIRECT_PHP) {
    return nl2br(check_plain($variables['pages']));
  }

  $pages = trim($variables['pages']);

  if (empty($pages)) {
    if ($type == LOGIN_DESTINATION_REDIRECT_NOTLISTED) {
      return '<i>' . t('All pages') . '</i>';
    }
    else {
      return '<i>' . t('No pages') . '</i>';
    }
  }

  $pages = explode("\n", preg_replace('/\r/', '', check_plain($variables['pages'])));

  $output = '';
  foreach ($pages as &$page) {
    if ($type == LOGIN_DESTINATION_REDIRECT_NOTLISTED) {
      $output .= "~ ";
    }
    $output .= $page . "<br/>";
  } 

  return $output;
}

function theme_login_destination_roles($variables) {
  $items = array_values(array_intersect_key(_login_destination_role_options(), $variables['items']));

  if (empty($items)) {
    return '<i>' . t('All roles') . '</i>';
  }

  return theme('item_list', array('items' => $items));
}

/**
 * Category edit page.
 */
function login_destination_edit_form($form, &$form_state, $rule = NULL) {
  if (!isset($rule)) {
    // default values
    $rule = array(
      'machine_name' => '',
      'triggers' => array(),
      'roles' => array(),
      'pages_type' => LOGIN_DESTINATION_REDIRECT_NOTLISTED,
      'pages' => '',
      'destination_type' => LOGIN_DESTINATION_STATIC,
      'destination' => '<front>',
      'id' => NULL,
      'weight' => 0,
    );
    $rule = (object) $rule;
  }

  $access = user_access('use PHP for settings');

  $type = $rule->destination_type;

  $form['machine_name'] = array(
    '#type' => 'machine_name',
    '#label' => t('Machine Name'),
    '#default_value' => $rule->machine_name,
    '#maxlength' => 255,
    '#machine_name' => array(
      'exists' => 'login_destination_load',
    ),
    '#disabled' => !empty($rule->machine_name),
  );

  if ($type == LOGIN_DESTINATION_SNIPPET && !$access) {
    $form['destination_type'] = array(
      '#type' => 'value',
      '#value' => LOGIN_DESTINATION_SNIPPET,
    );
    $form['destination'] = array(
      '#type' => 'value',
      '#value' => $rule->destination,
    );
  }
  else {
    $options = array(
        LOGIN_DESTINATION_STATIC => t('Internal page or external URL'),
      );
    $description = t("Specify page by using its path. Example path is %blog for the blog page. %front is the front page. %current is the current page. Precede with http:// for an external URL. Leave empty to redirect to a default page.", array('%blog' => 'blog', '%front' => '<front>', '%current' => '<current>'));

    if (module_exists('php') && $access) {
      $options += array(LOGIN_DESTINATION_SNIPPET => t('Page returned by this PHP code (experts only)'));
      $description .= ' ' . t('If the PHP option is chosen, enter PHP code between %php. It should return either a string value or an array of params that the %function function will understand, e.g. %example. For more information, see the online API entry for <a href="@url">url function</a>. Note that executing incorrect PHP code can break your Drupal site.', array('%php' => '<?php ?>', '%function' => 'url($path = \'\', array $options = array())', '%example' => '<?php return array(\'blog\', array(\'fragment\' => \'overlay=admin/config\', ), ); ?>', '@url' => 'http://api.drupal.org/api/drupal/includes--common.inc/function/url/7'));
    }

    $form['destination_type'] = array(
      '#type' => 'radios',
      '#title' => 'Redirect to page',
      '#default_value' => $type,
      '#options' => $options,
    );
    $form['destination'] = array(
      '#type' => 'textarea',
      '#default_value' => $rule->destination,
      '#description' => $description,
    );
  }

  $triggers = array_map('check_plain', $rule->triggers);
  if (empty($triggers)) {
    $triggers = array();
  }

  $form['triggers'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Redirect upon triggers'),
    '#options' => array('login' => 'Login, registration, one-time login link', 'logout' => 'Logout'),
    '#default_value' => $triggers,
    '#description' => 'Redirect only upon selected trigger(s). If you select no triggers, all of them will be used.',
  );

  $type = $rule->pages_type;

  if ($type == LOGIN_DESTINATION_REDIRECT_PHP && !$access) {
    $form['pages_type'] = array(
      '#type' => 'value',
      '#value' => LOGIN_DESTINATION_REDIRECT_PHP,
    );
    $form['pages'] = array(
      '#type' => 'value',
      '#value' => $rule->destination,
    );
  }
  else {
    $options = array(
        LOGIN_DESTINATION_REDIRECT_NOTLISTED => t('All pages except those listed'),
        LOGIN_DESTINATION_REDIRECT_LISTED => t('Only the listed pages'),
      );
    $description = t("Specify pages by using their paths. Enter one path per line. The '*' character is a wildcard. Example paths are %blog for the blog page and %blog-wildcard for every personal blog. %front is the front page. %login is the login form. %register is the registration form. %reset is the one-time login (e-mail validation).", array('%blog' => 'blog', '%blog-wildcard' => 'blog/*', '%front' => '<front>', '%login' => 'user', '%register' => 'user/register', '%reset' => 'user/*/edit'));

    if (module_exists('php') && $access) {
      $options += array(LOGIN_DESTINATION_REDIRECT_PHP => t('Pages on which this PHP code returns <code>TRUE</code> (experts only)'));
      $description .= ' ' . t('If the PHP option is chosen, enter PHP code between %php. Note that executing incorrect PHP code can break your Drupal site.', array('%php' => '<?php ?>'));
    }

    $form['pages_type'] = array(
      '#type' => 'radios',
      '#title' => t('Redirect from specific pages'),
      '#default_value' => $type,
      '#options' => $options,
    );
    $form['pages'] = array(
      '#type' => 'textarea',
      '#default_value' => $rule->pages,
      '#description' => $description,
    );
  }

  $default_role_options = array_map('check_plain', $rule->roles);
  if (empty($default_role_options)) {
    $default_role_options = array();
  }

  $form['roles'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Redirect users with roles'),
    '#options' => _login_destination_role_options(),
    '#default_value' => $default_role_options,
    '#description' => 'Redirect only the selected role(s). If you select no roles, all users will be redirected.',
  );

  $form['weight'] = array(
    '#type' => 'weight',
    '#title' => t('Weight'),
    '#default_value' => $rule->weight,
    '#description' => t('When evaluating login destination rules, those with lighter (smaller) weights get evaluated before rules with heavier (larger) weights.'),
  );

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );

  if (isset($rule->id)) {
    $form['id'] = array(
      '#type' => 'hidden',
      '#value' => $rule->id,
    );
  }

  return $form;
}

/**
 * Validate the contact category edit page form submission.
 */
function login_destination_edit_form_validate($form, &$form_state) {
}

/**
 * Process the contact category edit page form submission.
 */
function login_destination_edit_form_submit($form, &$form_state) {
  $form_state['values']['triggers'] = array_filter($form_state['values']['triggers']);
  $form_state['values']['roles'] = array_filter($form_state['values']['roles']);

  login_destination_save($form_state['values']);

  drupal_set_message(t('Login destination to %destination has been saved.', array('%destination' => $form_state['values']['destination'])));

  $form_state['redirect'] = 'admin/config/people/login-destination';
}

/**
 * Form for deleting/reverting/enabling/disabling a login destination.
 */
function login_destination_op_form($form, &$form_state, $op, $rule) {
  $form['#rule'] = $rule;
  $t_args['@op'] = $form['#op'] = $op;
  $t_args['%name'] = $rule->machine_name;

  return confirm_form(
    $form,
    t('Are you sure you want to @op the login destination %name?', $t_args),
    'admin/config/people/login-destination',
    t('This action cannot be undone.'),
    t(ucfirst($op)),
    t('Cancel')
  );
}

/**
 * Submit handler for deleting/reverting/enabling/disabling a login destination.
 */
function login_destination_op_form_submit($form, &$form_state) {
  $rule = $form['#rule'];
  $op = $form['#op'];

  $t_args['%name'] = $rule->machine_name;
  $t_args['@op'] = ($op == 'revert') ? 'reverted' : "{$op}d";

  switch ($op) {
    case 'revert':
    case 'delete':
      login_destination_delete($rule->machine_name);
      break;
    case 'enable':
    case 'disable':
      $status = ($op != 'enable');
      ctools_include('export');
      ctools_export_crud_set_status('login_destination', $rule, $status);
      break;
  }

  drupal_set_message(t('The login destination %name has been @op.', $t_args));

  $form_state['redirect'] = 'admin/config/people/login-destination';
}

/**
 * Settings page.
 */
function login_destination_settings() {
  $form = array();

  $form['settings']['login_destination_preserve_destination'] = array(
    '#type' => 'checkbox',
    '#default_value' => variable_get('login_destination_preserve_destination', FALSE),
    '#title' => t('Preserve the destination parameter'),
    '#description' => t("The 'destination' GET parameter will have priority over the settings of this module. With this setting enabled, redirect from the user login block will not work."),
  );
  $form['settings']['login_destination_immediate_redirect'] = array(
    '#type' => 'checkbox',
    '#default_value' => variable_get('login_destination_immediate_redirect', FALSE),
    '#title' => t('Redirect immediately after using one-time login link'),
    '#description' => t("User will be redirected before given the possibility to change their password."),
  );

  return system_settings_form($form);
}
