<?php
/**
 * @file
 * forge_web_partners_and_people.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function forge_web_partners_and_people_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function forge_web_partners_and_people_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function forge_web_partners_and_people_node_info() {
  $items = array(
    'partners_and_people' => array(
      'name' => t('Partners and people'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
