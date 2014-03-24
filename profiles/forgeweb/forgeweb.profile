<?php
/**
 * @file
 * Enables modules and site configuration for a drupal.fi site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function forgeweb_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = 'forgeweb';
  $form['server_settings']['site_default_country']['#default_value'] = 'FI';
}

function forgeweb_install_tasks(&$install_state) {
  return array(
    'forgeweb_pick_features_form' => array(
      'display_name' => st('Select features'),
      'type' => 'form',
    ),
    'forgeweb_install_features' => array(
      'display_name' => st('Install custom forge features'),
      'type' => 'batch',
    ),
    'forgeweb_finish' => array(
      'display_name' => st('Apply configuration'),
      'display' => TRUE,
      'type' => 'batch',
    ),
  );
}

/**
 * Outputs form that let´s user choose custom features to enable.
 */
function forgeweb_pick_features_form($form, &$form_state, &$install_state) {
  $features = array();
  drupal_set_title(st('Select features'));
  $modules = $form_state['modules'] = system_rebuild_module_data();
  foreach ($modules as $module_name => $module) {
    if (isset($module->info['forge_web'])) {
      $features[$module->info['name']] = $module;
    }
  }
  $form['welcome']['#markup'] = '<h1 class="title">Select features</h1><p>' . st('Please choose the features you want to install on your site.') . '</p>';
  $form['features'] = array(
    '#tree' => TRUE,
  );
  echo '<pre>'; var_dump($form_state);
  foreach ($features as $name => $feature) {
    $form['features'][$name] = array(
      '#type' => 'fieldset',
      '#title' => $feature->info['forge_web']['title'],
      '#description' => $feature->info['forge_web']['description'],
    );
    $form['features'][$name]['enabled'] = array(
      '#type' => 'checkbox',
      '#title' => st('Enable this feature'),
      '#data' => 'data',
    );
    // #value needs to be a string, so we need to serialize the info object.
    $form['features'][$name]['data'] = array(
      '#type' => 'hidden',
      '#title' => st('Enable this feature'),
      '#value' => serialize($feature),
    );
  }
  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => st('Save and continue'),
    '#weight' => 15,
  );
  return $form;
}

/**
 * Submit handler for feature picking form.
 */
function forgeweb_pick_features_form_submit($form, &$form_state) {
  variable_set('forgeweb_enable_features', $form_state['values']['features']);
}

/**
 * Install selected features from the previous section.
 */
function forgeweb_install_features(&$install_state) {
  // Get all selected features out of the array.
  $features = variable_get('forgeweb_enable_features', array());
  $modules = array();
  $module_data = system_rebuild_module_data();
  foreach ($features as $feature => $info) {
    $info['data'] = unserialize($info['data']);
    if ($info['enabled']) {
      $modules[] = $info['data']->name;
      
      // Check if default_theme is set in some module info file, and prepare the variable.
      if (isset($info['data']->info['forgeweb']['default_theme'])) {
        variable_set('forgeweb_default_theme', $info['data']->info['forgeweb']['default_theme']);
      }
    }
  }
  $module_list = array_flip(array_values($modules));
  while (list($module) = each($module_list)) {
    if (!isset($module_data[$module])) {
      // This module is not found in the filesystem, abort.
      break;
    }
    if ($module_data[$module]->status) {
      // Skip already enabled modules.
      unset($module_list[$module]);
      continue;
    }
    $module_list[$module] = $module_data[$module]->sort;
    // Add dependencies to the list, with a placeholder weight.
    // The new modules will be processed as the while loop continues.
    foreach (array_keys($module_data[$module]->requires) as $dependency) {
      if (!isset($module_list[$dependency])) {
        $module_list[$dependency] = 0;
      }
    }
  }
  // Sort the module list by pre-calculated weights.
  arsort($module_list);
  $module_list = array_keys($module_list);
  foreach ($module_list as $module) {
    $operations[] = array('_install_module_batch', array($module, $module_data[$module]->info['name']));
  }
  // Trigger the batch API operation.
  $batch = array(
    'operations' => $operations,
    'title' => st('Installing Forge features'),
    'error_message' => st('The installation has encountered an error.'),
    'finished' => '_install_profile_modules_finished',
  );
  return $batch;
}

/**
 * Do things that needs to be done after all modules have been enabled.
 */
function forgeweb_finish() {

  // check if default theme needs to be set
  $theme = variable_get('forgeweb_default_theme', '');
  if ($theme) {
    $enable = array(
      'theme_default' => $theme,
    );
    theme_enable($enable);

    foreach ($enable as $var => $theme) {
      if (!is_numeric($var)) {
        variable_set($var, $theme);
      }
    }

    // Disable the default Bartik theme
    theme_disable(array('bartik'));
  }

  // clean up variables
  variable_del('forgeweb_enable_features');
  variable_del('forgeweb_default_theme');
 
  // Flush cache & magick whoo!
  module_list(TRUE);
  drupal_flush_all_caches();
  return array();
}