<?php
/**
 * @file
 * forge_web_tutorial.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function forge_web_tutorial_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tutorial';
  $context->description = '';
  $context->tag = 'Tutorial';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'tutorial' => 'tutorial',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Tutorial');
  $export['tutorial'] = $context;

  return $export;
}
