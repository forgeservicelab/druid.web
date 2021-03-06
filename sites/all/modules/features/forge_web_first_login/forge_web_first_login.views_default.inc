<?php
/**
 * @file
 * forge_web_first_login.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function forge_web_first_login_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'first_time';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'First time';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Services';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
    8 => '8',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Forge cloud service platform is an R & D & I environment. Mauris sed libero. Suspendisse facilisis nulla in lacinia laoreet, lorem velit accumsan velit vel mattis libero nisl et sem. Proin interdum maecenas massa turpis sagittis in, interdum non lobortis vitae massa. ';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: Content: Service icon */
  $handler->display->display_options['fields']['field_forge_service_image']['id'] = 'field_forge_service_image';
  $handler->display->display_options['fields']['field_forge_service_image']['table'] = 'field_data_field_forge_service_image';
  $handler->display->display_options['fields']['field_forge_service_image']['field'] = 'field_forge_service_image';
  $handler->display->display_options['fields']['field_forge_service_image']['label'] = '';
  $handler->display->display_options['fields']['field_forge_service_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_forge_service_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_forge_service_image']['settings'] = array(
    'image_style' => 'service-logo',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Service link */
  $handler->display->display_options['fields']['field_forge_service_link']['id'] = 'field_forge_service_link';
  $handler->display->display_options['fields']['field_forge_service_link']['table'] = 'field_data_field_forge_service_link';
  $handler->display->display_options['fields']['field_forge_service_link']['field'] = 'field_forge_service_link';
  $handler->display->display_options['fields']['field_forge_service_link']['label'] = '';
  $handler->display->display_options['fields']['field_forge_service_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_forge_service_link']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
    'forge_service' => 'forge_service',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['first_time'] = array(
    t('Master'),
    t('Services'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Forge cloud service platform is an R & D & I environment. Mauris sed libero. Suspendisse facilisis nulla in lacinia laoreet, lorem velit accumsan velit vel mattis libero nisl et sem. Proin interdum maecenas massa turpis sagittis in, interdum non lobortis vitae massa. '),
    t('Block'),
  );
  $export['first_time'] = $view;

  return $export;
}
