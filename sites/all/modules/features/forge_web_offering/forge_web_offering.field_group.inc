<?php
/**
 * @file
 * forge_web_offering.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function forge_web_offering_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basegroup|node|offering|form';
  $field_group->group_name = 'group_basegroup';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offering';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_community',
      1 => 'group_info',
      2 => 'group_intro',
      3 => 'group_video',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_basegroup|node|offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basegroup|node|service_offering|form';
  $field_group->group_name = 'group_basegroup';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_offering';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_community',
      1 => 'group_info',
      2 => 'group_intro',
      3 => 'group_video',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-basegroup field-group-htabs',
      ),
    ),
  );
  $export['group_basegroup|node|service_offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_community|node|offering|form';
  $field_group->group_name = 'group_community';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offering';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basegroup';
  $field_group->data = array(
    'label' => 'Community',
    'weight' => '3',
    'children' => array(
      0 => 'field_customer_rating',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_community|node|offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_community|node|service_offering|form';
  $field_group->group_name = 'group_community';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_offering';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basegroup';
  $field_group->data = array(
    'label' => 'Community',
    'weight' => '16',
    'children' => array(
      0 => 'field_customer_rating',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-community field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_community|node|service_offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|offering|form';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offering';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basegroup';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '2',
    'children' => array(
      0 => 'field_available_support',
      1 => 'field_brief_overview_description',
      2 => 'field_contact_information',
      3 => 'field_detailed_description',
      4 => 'field_experimental',
      5 => 'field_more_information',
      6 => 'field_live_demo_url',
      7 => 'field_show_live_url_for_everyone',
      8 => 'field_pricing_information',
      9 => 'field_cancellation_refund_policy',
      10 => 'field_geographical_coverage',
      11 => 'field_lis_and_price',
      12 => 'field_lic_and_price2',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_info|node|offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|service_offering|form';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_offering';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basegroup';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '15',
    'children' => array(
      0 => 'field_brief_overview_description',
      1 => 'field_contact_information',
      2 => 'field_detailed_description',
      3 => 'field_more_information',
      4 => 'field_live_demo_url',
      5 => 'field_pricing_information',
      6 => 'field_cancellation_refund_policy',
      7 => 'field_geographical_coverage',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-info field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_info|node|service_offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_intro|node|offering|form';
  $field_group->group_name = 'group_intro';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offering';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basegroup';
  $field_group->data = array(
    'label' => 'Intro',
    'weight' => '1',
    'children' => array(
      0 => 'field_category',
      1 => 'field_logo',
      2 => 'field_offering_tags',
      3 => 'field_offering_title',
      4 => 'field_oneliner',
      5 => 'field_organizer',
      6 => 'field_collection',
      7 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_intro|node|offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_intro|node|service_offering|form';
  $field_group->group_name = 'group_intro';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_offering';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basegroup';
  $field_group->data = array(
    'label' => 'Intro',
    'weight' => '14',
    'children' => array(
      0 => 'field_category',
      1 => 'field_logo',
      2 => 'field_offering_tags',
      3 => 'field_offering_title',
      4 => 'field_oneliner',
      5 => 'field_organizer',
      6 => 'field_collection',
      7 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-intro field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_intro|node|service_offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video|node|offering|form';
  $field_group->group_name = 'group_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offering';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basegroup';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '4',
    'children' => array(
      0 => 'field_upload_video',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_video|node|offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video|node|service_offering|form';
  $field_group->group_name = 'group_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_offering';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basegroup';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '17',
    'children' => array(
      0 => 'field_upload_video',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-video field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_video|node|service_offering|form'] = $field_group;

  return $export;
}
