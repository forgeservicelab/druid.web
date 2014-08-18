<?php
/**
 * @file
 * forge_web_bulletin_board.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function forge_web_bulletin_board_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bulletin_base|node|bulletin_board_item|form';
  $field_group->group_name = 'group_bulletin_base';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'bulletin_board_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Base group',
    'weight' => '0',
    'children' => array(
      0 => 'field_page_title',
      1 => 'field_bulletin_summary',
      2 => 'field_bulletin_content',
      3 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Base group',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'admin-content-sidebar-right',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_bulletin_base|node|bulletin_board_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|bulletin_board_item|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'bulletin_board_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '5',
    'children' => array(
      0 => 'field_bulletin_internal_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Related content',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'admin-sidebar-right',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_related_content|node|bulletin_board_item|form'] = $field_group;

  return $export;
}
