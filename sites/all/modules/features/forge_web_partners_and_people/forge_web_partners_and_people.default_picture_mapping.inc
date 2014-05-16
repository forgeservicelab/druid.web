<?php
/**
 * @file
 * forge_web_partners_and_people.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function forge_web_partners_and_people_default_picture_mapping() {
  $export = array();

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'retina_display';
  $picture_mapping->breakpoint_group = 'retina_display';
  $picture_mapping->mapping = array(
    'custom.user.retina_display' => array(
      '1x' => 'retina_custom_user_retina_display_1x',
      '2x' => 'retina_custom_user_retina_display_2x',
    ),
  );
  $export['retina_display'] = $picture_mapping;

  return $export;
}
