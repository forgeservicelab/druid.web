<?php
/**
 * @file
 * forge_landing_pages.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function forge_landing_pages_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_page';
  $context->description = 'This context is triggered on the front page';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(),
      'layout' => 'forge_web_front_page',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('This context is triggered on the front page');
  $export['front_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'locale-language_content' => array(
          'module' => 'locale',
          'delta' => 'language_content',
          'region' => 'navigation',
          'weight' => '0',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '0',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'footer_left',
          'weight' => '-10',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'footer_right',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide'] = $context;

  return $export;
}
