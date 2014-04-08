<?php
/**
 * @file
 * forge_web_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function forge_web_news_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_liftup_options|node|news|form';
  $field_group->group_name = 'group_liftup_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Liftup options',
    'weight' => '6',
    'children' => array(
      0 => 'field_liftup_title',
      1 => 'field_liftup_body',
      2 => 'field_news_liftup_video',
      3 => 'field_liftup_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-liftup-options field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_liftup_options|node|news|form'] = $field_group;

  return $export;
}
