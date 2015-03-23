<?php

/**
* @file
* Administrative page callbacks for the Insightly module.
*/

/**
* Implements hook_admin_settings() for module settings configuration.
*/
function insightly_admin_settings_form($form_state) {
  $form['key'] = array(
    '#type' => 'fieldset',
    '#title' => t('Insightly settings'),
  );

  $form['key']['insightly_key'] = array(
    '#title' => t('Insightly API key'),
    '#type' => 'textfield',
    '#default_value' => variable_get('insightly_key', 'Copy the key here ...'),
    '#size' => 36,
    '#maxlength' => 36,
    '#required' => FALSE,
    '#description' => t('This is the API key you can obtain from the <a href="https://www.insightly.com" target="_blank">https://www.insightly.com</a> site. It\'s located in "User Settings -> API KEY".'),
  );

  return system_settings_form($form);
}

/**
 * Validate the API key
 *
 * @param $form
 * @param $form_state
 */
function insightly_admin_settings_form_validate($form, &$form_state) {
  // Check for whitespace, substring length and correct location of dashes
  if (!preg_match('/\S{8}-\S{4}-\S{4}-\S{4}-\S{12}/', $form_state['values']['insightly_key'])) {
    form_set_error('insightly_key', t('The key seems to be invalid. Keys are 36 characters long and look like this: <pre>ac9a2292-f25a-4483-9d54-000000000000</pre>'));
  }
}
