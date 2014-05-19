<?php
/**
 * @file
 * forge_web_feeds.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function forge_web_feeds_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'feed';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'feed' => 'feed',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'fb_likebox-0' => array(
          'module' => 'fb_likebox',
          'delta' => '0',
          'region' => 'content',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['feed'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tweet';
  $context->description = 'This context is triggered on single tweet';
  $context->tag = 'Tweet';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'tweet' => 'tweet',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'feed',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('This context is triggered on single tweet');
  t('Tweet');
  $export['tweet'] = $context;

  return $export;
}
