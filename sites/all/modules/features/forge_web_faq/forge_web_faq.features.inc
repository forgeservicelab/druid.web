<?php
/**
 * @file
 * forge_web_faq.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function forge_web_faq_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function forge_web_faq_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function forge_web_faq_node_info() {
  $items = array(
    'faq_item' => array(
      'name' => t('FAQ-item'),
      'base' => 'node_content',
      'description' => t('An item with frequently asked question and the answer to that question.'),
      'has_title' => '1',
      'title_label' => t('Question'),
      'help' => '',
    ),
  );
  return $items;
}
