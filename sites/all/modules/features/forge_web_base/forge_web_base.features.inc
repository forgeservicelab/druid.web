<?php
/**
 * @file
 * forge_web_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function forge_web_base_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "multifield" && $api == "multifield") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function forge_web_base_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function forge_web_base_image_default_styles() {
  $styles = array();

  // Exported image style: front_page_image.
  $styles['front_page_image'] = array(
    'name' => 'front_page_image',
    'label' => 'Front page image',
    'effects' => array(
      6 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 420,
          'height' => 800,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
