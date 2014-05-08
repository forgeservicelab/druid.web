<?php
/**
 * @file
 * forge_web_feeds.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function forge_web_feeds_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'feed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Feed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Feed';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Show more';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'type_1' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'All content',
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['rendered_entity']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
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
    'blog_post' => 'blog_post',
    'news' => 'news',
    'tweet' => 'tweet',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'blog_post' => 'blog_post',
    'news' => 'news',
    'page' => 'page',
    'tweet' => 'tweet',
  );
  $handler->display->display_options['filters']['type_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type_1']['expose']['operator_id'] = 'type_1_op';
  $handler->display->display_options['filters']['type_1']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type_1']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['type_1']['expose']['operator'] = 'type_1_op';
  $handler->display->display_options['filters']['type_1']['expose']['identifier'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['type_1']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['type_1']['group_info']['label'] = 'Type';
  $handler->display->display_options['filters']['type_1']['group_info']['identifier'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type_1']['group_info']['default_group'] = '3';
  $handler->display->display_options['filters']['type_1']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Blogs',
      'operator' => 'in',
      'value' => array(
        'blog_post' => 'blog_post',
        'all' => 0,
        'blog' => 0,
        'company' => 0,
        'contact_us' => 0,
        'faq_item' => 0,
        'forge_role_information' => 0,
        'forge_webform' => 0,
        'news' => 0,
        'page' => 0,
        'partners_and_people' => 0,
        'product_family' => 0,
        'offering' => 0,
        'project' => 0,
        'service_offering' => 0,
        'tutorial' => 0,
        'tweet' => 0,
        'webform' => 0,
      ),
    ),
    2 => array(
      'title' => 'Tweets',
      'operator' => 'in',
      'value' => array(
        'tweet' => 'tweet',
        'all' => 0,
        'blog' => 0,
        'blog_post' => 0,
        'company' => 0,
        'contact_us' => 0,
        'faq_item' => 0,
        'forge_role_information' => 0,
        'forge_webform' => 0,
        'news' => 0,
        'page' => 0,
        'partners_and_people' => 0,
        'product_family' => 0,
        'offering' => 0,
        'project' => 0,
        'service_offering' => 0,
        'tutorial' => 0,
        'webform' => 0,
      ),
    ),
    3 => array(
      'title' => 'Other content',
      'operator' => 'in',
      'value' => array(
        'news' => 'news',
        'page' => 'page',
        'all' => 0,
        'blog' => 0,
        'blog_post' => 0,
        'company' => 0,
        'contact_us' => 0,
        'faq_item' => 0,
        'forge_role_information' => 0,
        'forge_webform' => 0,
        'partners_and_people' => 0,
        'product_family' => 0,
        'offering' => 0,
        'project' => 0,
        'service_offering' => 0,
        'tutorial' => 0,
        'tweet' => 0,
        'webform' => 0,
      ),
    ),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'feed';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $translatables['feed'] = array(
    t('Master'),
    t('Feed'),
    t('Show more'),
    t('Apply'),
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
    t('Type'),
    t('Page'),
    t('more'),
    t('Block'),
  );
  $export['feed'] = $view;

  return $export;
}
