<?php
/**
 * @file
 * forge_web_tutorial.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function forge_web_tutorial_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'tutorial_highlighted';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tutorial highlighted';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Page title */
  $handler->display->display_options['fields']['field_page_title']['id'] = 'field_page_title';
  $handler->display->display_options['fields']['field_page_title']['table'] = 'field_data_field_page_title';
  $handler->display->display_options['fields']['field_page_title']['field'] = 'field_page_title';
  $handler->display->display_options['fields']['field_page_title']['label'] = '';
  $handler->display->display_options['fields']['field_page_title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_page_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_page_title']['element_default_classes'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'tutorial' => 'tutorial',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['tutorial_highlighted'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Block'),
  );
  $export['tutorial_highlighted'] = $view;

  $view = new view();
  $view->name = 'tutorial_sidebar_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tutorial sidebar block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Attachments';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Attachments */
  $handler->display->display_options['fields']['field_attachments']['id'] = 'field_attachments';
  $handler->display->display_options['fields']['field_attachments']['table'] = 'field_data_field_attachments';
  $handler->display->display_options['fields']['field_attachments']['field'] = 'field_attachments';
  $handler->display->display_options['fields']['field_attachments']['label'] = '';
  $handler->display->display_options['fields']['field_attachments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attachments']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_attachments']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_attachments']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_attachments']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_attachments']['multi_type'] = 'ul';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
  );
  /* Filter criterion: Content: Attachments (field_attachments:fid) */
  $handler->display->display_options['filters']['field_attachments_fid']['id'] = 'field_attachments_fid';
  $handler->display->display_options['filters']['field_attachments_fid']['table'] = 'field_data_field_attachments';
  $handler->display->display_options['filters']['field_attachments_fid']['field'] = 'field_attachments_fid';
  $handler->display->display_options['filters']['field_attachments_fid']['operator'] = 'not empty';

  /* Display: Attachments */
  $handler = $view->new_display('block', 'Attachments', 'block');

  /* Display: Videos */
  $handler = $view->new_display('block', 'Videos', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Videos';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link to video */
  $handler->display->display_options['fields']['field_link_to_video']['id'] = 'field_link_to_video';
  $handler->display->display_options['fields']['field_link_to_video']['table'] = 'field_data_field_link_to_video';
  $handler->display->display_options['fields']['field_link_to_video']['field'] = 'field_link_to_video';
  $handler->display->display_options['fields']['field_link_to_video']['label'] = '';
  $handler->display->display_options['fields']['field_link_to_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_to_video']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_link_to_video']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_to_video']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_link_to_video']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_link_to_video']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Link to video (field_link_to_video:url) */
  $handler->display->display_options['filters']['field_link_to_video_url']['id'] = 'field_link_to_video_url';
  $handler->display->display_options['filters']['field_link_to_video_url']['table'] = 'field_data_field_link_to_video';
  $handler->display->display_options['filters']['field_link_to_video_url']['field'] = 'field_link_to_video_url';
  $handler->display->display_options['filters']['field_link_to_video_url']['operator'] = 'not empty';
  $translatables['tutorial_sidebar_block'] = array(
    t('Master'),
    t('Attachments'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Videos'),
  );
  $export['tutorial_sidebar_block'] = $view;

  return $export;
}
