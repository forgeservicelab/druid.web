<?php
/**
 * @file
 * forge_web_faq.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function forge_web_faq_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-faq'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'machine_name' => 'faq',
    'module' => 'block',
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
    'title' => 'FAQ',
    'visibility' => 0,
  );

  return $export;
}
