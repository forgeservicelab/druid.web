<?php
/**
 * @file
 * forge_social_media.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function forge_social_media_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['fb_likebox-0'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'fb_likebox',
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
