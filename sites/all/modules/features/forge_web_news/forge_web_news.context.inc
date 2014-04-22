<?php
/**
 * @file
 * forge_web_news.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function forge_web_news_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_page';
  $context->description = 'This context is triggered on single news item';
  $context->tag = 'News';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'news' => 'news',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news_slideshow-block' => array(
          'module' => 'views',
          'delta' => 'news_slideshow-block',
          'region' => 'content',
          'weight' => '1',
        ),
        'views-news_video-block' => array(
          'module' => 'views',
          'delta' => 'news_video-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-news_sidebar_block-block' => array(
          'module' => 'views',
          'delta' => 'news_sidebar_block-block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  t('This context is triggered on single news item');
  $export['news_page'] = $context;

  return $export;
}
