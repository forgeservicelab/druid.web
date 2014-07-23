<?php
/**
 * @file
 * forge_web_my_forge.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function forge_web_my_forge_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'my_forge';
  $context->description = 'This context is triggered on My FORGE page';
  $context->tag = 'Join Forge';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'welcome-forge-service-lab' => 'welcome-forge-service-lab',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Join Forge');
  t('This context is triggered on My FORGE page');
  $export['my_forge'] = $context;

  return $export;
}
