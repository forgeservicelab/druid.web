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
  $handler->display->display_options['css_class'] = 'feed';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Show more';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
  );
  $handler->display->display_options['filters']['type']['group'] = 2;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['type']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['type']['group_info']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['group_info']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['type']['group_info']['default_group_multiple'] = array(
    1 => '1',
    2 => '2',
    3 => '3',
  );
  $handler->display->display_options['filters']['type']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'News',
      'operator' => 'in',
      'value' => array(
        'news' => 'news',
        'all' => 0,
        'blog' => 0,
        'blog_post' => 0,
        'bulletin_board_item' => 0,
        'contact_us' => 0,
        'faq_item' => 0,
        'forge_role_information' => 0,
        'forge_webform' => 0,
        'company' => 0,
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
      'title' => 'Blog',
      'operator' => 'in',
      'value' => array(
        'blog_post' => 'blog_post',
        'all' => 0,
        'blog' => 0,
        'bulletin_board_item' => 0,
        'contact_us' => 0,
        'faq_item' => 0,
        'forge_role_information' => 0,
        'forge_webform' => 0,
        'news' => 0,
        'company' => 0,
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
    3 => array(
      'title' => 'Twitter',
      'operator' => 'in',
      'value' => array(
        'tweet' => 'tweet',
        'all' => 0,
        'blog' => 0,
        'blog_post' => 0,
        'bulletin_board_item' => 0,
        'contact_us' => 0,
        'faq_item' => 0,
        'forge_role_information' => 0,
        'forge_webform' => 0,
        'news' => 0,
        'company' => 0,
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
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'blog_post' => 'blog_post',
    'news' => 'news',
    'tweet' => 'tweet',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['authcache'] = array(
    'lifespan' => '3600',
    'peruser' => '1',
    'perpage' => '1',
    'clients' => array(
      'authcache_ajax' => array(
        'status' => '1',
        'weight' => '0',
      ),
    ),
    'fallback' => 'cancel',
    'status' => 0,
  );
  $handler->display->display_options['path'] = 'feed';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['block_caching'] = '8';
  $translatables['feed'] = array(
    t('Master'),
    t('Feed'),
    t('Show more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
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
