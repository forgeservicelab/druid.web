<?php
/**
 * @file
 * forge_web_first_login.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function forge_web_first_login_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function forge_web_first_login_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function forge_web_first_login_node_info() {
  $items = array(
    'forge_service' => array(
      'name' => t('Forge service'),
      'base' => 'node_content',
      'description' => t('A service provided by FORGE.'),
      'has_title' => '1',
      'title_label' => t('Service title'),
      'help' => t('This title field is only used internally, not displayed publicly.'),
    ),
  );
  return $items;
}
