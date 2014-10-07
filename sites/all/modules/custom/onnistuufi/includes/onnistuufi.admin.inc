<?php

function onnistuufi_admin_settings() {
  $form['onnistuufi_customer_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Onnistuu.fi Customer ID'),
    '#default_value' => variable_get('onnistuufi_customer_id', ''),
    '#description' => t('Onnistuu.fi service Customer ID'),
  );

  $form['onnistuufi_crypt_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Onnistuu.fi Crypt Key'),
    '#default_value' => variable_get('onnistuufi_crypt_key', ''),
    '#description' => t('Onnistuu.fi service crypt key'),
  );

  $form['onnistuufi_signing_options'] = array(
    '#type' => 'checkboxes',
    '#options' => drupal_map_assoc(array(
      t('Personal ID'),
      t('Company ID'),
      t('Email invitation'),
    )),
    '#title' => t('Signing options'),
    '#default_value' => variable_get('onnistuufi_signing_options', ''),
  );

  return system_settings_form($form);
}
