<?php
/**
 * @file
 * forge_web_theme.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function forge_web_theme_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'ember';
  $export['admin_theme'] = $strongarm;

  return $export;
}
