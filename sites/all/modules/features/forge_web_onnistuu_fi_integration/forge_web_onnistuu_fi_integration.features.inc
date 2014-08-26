<?php
/**
 * @file
 * forge_web_onnistuu_fi_integration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function forge_web_onnistuu_fi_integration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
