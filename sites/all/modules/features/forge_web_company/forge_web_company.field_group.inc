<?php
/**
 * @file
 * forge_web_company.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function forge_web_company_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_company_header|node|company|default';
  $field_group->group_name = 'group_company_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'company';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Company header',
    'weight' => '0',
    'children' => array(
      0 => 'field_logo',
      1 => 'field_page_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Company header',
      'instance_settings' => array(
        'classes' => 'company-header',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_company_header|node|company|default'] = $field_group;

  return $export;
}
