<?php
/**
 * @file
 * forge_web_bulletin_board.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function forge_web_bulletin_board_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function forge_web_bulletin_board_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function forge_web_bulletin_board_node_info() {
  $items = array(
    'bulletin_board_item' => array(
      'name' => t('Bulletin board item'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
