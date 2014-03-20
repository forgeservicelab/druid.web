<?php
/**
 * @file
 * forge_web_offering.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function forge_web_offering_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function forge_web_offering_node_info() {
  $items = array(
    'offering' => array(
      'name' => t('Offering'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
