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
  $strongarm->value = 'XgabOkL/RiJgbvg5ep3RPi6PQoO5azmZmV59dFy2K3k=';
  $export['onnistuufi_crypt_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'onnistuufi_customer_id';
  $strongarm->value = '1fd24846-152c-438f-9f71-2fdb10f729f0';
  $export['onnistuufi_customer_id'] = $strongarm;

  return $export;
}
