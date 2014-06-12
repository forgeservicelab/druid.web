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
  $field_group->identifier = 'group_base|node|company|form';
  $field_group->group_name = 'group_base';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'company';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Base group',
    'weight' => '0',
    'children' => array(
      0 => 'field_free_text_company',
      1 => 'field_logo',
      2 => 'field_page_title',
      3 => 'field_images_for_content',
      4 => 'metatags',
      5 => 'title',
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
  $export['group_base|node|company|form'] = $field_group;

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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_company|node|company|form';
  $field_group->group_name = 'group_company';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'company';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_base';
  $field_group->data = array(
    'label' => 'Company information',
    'weight' => '17',
    'children' => array(
      0 => 'field_company_address',
      1 => 'field_company_email',
      2 => 'field_company_website',
      3 => 'field_free_text_company',
      4 => 'field_company_contact_details_fo',
      5 => 'field_company_phone',
      6 => 'field_logo',
      7 => 'field_page_title',
      8 => 'field_company_email_outside_forg',
      9 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-company field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_company|node|company|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|company|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'company';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_base';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '18',
    'children' => array(
      0 => 'field_images_for_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-media field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_media|node|company|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar|node|company|form';
  $field_group->group_name = 'group_sidebar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'company';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar',
    'weight' => '1',
    'children' => array(
      0 => 'field_company_address',
      1 => 'field_company_email',
      2 => 'field_company_contact_details_fo',
      3 => 'field_company_phone',
      4 => 'field_company_webpage',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Sidebar',
      'instance_settings' => array(
        'required_fields' => 1,
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
  $export['group_sidebar|node|company|form'] = $field_group;

  return $export;
}
