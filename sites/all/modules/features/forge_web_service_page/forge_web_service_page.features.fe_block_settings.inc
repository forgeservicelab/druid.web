<?php
/**
 * @file
 * forge_web_service_page.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function forge_web_service_page_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-3ebc56225274a68aaf777277e0d06eeb'] = array(
    'cache' => -1,
    'delta' => '3ebc56225274a68aaf777277e0d06eeb',
    'module' => 'views',
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
  );

  $export['views-service_offering_comments-block'] = array(
    'cache' => -1,
    'delta' => 'service_offering_comments-block',
    'module' => 'views',
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
  );

  $export['views-service_offering_overview-block'] = array(
    'cache' => -1,
    'delta' => 'service_offering_overview-block',
    'module' => 'views',
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
  );

  $export['views-service_offering_pricing-block'] = array(
    'cache' => -1,
    'delta' => 'service_offering_pricing-block',
    'module' => 'views',
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
  );

  return $export;
}
