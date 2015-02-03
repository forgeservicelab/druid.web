<?php
/**
 * @file
 * forge_facebook_integration.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function forge_facebook_integration_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'facebook_posts';
  $feeds_importer->config = array(
    'name' => 'Facebook posts',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'OAuth2HTTPSFetcher',
      'config' => array(
        'scope' => '',
        'authenticator' => 'feeds_oauth_get_tokens',
        'site_id' => 'fb',
        'consumer_key' => '593440774120426',
        'consumer_secret' => 'ab9acbcf680ce3bf01390d1dc8e739d9',
        'request_token_url' => '',
        'access_token_url' => 'https://graph.facebook.com/oauth/access_token',
        'authorize_url' => 'https://graph.facebook.com/oauth/authorize',
        'method' => 'get',
        'uid' => '1',
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsJSONPathParser',
      'config' => array(
        'context' => '$.data.*.',
        'sources' => array(
          'jsonpath_parser:0' => 'id',
          'jsonpath_parser:1' => 'message',
        ),
        'debug' => array(
          'options' => array(
            'jsonpath_parser:0' => 'jsonpath_parser:0',
            'context' => 0,
            'jsonpath_parser:1' => 0,
          ),
        ),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'jsonpath_parser:0',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'jsonpath_parser:1',
            'target' => 'body',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'facebook_post',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['facebook_posts'] = $feeds_importer;

  return $export;
}
