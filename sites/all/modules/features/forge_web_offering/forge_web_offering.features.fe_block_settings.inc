<?php
/**
 * @file
 * forge_web_offering.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function forge_web_offering_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-forge-member-navigation'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-forge-member-navigation',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'forgeweb' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'forgeweb',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
