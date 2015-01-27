<?php
/**
 * @file
 * forge_facebook_integration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function forge_facebook_integration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function forge_facebook_integration_node_info() {
  $items = array(
    'facebook_post' => array(
      'name' => t('Facebook post'),
      'base' => 'node_content',
      'description' => t('Facebook news feed item downloaded through feeds.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
