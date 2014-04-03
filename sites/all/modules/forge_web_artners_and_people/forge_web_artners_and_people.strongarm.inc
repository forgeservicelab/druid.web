<?php
/**
 * @file
 * forge_web_artners_and_people.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function forge_web_artners_and_people_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_partners_and_people';
  $strongarm->value = 0;
  $export['comment_anonymous_partners_and_people'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_partners_and_people';
  $strongarm->value = 1;
  $export['comment_default_mode_partners_and_people'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_partners_and_people';
  $strongarm->value = '50';
  $export['comment_default_per_page_partners_and_people'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_partners_and_people';
  $strongarm->value = 1;
  $export['comment_form_location_partners_and_people'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_partners_and_people';
  $strongarm->value = '1';
  $export['comment_partners_and_people'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_partners_and_people';
  $strongarm->value = '1';
  $export['comment_preview_partners_and_people'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_partners_and_people';
  $strongarm->value = 1;
  $export['comment_subject_field_partners_and_people'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__partners_and_people';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '3',
        ),
        'language' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__partners_and_people'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_partners_and_people';
  $strongarm->value = '4';
  $export['language_content_type_partners_and_people'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_partners_and_people';
  $strongarm->value = array();
  $export['menu_options_partners_and_people'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_partners_and_people';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_partners_and_people'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_partners_and_people';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_partners_and_people'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_partners_and_people';
  $strongarm->value = '1';
  $export['node_preview_partners_and_people'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_partners_and_people';
  $strongarm->value = 0;
  $export['node_submitted_partners_and_people'] = $strongarm;

  return $export;
}
