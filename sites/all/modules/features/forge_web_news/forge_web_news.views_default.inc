<?php
/**
 * @file
 * forge_web_news.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function forge_web_news_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'news_sidebar_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News sidebar block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Links';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['alter']['max_length'] = '45';
  $handler->display->display_options['fields']['field_link']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_link']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_link']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_link']['multi_type'] = 'ul';
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
    'news' => 'news',
  );
  /* Filter criterion: Content: Link (field_link:url) */
  $handler->display->display_options['filters']['field_link_url']['id'] = 'field_link_url';
  $handler->display->display_options['filters']['field_link_url']['table'] = 'field_data_field_link';
  $handler->display->display_options['filters']['field_link_url']['field'] = 'field_link_url';
  $handler->display->display_options['filters']['field_link_url']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['news_sidebar_block'] = array(
    t('Master'),
    t('Links'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Block'),
  );
  $export['news_sidebar_block'] = $view;

  $view = new view();
  $view->name = 'news_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News slideshow';
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
    'news' => 'news',
  );
  /* Filter criterion: Content: Screenshots (field_main_images:fid) */
  $handler->display->display_options['filters']['field_main_images_fid']['id'] = 'field_main_images_fid';
  $handler->display->display_options['filters']['field_main_images_fid']['table'] = 'field_data_field_main_images';
  $handler->display->display_options['filters']['field_main_images_fid']['field'] = 'field_main_images_fid';
  $handler->display->display_options['filters']['field_main_images_fid']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['news_slideshow'] = array(
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
  $export['news_slideshow'] = $view;

  $view = new view();
  $view->name = 'news_video';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News video';
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
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_news_video']['id'] = 'field_news_video';
  $handler->display->display_options['fields']['field_news_video']['table'] = 'field_data_field_news_video';
  $handler->display->display_options['fields']['field_news_video']['field'] = 'field_news_video';
  $handler->display->display_options['fields']['field_news_video']['label'] = '';
  $handler->display->display_options['fields']['field_news_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_news_video']['settings'] = array(
    'video_style' => 'normal',
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
    'news' => 'news',
  );
  /* Filter criterion: Content: Video - Video URL */
  $handler->display->display_options['filters']['field_news_video_video_url']['id'] = 'field_news_video_video_url';
  $handler->display->display_options['filters']['field_news_video_video_url']['table'] = 'field_data_field_news_video';
  $handler->display->display_options['filters']['field_news_video_video_url']['field'] = 'field_news_video_video_url';
  $handler->display->display_options['filters']['field_news_video_video_url']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['news_video'] = array(
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
  $export['news_video'] = $view;

  return $export;
}
