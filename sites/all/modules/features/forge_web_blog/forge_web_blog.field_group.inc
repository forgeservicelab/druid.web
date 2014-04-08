<?php
/**
 * @file
 * forge_web_blog.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function forge_web_blog_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_liftup_options|node|blog_post|form';
  $field_group->group_name = 'group_liftup_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog_post';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Liftup options',
    'weight' => '9',
    'children' => array(
      0 => 'field_liftup_image',
      1 => 'field_liftup_text',
      2 => 'field_blog_post_liftup_video',
      3 => 'field_liftup_title',
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
  $export['group_liftup_options|node|blog_post|form'] = $field_group;

  return $export;
}
