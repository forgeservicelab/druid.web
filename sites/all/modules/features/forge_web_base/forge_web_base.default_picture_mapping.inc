<?php
/**
 * @file
 * forge_web_base.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function forge_web_base_default_picture_mapping() {
  $export = array();

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'mobile_and_tablet';
  $picture_mapping->breakpoint_group = 'mobile_and_tablet';
  $picture_mapping->mapping = array(
    'custom.user.tablet' => array(
      '1x' => 'responsive_custom_user_tablet_1x',
    ),
    'custom.user.mobile' => array(
      '1x' => 'responsive_custom_user_mobile_1x',
    ),
  );
  $export['mobile_and_tablet'] = $picture_mapping;

  return $export;
}
