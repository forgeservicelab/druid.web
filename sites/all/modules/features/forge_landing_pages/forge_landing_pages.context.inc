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
          'region' => 'header',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '0',
        ),
        'views-news_about_forge-block' => array(
          'module' => 'views',
          'delta' => 'news_about_forge-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facebook_pull-facebook_pull_default' => array(
          'module' => 'facebook_pull',
          'delta' => 'facebook_pull_default',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide'] = $context;

  return $export;
}
