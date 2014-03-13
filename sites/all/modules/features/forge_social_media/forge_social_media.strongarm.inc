<?php
/**
 * @file
 * forge_social_media.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function forge_social_media_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_block_count';
  $strongarm->value = '1';
  $export['easy_social_block_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_facebook_appid';
  $strongarm->value = '';
  $export['easy_social_facebook_appid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_facebook_color_scheme';
  $strongarm->value = 'light';
  $export['easy_social_facebook_color_scheme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_facebook_font';
  $strongarm->value = 'default';
  $export['easy_social_facebook_font'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_facebook_send_button';
  $strongarm->value = 0;
  $export['easy_social_facebook_send_button'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_facebook_show_faces';
  $strongarm->value = 0;
  $export['easy_social_facebook_show_faces'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_facebook_verb';
  $strongarm->value = 'like';
  $export['easy_social_facebook_verb'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_facebook_widget_type';
  $strongarm->value = 'html5';
  $export['easy_social_facebook_widget_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_facebook_width_horizontal';
  $strongarm->value = '88';
  $export['easy_social_facebook_width_horizontal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_facebook_width_vertical';
  $strongarm->value = '48';
  $export['easy_social_facebook_width_vertical'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_forge_role_information_enable';
  $strongarm->value = 0;
  $export['easy_social_forge_role_information_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_global_order';
  $strongarm->value = array(
    0 => 'facebook',
    1 => 'twitter',
    2 => 'linkedin',
    3 => 'googleplus',
  );
  $export['easy_social_global_order'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_global_type';
  $strongarm->value = '1';
  $export['easy_social_global_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_global_widgets';
  $strongarm->value = array(
    'twitter' => 'twitter',
    'facebook' => 'facebook',
    'linkedin' => 'linkedin',
    'googleplus' => 0,
  );
  $export['easy_social_global_widgets'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_googleplus_annotation';
  $strongarm->value = 'none';
  $export['easy_social_googleplus_annotation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_googleplus_html5';
  $strongarm->value = 1;
  $export['easy_social_googleplus_html5'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_linkedin_count_show';
  $strongarm->value = 0;
  $export['easy_social_linkedin_count_show'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_news_enable';
  $strongarm->value = 1;
  $export['easy_social_news_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_page_enable';
  $strongarm->value = 1;
  $export['easy_social_page_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_twitter_account_description';
  $strongarm->value = 'Check it out!';
  $export['easy_social_twitter_account_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_twitter_account_related';
  $strongarm->value = 'digile_fi';
  $export['easy_social_twitter_account_related'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_twitter_account_via';
  $strongarm->value = '';
  $export['easy_social_twitter_account_via'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_twitter_count_show';
  $strongarm->value = 0;
  $export['easy_social_twitter_count_show'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_webform_enable';
  $strongarm->value = 0;
  $export['easy_social_webform_enable'] = $strongarm;

  return $export;
}
