<?php
/**
 * @file
 * forge_web_project_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function forge_web_project_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'on_going_projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'On going projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'On going projects';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Starting date (field_starting_date) */
  $handler->display->display_options['sorts']['field_starting_date_value']['id'] = 'field_starting_date_value';
  $handler->display->display_options['sorts']['field_starting_date_value']['table'] = 'field_data_field_starting_date';
  $handler->display->display_options['sorts']['field_starting_date_value']['field'] = 'field_starting_date_value';
  $handler->display->display_options['sorts']['field_starting_date_value']['order'] = 'DESC';
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
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Starting date (field_starting_date) */
  $handler->display->display_options['filters']['field_starting_date_value']['id'] = 'field_starting_date_value';
  $handler->display->display_options['filters']['field_starting_date_value']['table'] = 'field_data_field_starting_date';
  $handler->display->display_options['filters']['field_starting_date_value']['field'] = 'field_starting_date_value';
  $handler->display->display_options['filters']['field_starting_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_starting_date_value']['default_date'] = 'now';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['on_going_projects'] = array(
    t('Master'),
    t('On going projects'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['on_going_projects'] = $view;

  return $export;
}
