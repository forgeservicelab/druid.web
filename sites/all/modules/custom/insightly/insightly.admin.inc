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
