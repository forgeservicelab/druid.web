<?php
/**
 * @file
 * forge_web_artners_and_people.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function forge_web_artners_and_people_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function forge_web_artners_and_people_node_info() {
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
