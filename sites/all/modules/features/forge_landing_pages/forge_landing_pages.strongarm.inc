<?php
/**
 * @file
 * forge_landing_pages.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function forge_landing_pages_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_node_link_pages';
  $strongarm->value = '<front>';
  $export['print_html_node_link_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'node/1';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = 'TEAM UP, LEARN, DESIGN, GO LIVE';
  $export['site_slogan'] = $strongarm;

  return $export;
}
