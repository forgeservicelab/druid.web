<?php
/**
 * @file
 * forge_web_contract.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function forge_web_contract_ctools_plugin_api($module = NULL, $api = NULL) {
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
function forge_web_contract_node_info() {
  $items = array(
    'partner_contract' => array(
      'name' => t('Partner Contract'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'partner_fsl_fpa_cra_contract' => array(
      'name' => t('FORGE Partner CRA Addendum'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'service_developer_contract' => array(
      'name' => t('Service developer contract'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
