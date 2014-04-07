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
  $strongarm->name = 'fitvids_customselectors';
  $strongarm->value = '';
  $export['fitvids_customselectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fitvids_selectors';
  $strongarm->value = '.embedded-video';
  $export['fitvids_selectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fitvids_simplifymarkup';
  $strongarm->value = 1;
  $export['fitvids_simplifymarkup'] = $strongarm;

  return $export;
}
