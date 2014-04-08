<?php
/**
 * @file
 * forge_web_news.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function forge_web_news_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|liftup';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'liftup';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_liftup_title',
        1 => 'field_liftup_image',
        2 => 'field_news_liftup_video',
        3 => 'field_liftup_body',
      ),
    ),
    'fields' => array(
      'field_liftup_title' => 'ds_content',
      'field_liftup_image' => 'ds_content',
      'field_news_liftup_video' => 'ds_content',
      'field_liftup_body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|news|liftup'] = $ds_layout;

  return $export;
}
