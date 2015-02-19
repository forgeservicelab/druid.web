<?php
/**
 * @file
 * forge_web_first_login.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function forge_web_first_login_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function forge_web_first_login_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function forge_web_first_login_image_default_styles() {
  $styles = array();

  // Exported image style: service-logo.
  $styles['service-logo'] = array(
    'name' => 'service-logo',
    'label' => 'service-logo',
    'effects' => array(
      5 => array(
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
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function forge_web_first_login_node_info() {
  $items = array(
    'forge_service' => array(
      'name' => t('Forge service'),
      'base' => 'node_content',
      'description' => t('A service provided by FORGE.'),
      'has_title' => '1',
      'title_label' => t('Service title'),
      'help' => t('This title field is only used internally, not displayed publicly.'),
    ),
  );
  return $items;
}
