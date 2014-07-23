<?php
/**
 * @file
 * forge_web_my_forge.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function forge_web_my_forge_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_page';
  $strongarm->value = array(
    'view_own' => array(
      0 => 1,
      1 => 2,
      2 => 4,
    ),
    'view' => array(
      0 => 1,
      1 => 2,
      2 => 4,
    ),
    'per_node' => 1,
  );
  $export['content_access_page'] = $strongarm;

  return $export;
}
