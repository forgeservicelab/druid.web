<?php
/**
 * @file
 * forge_web_node_export.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function forge_web_node_export_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-tutorial-field_page_title'
  $field_instances['node-tutorial-field_page_title'] = array(
    'bundle' => 'tutorial',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_page_title',
    'label' => 'Tutorial title',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Tutorial title');

  return $field_instances;
}
