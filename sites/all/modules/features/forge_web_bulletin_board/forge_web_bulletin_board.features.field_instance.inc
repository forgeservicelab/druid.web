<?php
/**
 * @file
 * forge_web_bulletin_board.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function forge_web_bulletin_board_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-bulletin_board_item-field_bulletin_content'
  $field_instances['node-bulletin_board_item-field_bulletin_content'] = array(
    'bundle' => 'bulletin_board_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Here you can write more detailed information.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_bulletin_content',
    'label' => 'Content',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'exclude_cv' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-bulletin_board_item-field_bulletin_internal_link'
  $field_instances['node-bulletin_board_item-field_bulletin_internal_link'] = array(
    'bundle' => 'bulletin_board_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You can link content that you have created in FORGE to this bulletin board item.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_bulletin_internal_link',
    'label' => 'Internal link',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 1,
      ),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-bulletin_board_item-field_bulletin_summary'
  $field_instances['node-bulletin_board_item-field_bulletin_summary'] = array(
    'bundle' => 'bulletin_board_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Write here a short summary of what your bulletin board item is about.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_bulletin_summary',
    'label' => 'Summary',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'exclude_cv' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-bulletin_board_item-field_page_title'
  $field_instances['node-bulletin_board_item-field_page_title'] = array(
    'bundle' => 'bulletin_board_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_page_title',
    'label' => 'Title',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'exclude_cv' => FALSE,
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
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Here you can write more detailed information.');
  t('Internal link');
  t('Summary');
  t('Title');
  t('Write here a short summary of what your bulletin board item is about.');
  t('You can link content that you have created in FORGE to this bulletin board item.');

  return $field_instances;
}
