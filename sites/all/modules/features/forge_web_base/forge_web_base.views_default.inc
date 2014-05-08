<?php
/**
 * @file
 * forge_web_base.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function forge_web_base_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'what_why_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'What & Why blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Liftup image */
  $handler->display->display_options['fields']['field_page_liftup_image']['id'] = 'field_page_liftup_image';
  $handler->display->display_options['fields']['field_page_liftup_image']['table'] = 'field_data_field_page_liftup_image';
  $handler->display->display_options['fields']['field_page_liftup_image']['field'] = 'field_page_liftup_image';
  $handler->display->display_options['fields']['field_page_liftup_image']['label'] = '';
  $handler->display->display_options['fields']['field_page_liftup_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_liftup_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_page_liftup_image']['settings'] = array(
    'image_style' => 'front_page_image',
    'image_link' => '',
  );
  /* Field: Content: Page title */
  $handler->display->display_options['fields']['field_page_title']['id'] = 'field_page_title';
  $handler->display->display_options['fields']['field_page_title']['table'] = 'field_data_field_page_title';
  $handler->display->display_options['fields']['field_page_title']['field'] = 'field_page_title';
  $handler->display->display_options['fields']['field_page_title']['label'] = '';
  $handler->display->display_options['fields']['field_page_title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_page_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_title']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'forge-web-block-body-wrapper';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );

  /* Display: Block: What FORGE */
  $handler = $view->new_display('block', 'Block: What FORGE', 'block');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );
  /* Filter criterion: Content: Liftup location (field_liftup_location) */
  $handler->display->display_options['filters']['field_liftup_location_value']['id'] = 'field_liftup_location_value';
  $handler->display->display_options['filters']['field_liftup_location_value']['table'] = 'field_data_field_liftup_location';
  $handler->display->display_options['filters']['field_liftup_location_value']['field'] = 'field_liftup_location_value';
  $handler->display->display_options['filters']['field_liftup_location_value']['value'] = array(
    'front_page_big_liftup_1' => 'front_page_big_liftup_1',
  );

  /* Display: Block: Why FORGE */
  $handler = $view->new_display('block', 'Block: Why FORGE', 'block_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );
  /* Filter criterion: Content: Liftup location (field_liftup_location) */
  $handler->display->display_options['filters']['field_liftup_location_value']['id'] = 'field_liftup_location_value';
  $handler->display->display_options['filters']['field_liftup_location_value']['table'] = 'field_data_field_liftup_location';
  $handler->display->display_options['filters']['field_liftup_location_value']['field'] = 'field_liftup_location_value';
  $handler->display->display_options['filters']['field_liftup_location_value']['value'] = array(
    'front_page_big_liftup_2' => 'front_page_big_liftup_2',
  );
  $translatables['what_why_blocks'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block: What FORGE'),
    t('Block: Why FORGE'),
  );
  $export['what_why_blocks'] = $view;

  return $export;
}
