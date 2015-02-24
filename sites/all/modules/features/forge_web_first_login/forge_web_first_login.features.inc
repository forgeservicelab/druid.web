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
      6 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 150,
          'height' => 60,
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
