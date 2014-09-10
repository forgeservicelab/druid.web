<?php
/**
 * @file
 * forge_web_wizard.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function forge_web_wizard_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['forge_web_wizard-forge_web_wizard_templates'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'forge_web_wizard_templates',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'forge_web_wizard',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'forgeweb' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'forgeweb',
        'weight' => 0,
      ),
    ),
    'title' => 'Preview Contracts',
    'visibility' => 0,
  );

  return $export;
}
