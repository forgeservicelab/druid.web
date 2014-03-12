<?php
/**
 * @file
 * forge_web_base.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function forge_web_base_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_default_export_path';
  $strongarm->value = 'sites/all/modules/features';
  $export['features_default_export_path'] = $strongarm;

  return $export;
}
