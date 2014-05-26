<?php
/**
 * @file
 * forge_web_project_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function forge_web_project_page_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_header|node|project|default';
  $field_group->group_name = 'group_project_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project header',
    'weight' => '0',
    'children' => array(
      0 => 'field_page_title',
      1 => 'field_logo',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Project header',
      'instance_settings' => array(
        'classes' => 'project-header',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_project_header|node|project|default'] = $field_group;

  return $export;
}
