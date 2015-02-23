<?php
/**
 * @file
 * forge_web_first_login.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function forge_web_first_login_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'first_time';
  $context->description = 'Welcome to FORGE node';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'welcome-forge' => 'welcome-forge',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-first_time-block' => array(
          'module' => 'views',
          'delta' => 'first_time-block',
          'region' => 'after_content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Welcome to FORGE node');
  $export['first_time'] = $context;

  return $export;
}
