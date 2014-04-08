<?php
/**
 * @file
 * forge_web_product_page.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function forge_web_product_page_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-product_comments-block'] = array(
    'cache' => -1,
    'delta' => 'product_comments-block',
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

  $export['views-product_download_block-block'] = array(
    'cache' => -1,
    'delta' => 'product_download_block-block',
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

  $export['views-product_overview-block'] = array(
    'cache' => -1,
    'delta' => 'product_overview-block',
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

  $export['views-product_pricing-block'] = array(
    'cache' => -1,
    'delta' => 'product_pricing-block',
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

  $export['views-product_specifications-block'] = array(
    'cache' => -1,
    'delta' => 'product_specifications-block',
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

  $export['views-product_support-block'] = array(
    'cache' => -1,
    'delta' => 'product_support-block',
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
