<?php
/**
 * @file
 * forge_web_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function forge_web_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_default_node_index';
  $view->human_name = 'Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search';
  $handler->display->display_options['css_class'] = 'search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'search_api_views_fulltext' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'search-result[field_logo_1]';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Node: Project logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_type'] = '0';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_logo']['element_wrapper_class'] = 'logo';
  $handler->display->display_options['fields']['field_logo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['type'] = 'picture';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'picture_group' => 'offering_logo_retina',
    'fallback_image_style' => 'offering_logo',
    'image_link' => 'content',
    'colorbox' => 'mobile_and_tablet',
  );
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_class'] = 'listing-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Oneliner */
  $handler->display->display_options['fields']['field_oneliner']['id'] = 'field_oneliner';
  $handler->display->display_options['fields']['field_oneliner']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_oneliner']['field'] = 'field_oneliner';
  $handler->display->display_options['fields']['field_oneliner']['label'] = '';
  $handler->display->display_options['fields']['field_oneliner']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_oneliner']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_oneliner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oneliner']['hide_empty'] = TRUE;
  /* Field: Indexed Node: Answer */
  $handler->display->display_options['fields']['field_answer']['id'] = 'field_answer';
  $handler->display->display_options['fields']['field_answer']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_answer']['field'] = 'field_answer';
  $handler->display->display_options['fields']['field_answer']['label'] = '';
  $handler->display->display_options['fields']['field_answer']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_answer']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_answer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_answer']['hide_empty'] = TRUE;
  /* Field: Indexed Node: News body */
  $handler->display->display_options['fields']['field_news_body']['id'] = 'field_news_body';
  $handler->display->display_options['fields']['field_news_body']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_news_body']['field'] = 'field_news_body';
  $handler->display->display_options['fields']['field_news_body']['label'] = '';
  $handler->display->display_options['fields']['field_news_body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_news_body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_news_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_body']['hide_empty'] = TRUE;
  /* Field: The main body text: Text (indexed) */
  $handler->display->display_options['fields']['body_value']['id'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['body_value']['field'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['label'] = '';
  $handler->display->display_options['fields']['body_value']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body_value']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body_value']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body_value']['alter']['preserve_tags'] = '<p> <br>';
  $handler->display->display_options['fields']['body_value']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_value']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body_value']['link_to_entity'] = 0;
  /* Field: Indexed Node: Free text organization */
  $handler->display->display_options['fields']['field_free_text_company']['id'] = 'field_free_text_company';
  $handler->display->display_options['fields']['field_free_text_company']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_free_text_company']['field'] = 'field_free_text_company';
  $handler->display->display_options['fields']['field_free_text_company']['label'] = '';
  $handler->display->display_options['fields']['field_free_text_company']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_free_text_company']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_free_text_company']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_free_text_company']['alter']['preserve_tags'] = '<p> <br>';
  $handler->display->display_options['fields']['field_free_text_company']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_free_text_company']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_free_text_company']['hide_empty'] = TRUE;
  /* Field: Indexed Node: tweet body */
  $handler->display->display_options['fields']['field_tweet_body']['id'] = 'field_tweet_body';
  $handler->display->display_options['fields']['field_tweet_body']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_tweet_body']['field'] = 'field_tweet_body';
  $handler->display->display_options['fields']['field_tweet_body']['label'] = '';
  $handler->display->display_options['fields']['field_tweet_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tweet_body']['hide_empty'] = TRUE;
  /* Field: Indexed Node: Project logo */
  $handler->display->display_options['fields']['field_logo_1']['id'] = 'field_logo_1';
  $handler->display->display_options['fields']['field_logo_1']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_logo_1']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo_1']['label'] = '';
  $handler->display->display_options['fields']['field_logo_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_logo_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_logo_1']['alter']['text'] = ' search-result--logo';
  $handler->display->display_options['fields']['field_logo_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_logo_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Keyword';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'keyword';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog_post' => 'blog_post',
    'contact_us' => 'contact_us',
    'faq_item' => 'faq_item',
    'news' => 'news',
    'company' => 'company',
    'page' => 'page',
    'offering' => 'offering',
    'project' => 'project',
    'service_offering' => 'service_offering',
    'tweet' => 'tweet',
  );
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'search';
  $translatables['search'] = array(
    t('Master'),
    t('Search'),
    t('more'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t(' search-result--logo'),
    t('Keyword'),
    t('Page'),
  );
  $export['search'] = $view;

  return $export;
}
