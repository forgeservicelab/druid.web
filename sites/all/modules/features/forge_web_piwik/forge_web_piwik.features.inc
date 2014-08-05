<?php
/**
 * @file
 * forge_web_piwik.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function forge_web_piwik_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
