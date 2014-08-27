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
  $handler->display->display_options['css_class'] = 'l-listing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '300';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '300';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Page title (field_page_title) */
  $handler->display->display_options['sorts']['field_page_title_value']['id'] = 'field_page_title_value';
  $handler->display->display_options['sorts']['field_page_title_value']['table'] = 'field_data_field_page_title';
  $handler->display->display_options['sorts']['field_page_title_value']['field'] = 'field_page_title_value';
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['on_going_projects'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['on_going_projects'] = $view;

  $view = new view();
  $view->name = 'project_sidebar';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Project sidebar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'sidebar-block sidebar-block--long-labels';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Responsible organization */
  $handler->display->display_options['fields']['field_responsible_organization']['id'] = 'field_responsible_organization';
  $handler->display->display_options['fields']['field_responsible_organization']['table'] = 'field_data_field_responsible_organization';
  $handler->display->display_options['fields']['field_responsible_organization']['field'] = 'field_responsible_organization';
  $handler->display->display_options['fields']['field_responsible_organization']['label'] = 'Organization';
  $handler->display->display_options['fields']['field_responsible_organization']['element_class'] = 'sidebar-block__item-content no-list-style';
  $handler->display->display_options['fields']['field_responsible_organization']['element_label_class'] = 'sidebar-block__item-label';
  $handler->display->display_options['fields']['field_responsible_organization']['element_wrapper_class'] = 'sidebar-block__item';
  $handler->display->display_options['fields']['field_responsible_organization']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_responsible_organization']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_responsible_organization']['multi_type'] = 'ul';
  /* Field: Content: Starting date */
  $handler->display->display_options['fields']['field_starting_date']['id'] = 'field_starting_date';
  $handler->display->display_options['fields']['field_starting_date']['table'] = 'field_data_field_starting_date';
  $handler->display->display_options['fields']['field_starting_date']['field'] = 'field_starting_date';
  $handler->display->display_options['fields']['field_starting_date']['element_class'] = 'sidebar-block__item-content';
  $handler->display->display_options['fields']['field_starting_date']['element_label_class'] = 'sidebar-block__item-label';
  $handler->display->display_options['fields']['field_starting_date']['element_wrapper_class'] = 'sidebar-block__item';
  $handler->display->display_options['fields']['field_starting_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_starting_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'project' => 'project',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['project_sidebar'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Organization'),
    t('Starting date'),
    t('All'),
    t('Block'),
  );
  $export['project_sidebar'] = $view;

  $view = new view();
  $view->name = 'project_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Project slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '300';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '300';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'slideshow';
  $handler->display->display_options['style_options']['captionfield'] = 'field_main_images_1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Screenshots */
  $handler->display->display_options['fields']['field_main_images']['id'] = 'field_main_images';
  $handler->display->display_options['fields']['field_main_images']['table'] = 'field_data_field_main_images';
  $handler->display->display_options['fields']['field_main_images']['field'] = 'field_main_images';
  $handler->display->display_options['fields']['field_main_images']['label'] = '';
  $handler->display->display_options['fields']['field_main_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_images']['type'] = 'picture';
  $handler->display->display_options['fields']['field_main_images']['settings'] = array(
    'picture_group' => 'slideshow_main_retina',
    'fallback_image_style' => '',
    'image_link' => '',
    'colorbox' => 'mobile_and_tablet',
  );
  $handler->display->display_options['fields']['field_main_images']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_main_images']['delta_offset'] = '0';
  /* Field: Content: Screenshots */
  $handler->display->display_options['fields']['field_main_images_1']['id'] = 'field_main_images_1';
  $handler->display->display_options['fields']['field_main_images_1']['table'] = 'field_data_field_main_images';
  $handler->display->display_options['fields']['field_main_images_1']['field'] = 'field_main_images';
  $handler->display->display_options['fields']['field_main_images_1']['label'] = 'Caption';
  $handler->display->display_options['fields']['field_main_images_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_images_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_main_images_1']['alter']['text'] = '[field_main_images_1-title]';
  $handler->display->display_options['fields']['field_main_images_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_images_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_main_images_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_main_images_1']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'project' => 'project',
  );
  /* Filter criterion: Content: Screenshots (field_main_images:fid) */
  $handler->display->display_options['filters']['field_main_images_fid']['id'] = 'field_main_images_fid';
  $handler->display->display_options['filters']['field_main_images_fid']['table'] = 'field_data_field_main_images';
  $handler->display->display_options['filters']['field_main_images_fid']['field'] = 'field_main_images_fid';
  $handler->display->display_options['filters']['field_main_images_fid']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['project_slideshow'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Caption'),
    t('[field_main_images_1-title]'),
    t('All'),
    t('Block'),
  );
  $export['project_slideshow'] = $view;

  return $export;
}
