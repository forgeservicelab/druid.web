<?php
/**
 * @file
 * forge_web_first_login.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function forge_web_first_login_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-forge_service-body'
  $field_instances['node-forge_service-body'] = array(
    'bundle' => 'forge_service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'body',
    'label' => 'Service description',
    'required' => 1,
    'settings' => array(
      'display_summary' => 1,
      'entity_translation_sync' => FALSE,
      'exclude_cv' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-forge_service-field_forge_service_image'
  $field_instances['node-forge_service-field_forge_service_image'] = array(
    'bundle' => 'forge_service',
    'deleted' => 0,
    'description' => 'Add an image describing your service.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_forge_service_image',
    'label' => 'Service icon',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'exclude_cv' => FALSE,
      'file_directory' => '',
      'file_extensions' => 'png jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 0,
          'icon_link' => 0,
          'image' => 0,
          'image_flexslider_full' => 0,
          'image_flexslider_thumbnail' => 0,
          'image_front_page_image' => 0,
          'image_insert_full_scale_width_1120px' => 0,
          'image_insert_half_scale_width_560px' => 0,
          'image_insert_tall_scale_height_600px' => 0,
          'image_large' => 0,
          'image_liftup_image' => 0,
          'image_medium' => 0,
          'image_offering_logo' => 0,
          'image_partners_people_large' => 0,
          'image_partners_people_small' => 0,
          'image_responsive_custom_user_mobile_1x' => 0,
          'image_responsive_custom_user_tablet_1x' => 0,
          'image_retina_custom_user_retina_display_1x' => 0,
          'image_retina_custom_user_retina_display_2x' => 0,
          'image_retina_flexslider_full_custom_user_retina_display_2x' => 0,
          'image_retina_offering_logo_custom_user_retina_display_1x' => 0,
          'image_retina_offering_logo_custom_user_retina_display_2x' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'preview_image_style' => 'medium',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-forge_service-field_forge_service_link'
  $field_instances['node-forge_service-field_forge_service_link'] = array(
    'bundle' => 'forge_service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add link to service.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_forge_service_link',
    'label' => 'Service link',
    'required' => 1,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'entity_translation_sync' => FALSE,
      'exclude_cv' => FALSE,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'link_field',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add an image describing your service.');
  t('Add link to service.');
  t('Service description');
  t('Service icon');
  t('Service link');

  return $field_instances;
}
