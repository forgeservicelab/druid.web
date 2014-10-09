<?php
/**
 * @file
 * forge_web_bulletin_board.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function forge_web_bulletin_board_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'bulletin_board';
  $context->description = '';
  $context->tag = 'Bulletin board';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'bulletin-board' => 'bulletin-board',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-10' => array(
          'module' => 'block',
          'delta' => '10',
          'region' => 'under_content',
          'weight' => '-10',
        ),
        'views-bulletin_board-block_1' => array(
          'module' => 'views',
          'delta' => 'bulletin_board-block_1',
          'region' => 'under_content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Bulletin board');
  $export['bulletin_board'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'bulletin_item';
  $context->description = '';
  $context->tag = 'Bulletin board';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'bulletin_board_item' => 'bulletin_board_item',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        '~comment/*' => '~comment/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-fe318909593de220416f16fd6a25c226' => array(
          'module' => 'views',
          'delta' => 'fe318909593de220416f16fd6a25c226',
          'region' => 'content',
          'weight' => '1',
        ),
        'views-8ed64fab5eba24a6e12a79bc56af4ac3' => array(
          'module' => 'views',
          'delta' => '8ed64fab5eba24a6e12a79bc56af4ac3',
          'region' => 'content',
          'weight' => '2',
        ),
        'node_comment_block-node_comments' => array(
          'module' => 'node_comment_block',
          'delta' => 'node_comments',
          'region' => 'under_content',
          'weight' => '-10',
        ),
        'views-60b2f6fc1ffcebc0e875a1cfc02a1a80' => array(
          'module' => 'views',
          'delta' => '60b2f6fc1ffcebc0e875a1cfc02a1a80',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
      'layout' => 'forge_web',
    ),
    'menu' => 'node/61',
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Bulletin board');
  $export['bulletin_item'] = $context;

  return $export;
}
