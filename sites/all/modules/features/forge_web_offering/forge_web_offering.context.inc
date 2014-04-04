<?php
/**
 * @file
 * forge_web_offering.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function forge_web_offering_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'plaza';
  $context->description = '';
  $context->tag = 'Forge Plaza';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'plaza' => 'plaza',
        'plaza/*' => 'plaza/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-forge-member-navigation' => array(
          'module' => 'menu',
          'delta' => 'menu-forge-member-navigation',
          'region' => 'navigation',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Forge Plaza');
  $export['plaza'] = $context;

  return $export;
}
