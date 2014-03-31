<?php
/**
 * @file
 * forge_web_tutorial.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function forge_web_tutorial_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function forge_web_tutorial_node_info() {
  $items = array(
    'tutorial' => array(
      'name' => t('Tutorial'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}