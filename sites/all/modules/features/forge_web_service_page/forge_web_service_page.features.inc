<?php
/**
 * @file
 * forge_web_service_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function forge_web_service_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function forge_web_service_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
