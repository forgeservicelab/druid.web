<?php
/**
 * @file
 * forge_web_my_forge.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function forge_web_my_forge_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "login_destination" && $api == "login_destinations") {
    return array("version" => "1");
  }
}
