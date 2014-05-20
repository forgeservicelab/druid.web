<?php
/**
 * @file
 * forge_web_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function forge_web_base_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "multifield" && $api == "multifield") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
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

  // Exported image style: insert_full_scale_width_1120px.
  $styles['insert_full_scale_width_1120px'] = array(
    'name' => 'insert_full_scale_width_1120px',
    'label' => 'Insert Full (scale width: 1120px)',
    'effects' => array(
      11 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1120,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: insert_half_scale_width_560px.
  $styles['insert_half_scale_width_560px'] = array(
    'name' => 'insert_half_scale_width_560px',
    'label' => 'Insert Half (scale width: 560px)',
    'effects' => array(
      12 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 560,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: insert_tall_scale_height_600px.
  $styles['insert_tall_scale_height_600px'] = array(
    'name' => 'insert_tall_scale_height_600px',
    'label' => 'Insert Tall (scale height: 600px)',
    'effects' => array(
      13 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 600,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: responsive_custom_user_mobile_1x.
  $styles['responsive_custom_user_mobile_1x'] = array(
    'name' => 'responsive_custom_user_mobile_1x',
    'label' => 'responsive_custom_user_mobile_1x',
    'effects' => array(
      8 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: responsive_custom_user_tablet_1x.
  $styles['responsive_custom_user_tablet_1x'] = array(
    'name' => 'responsive_custom_user_tablet_1x',
    'label' => 'responsive_custom_user_tablet_1x',
    'effects' => array(
      7 => array(
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

  // Exported image style: retina_flexslider_full_custom_user_retina_display_2x.
  $styles['retina_flexslider_full_custom_user_retina_display_2x'] = array(
    'name' => 'retina_flexslider_full_custom_user_retina_display_2x',
    'label' => 'retina_flexslider_full_custom_user_retina_display_2x',
    'effects' => array(
      19 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 2240,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: retina_offering_logo_custom_user_retina_display_1x.
  $styles['retina_offering_logo_custom_user_retina_display_1x'] = array(
    'name' => 'retina_offering_logo_custom_user_retina_display_1x',
    'label' => 'retina_offering_logo_custom_user_retina_display_1x',
    'effects' => array(
      17 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 75,
          'height' => 75,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: retina_offering_logo_custom_user_retina_display_2x.
  $styles['retina_offering_logo_custom_user_retina_display_2x'] = array(
    'name' => 'retina_offering_logo_custom_user_retina_display_2x',
    'label' => 'retina_offering_logo_custom_user_retina_display_2x',
    'effects' => array(
      18 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => 150,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
