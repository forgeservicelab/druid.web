<?php
/**
 * @file
 * forge_web_onnistuu_fi_integration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function forge_web_onnistuu_fi_integration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'onnistuufi_crypt_key';
  $strongarm->value = '83gkxgfdwDhRwY+0xwfjHM7WVQyE+QigJ+KoD0rwvCE=';
  $export['onnistuufi_crypt_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'onnistuufi_customer_id';
  $strongarm->value = 'd95bd49d-f104-4d6c-9207-c9af06d1ca25';
  $export['onnistuufi_customer_id'] = $strongarm;

  return $export;
}
