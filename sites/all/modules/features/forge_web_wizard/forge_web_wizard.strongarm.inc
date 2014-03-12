<?php
/**
 * @file
 * forge_web_wizard.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function forge_web_wizard_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_forge_role_information';
  $strongarm->value = 0;
  $export['comment_anonymous_forge_role_information'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_forge_role_information';
  $strongarm->value = 1;
  $export['comment_default_mode_forge_role_information'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_forge_role_information';
  $strongarm->value = '50';
  $export['comment_default_per_page_forge_role_information'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_forge_role_information';
  $strongarm->value = '1';
  $export['comment_forge_role_information'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_forge_role_information';
  $strongarm->value = 1;
  $export['comment_form_location_forge_role_information'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_forge_role_information';
  $strongarm->value = '1';
  $export['comment_preview_forge_role_information'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_forge_role_information';
  $strongarm->value = 1;
  $export['comment_subject_field_forge_role_information'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_forge_role_information';
  $strongarm->value = '1';
  $export['language_content_type_forge_role_information'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_forge_role_information';
  $strongarm->value = array();
  $export['menu_options_forge_role_information'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_forge_role_information';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_forge_role_information'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_forge_role_information';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_forge_role_information'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_forge_role_information';
  $strongarm->value = '1';
  $export['node_preview_forge_role_information'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_forge_role_information';
  $strongarm->value = 1;
  $export['node_submitted_forge_role_information'] = $strongarm;

  return $export;
}