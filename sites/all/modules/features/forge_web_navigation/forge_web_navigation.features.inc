<?php
/**
 * @file
 * forge_web_navigation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function forge_web_navigation_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
