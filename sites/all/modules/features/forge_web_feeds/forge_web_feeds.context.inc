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
  $context->reactions = array();
  $context->condition_mode = 0;
  $export['feed'] = $context;

  return $export;
}
