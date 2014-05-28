<?php
/**
 * @file
 * forge_web_search.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function forge_web_search_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['current_search-standard'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'standard',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'current_search',
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

  $export['facetapi-NqeDE2mMWoSI3cj9ZcfT1DsECY1MWH0Z'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'NqeDE2mMWoSI3cj9ZcfT1DsECY1MWH0Z',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
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
    'title' => 'Tags',
    'visibility' => 0,
  );

  $export['facetapi-W6Y01TnXzLiqUKc7f9pIbDZKgyVZ0i1g'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'W6Y01TnXzLiqUKc7f9pIbDZKgyVZ0i1g',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
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
    'title' => 'Categories',
    'visibility' => 0,
  );

  return $export;
}
