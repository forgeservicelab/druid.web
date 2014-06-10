<?php
/**
 * @file
 * forge_social_media.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function forge_social_media_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'tweets_json';
  $feeds_importer->config = array(
    'name' => 'Tweets JSON',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'OAuthHTTPFetcher',
      'config' => array(
        'authenticator' => 'feeds_oauth_get_tokens',
        'site_id' => 'twitter',
        'consumer_key' => 'lagjxKoBdlQcgO3Yaq8EsJEMW',
        'consumer_secret' => 'iRwwEeVAqB4xYs5FSjJq2Q3LwuJ7jVvnH9xM8nx349JvS57r1M',
        'request_token_url' => 'https://api.twitter.com/oauth/request_token',
        'access_token_url' => 'https://api.twitter.com/oauth/access_token',
        'authorize_url' => 'https://api.twitter.com/oauth/authorize',
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
        'context' => '$.statuses.*',
        'sources' => array(
          'jsonpath_parser:0' => 'text',
          'jsonpath_parser:1' => 'user.screen_name',
          'jsonpath_parser:2' => 'id_str',
          'jsonpath_parser:3' => '',
        ),
        'debug' => array(
          'options' => array(
            'context' => 0,
            'jsonpath_parser:0' => 0,
            'jsonpath_parser:1' => 0,
            'jsonpath_parser:2' => 0,
            'jsonpath_parser:3' => 0,
          ),
        ),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'jsonpath_parser:0',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'jsonpath_parser:1',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'jsonpath_parser:2',
            'target' => 'field_tweet_body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'tweet_url',
            'target' => 'url',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'tweet',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['tweets_json'] = $feeds_importer;

  return $export;
}
