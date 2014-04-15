<?php
/**
 * @file
 * forge_web_node_export.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function forge_web_node_export_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_tutorial';
  $strongarm->value = array(
    0 => 'menu-tutorial-menu',
  );
  $export['menu_options_tutorial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_tutorial';
  $strongarm->value = 'menu-tutorial-menu:0';
  $export['menu_parent_tutorial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_tutorial';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_tutorial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_tutorial';
  $strongarm->value = '1';
  $export['node_preview_tutorial'] = $strongarm;

  return $export;
}
