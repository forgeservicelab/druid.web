<?php
/**
 * @file
 * forge_web_node_export.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function forge_web_node_export_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
