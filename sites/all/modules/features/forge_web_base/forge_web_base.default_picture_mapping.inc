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

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'offering_logo_retina';
  $picture_mapping->breakpoint_group = 'offering_logo_retina';
  $picture_mapping->mapping = array(
    'custom.user.retina_display' => array(
      '1x' => 'retina_offering_logo_custom_user_retina_display_1x',
      '2x' => 'retina_offering_logo_custom_user_retina_display_2x',
    ),
  );
  $export['offering_logo_retina'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'slideshow_main_retina';
  $picture_mapping->breakpoint_group = 'slideshow_main_retina';
  $picture_mapping->mapping = array(
    'custom.user.retina_display' => array(
      '1x' => 'flexslider_full',
      '2x' => 'retina_flexslider_full_custom_user_retina_display_2x',
    ),
  );
  $export['slideshow_main_retina'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'slideshow_thumb_retina';
  $picture_mapping->breakpoint_group = 'slideshow_thumb_retina';
  $picture_mapping->mapping = array(
    'custom.user.retina_display' => array(
      '1x' => 'flexslider_thumbnail',
      '2x' => 'retina_flexslider_thumbnail_custom_user_retina_display_2x',
    ),
  );
  $export['slideshow_thumb_retina'] = $picture_mapping;

  return $export;
}
