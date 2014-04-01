<?php
/**
 * @file
 * forge_web_tutorial.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function forge_web_tutorial_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['print-print-links'] = array(
    'cache' => 4,
    'custom' => 0,
    'delta' => 'print-links',
    'module' => 'print',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['print-print-top'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'print-top',
    'module' => 'print',
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
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
