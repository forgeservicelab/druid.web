<?php
/**
 * @file
 * forge_web_blog.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function forge_web_blog_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'blog_authors';
  $view->description = 'Shows information about the blog author(s)';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Blog: Author(s)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Blog authors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_blog_authors_node']['id'] = 'reverse_field_blog_authors_node';
  $handler->display->display_options['relationships']['reverse_field_blog_authors_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_blog_authors_node']['field'] = 'reverse_field_blog_authors_node';
  $handler->display->display_options['relationships']['reverse_field_blog_authors_node']['label'] = 'Blog referencing user';
  $handler->display->display_options['relationships']['reverse_field_blog_authors_node']['required'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_type'] = '0';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'medium';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_user_description']['id'] = 'field_user_description';
  $handler->display->display_options['fields']['field_user_description']['table'] = 'field_data_field_user_description';
  $handler->display->display_options['fields']['field_user_description']['field'] = 'field_user_description';
  $handler->display->display_options['fields']['field_user_description']['label'] = '';
  $handler->display->display_options['fields']['field_user_description']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_user_description']['element_class'] = 'user-description';
  $handler->display->display_options['fields']['field_user_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_description']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_user_description']['element_default_classes'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_blog_authors_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    4 => '4',
  );

  /* Display: Blog page block */
  $handler = $view->new_display('block', 'Blog page block', 'block');

  /* Display: Blog-post page block */
  $handler = $view->new_display('block', 'Blog-post page block', 'block_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_blog_authors_node']['id'] = 'reverse_field_blog_authors_node';
  $handler->display->display_options['relationships']['reverse_field_blog_authors_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_blog_authors_node']['field'] = 'reverse_field_blog_authors_node';
  $handler->display->display_options['relationships']['reverse_field_blog_authors_node']['label'] = 'Blog referencing user';
  $handler->display->display_options['relationships']['reverse_field_blog_authors_node']['required'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_blog_node']['id'] = 'reverse_field_blog_node';
  $handler->display->display_options['relationships']['reverse_field_blog_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_blog_node']['field'] = 'reverse_field_blog_node';
  $handler->display->display_options['relationships']['reverse_field_blog_node']['relationship'] = 'reverse_field_blog_authors_node';
  $handler->display->display_options['relationships']['reverse_field_blog_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_blog_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $translatables['blog_authors'] = array(
    t('Master'),
    t('Blog authors'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Blog referencing user'),
    t('All'),
    t('Blog page block'),
    t('Blog-post page block'),
    t('Content referencing Content from field_blog'),
  );
  $export['blog_authors'] = $view;

  $view = new view();
  $view->name = 'blog_latest_blog_posts';
  $view->description = 'Lists latest blog posts regardless of the blog';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Blog: Latest blog posts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Latest blog posts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Liftup image */
  $handler->display->display_options['fields']['field_liftup_image']['id'] = 'field_liftup_image';
  $handler->display->display_options['fields']['field_liftup_image']['table'] = 'field_data_field_liftup_image';
  $handler->display->display_options['fields']['field_liftup_image']['field'] = 'field_liftup_image';
  $handler->display->display_options['fields']['field_liftup_image']['label'] = '';
  $handler->display->display_options['fields']['field_liftup_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_liftup_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_liftup_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_liftup_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_liftup_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_liftup_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Liftup text */
  $handler->display->display_options['fields']['field_liftup_text']['id'] = 'field_liftup_text';
  $handler->display->display_options['fields']['field_liftup_text']['table'] = 'field_data_field_liftup_text';
  $handler->display->display_options['fields']['field_liftup_text']['field'] = 'field_liftup_text';
  $handler->display->display_options['fields']['field_liftup_text']['label'] = '';
  $handler->display->display_options['fields']['field_liftup_text']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_liftup_text']['element_class'] = 'blog-post-description';
  $handler->display->display_options['fields']['field_liftup_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_liftup_text']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_liftup_text']['element_default_classes'] = FALSE;
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
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
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
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['blog_latest_blog_posts'] = array(
    t('Master'),
    t('Latest blog posts'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Block'),
  );
  $export['blog_latest_blog_posts'] = $view;

  $view = new view();
  $view->name = 'blog_latest_comments_';
  $view->description = 'Shows latest comments on a specific blog';
  $view->tag = 'default';
  $view->base_table = 'comment';
  $view->human_name = 'Blog: Latest comments ';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Latest comments ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Comment: Content */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Field: Comment: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'comment';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  /* Field: Comment: ID */
  $handler->display->display_options['fields']['cid']['id'] = 'cid';
  $handler->display->display_options['fields']['cid']['table'] = 'comment';
  $handler->display->display_options['fields']['cid']['field'] = 'cid';
  $handler->display->display_options['fields']['cid']['label'] = '';
  $handler->display->display_options['fields']['cid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['cid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cid']['link_to_comment'] = FALSE;
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['label'] = '';
  $handler->display->display_options['fields']['comment_body']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['alter']['path'] = 'node/[nid]#comment-[cid]';
  $handler->display->display_options['fields']['comment_body']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['element_type'] = '0';
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['comment_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['comment_body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Sort criterion: Comment: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'comment';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Blog (field_blog) */
  $handler->display->display_options['arguments']['field_blog_target_id']['id'] = 'field_blog_target_id';
  $handler->display->display_options['arguments']['field_blog_target_id']['table'] = 'field_data_field_blog';
  $handler->display->display_options['arguments']['field_blog_target_id']['field'] = 'field_blog_target_id';
  $handler->display->display_options['arguments']['field_blog_target_id']['relationship'] = 'nid';
  $handler->display->display_options['arguments']['field_blog_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_blog_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_blog_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_blog_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_blog_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Comment: Approved */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'comment';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  $handler->display->display_options['filters']['status_node']['table'] = 'node';
  $handler->display->display_options['filters']['status_node']['field'] = 'status';
  $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_node']['value'] = 1;
  $handler->display->display_options['filters']['status_node']['group'] = 1;
  $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;

  /* Display: Blog listing comments */
  $handler = $view->new_display('block', 'Blog listing comments', 'block_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Comment: Approved */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'comment';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  $handler->display->display_options['filters']['status_node']['table'] = 'node';
  $handler->display->display_options['filters']['status_node']['field'] = 'status';
  $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_node']['value'] = 1;
  $handler->display->display_options['filters']['status_node']['group'] = 1;
  $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'nid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog_post' => 'blog_post',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'nid';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Blog latest comments */
  $handler = $view->new_display('block', 'Blog latest comments', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest comments on this blog';

  /* Display: Blog-post latest comments */
  $handler = $view->new_display('block', 'Blog-post latest comments', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest comments on this blog';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Comment: Content */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_blog_target_id']['id'] = 'field_blog_target_id';
  $handler->display->display_options['relationships']['field_blog_target_id']['table'] = 'field_data_field_blog';
  $handler->display->display_options['relationships']['field_blog_target_id']['field'] = 'field_blog_target_id';
  $handler->display->display_options['relationships']['field_blog_target_id']['relationship'] = 'nid';
  $handler->display->display_options['relationships']['field_blog_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_blog_node']['id'] = 'reverse_field_blog_node';
  $handler->display->display_options['relationships']['reverse_field_blog_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_blog_node']['field'] = 'reverse_field_blog_node';
  $handler->display->display_options['relationships']['reverse_field_blog_node']['relationship'] = 'field_blog_target_id';
  $handler->display->display_options['relationships']['reverse_field_blog_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_blog_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $translatables['blog_latest_comments_'] = array(
    t('Master'),
    t('Latest comments '),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content'),
    t('.'),
    t('All'),
    t('Blog listing comments'),
    t('Blog latest comments'),
    t('Latest comments on this blog'),
    t('Blog-post latest comments'),
    t('Content entity referenced from field_blog'),
    t('Content referencing Content from field_blog'),
  );
  $export['blog_latest_comments_'] = $view;

  $view = new view();
  $view->name = 'blog_listing';
  $view->description = 'Lists all the published blogs';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Blog: Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Blog listing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Blog title */
  $handler->display->display_options['fields']['field_blog_title']['id'] = 'field_blog_title';
  $handler->display->display_options['fields']['field_blog_title']['table'] = 'field_data_field_blog_title';
  $handler->display->display_options['fields']['field_blog_title']['field'] = 'field_blog_title';
  $handler->display->display_options['fields']['field_blog_title']['label'] = '';
  $handler->display->display_options['fields']['field_blog_title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_blog_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_blog_title']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'blog-description';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Blog image */
  $handler->display->display_options['fields']['field_blog_image']['id'] = 'field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['table'] = 'field_data_field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['field'] = 'field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['label'] = '';
  $handler->display->display_options['fields']['field_blog_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_blog_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_blog_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_blog_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_blog_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
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
    'blog' => 'blog',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Blog title */
  $handler->display->display_options['fields']['field_blog_title']['id'] = 'field_blog_title';
  $handler->display->display_options['fields']['field_blog_title']['table'] = 'field_data_field_blog_title';
  $handler->display->display_options['fields']['field_blog_title']['field'] = 'field_blog_title';
  $handler->display->display_options['fields']['field_blog_title']['label'] = '';
  $handler->display->display_options['fields']['field_blog_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_blog_title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_blog_title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_blog_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_blog_title']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'blog-description';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Blog image */
  $handler->display->display_options['fields']['field_blog_image']['id'] = 'field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['table'] = 'field_data_field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['field'] = 'field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['label'] = '';
  $handler->display->display_options['fields']['field_blog_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_blog_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_blog_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_blog_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_blog_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['path'] = 'blogs';
  $translatables['blog_listing'] = array(
    t('Master'),
    t('Blog listing'),
    t('more'),
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
    t('Page'),
  );
  $export['blog_listing'] = $view;

  $view = new view();
  $view->name = 'blog_posts';
  $view->description = 'Lists blog posts from current blog';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Blog: Posts';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_blog_node']['id'] = 'reverse_field_blog_node';
  $handler->display->display_options['relationships']['reverse_field_blog_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_blog_node']['field'] = 'reverse_field_blog_node';
  $handler->display->display_options['relationships']['reverse_field_blog_node']['label'] = 'Blog reference';
  $handler->display->display_options['relationships']['reverse_field_blog_node']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_blog_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Liftup image */
  $handler->display->display_options['fields']['field_liftup_image']['id'] = 'field_liftup_image';
  $handler->display->display_options['fields']['field_liftup_image']['table'] = 'field_data_field_liftup_image';
  $handler->display->display_options['fields']['field_liftup_image']['field'] = 'field_liftup_image';
  $handler->display->display_options['fields']['field_liftup_image']['relationship'] = 'reverse_field_blog_node';
  $handler->display->display_options['fields']['field_liftup_image']['label'] = '';
  $handler->display->display_options['fields']['field_liftup_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_liftup_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_liftup_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_liftup_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_liftup_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_liftup_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Content: Liftup text */
  $handler->display->display_options['fields']['field_liftup_text']['id'] = 'field_liftup_text';
  $handler->display->display_options['fields']['field_liftup_text']['table'] = 'field_data_field_liftup_text';
  $handler->display->display_options['fields']['field_liftup_text']['field'] = 'field_liftup_text';
  $handler->display->display_options['fields']['field_liftup_text']['relationship'] = 'reverse_field_blog_node';
  $handler->display->display_options['fields']['field_liftup_text']['label'] = '';
  $handler->display->display_options['fields']['field_liftup_text']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_liftup_text']['element_class'] = 'blog-post-description';
  $handler->display->display_options['fields']['field_liftup_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_liftup_text']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_liftup_text']['element_default_classes'] = FALSE;
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
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_blog_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_blog_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog_post' => 'blog_post',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['blog_posts'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Blog reference'),
    t('All'),
    t('Block'),
  );
  $export['blog_posts'] = $view;

  $view = new view();
  $view->name = 'blog_reference_field';
  $view->description = 'Lists the blogs that current user is allowed to write into';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Blog: Reference field';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Blog reference field';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_blog_authors_target_id']['id'] = 'field_blog_authors_target_id';
  $handler->display->display_options['relationships']['field_blog_authors_target_id']['table'] = 'field_data_field_blog_authors';
  $handler->display->display_options['relationships']['field_blog_authors_target_id']['field'] = 'field_blog_authors_target_id';
  $handler->display->display_options['relationships']['field_blog_authors_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_blog_authors_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
    'blog' => 'blog',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['blog_reference_field'] = array(
    t('Master'),
    t('Blog reference field'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('User entity referenced from field_blog_authors'),
    t('All'),
    t('Entity Reference'),
  );
  $export['blog_reference_field'] = $view;

  $view = new view();
  $view->name = 'blog_sidebar_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Blog sidebar block';
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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_blog_target_id']['id'] = 'field_blog_target_id';
  $handler->display->display_options['relationships']['field_blog_target_id']['table'] = 'field_data_field_blog';
  $handler->display->display_options['relationships']['field_blog_target_id']['field'] = 'field_blog_target_id';
  $handler->display->display_options['relationships']['field_blog_target_id']['label'] = 'Referenced blog';
  $handler->display->display_options['relationships']['field_blog_target_id']['required'] = TRUE;
  /* Field: Content: Blog image */
  $handler->display->display_options['fields']['field_blog_image']['id'] = 'field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['table'] = 'field_data_field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['field'] = 'field_blog_image';
  $handler->display->display_options['fields']['field_blog_image']['relationship'] = 'field_blog_target_id';
  $handler->display->display_options['fields']['field_blog_image']['label'] = '';
  $handler->display->display_options['fields']['field_blog_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_blog_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_blog_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_blog_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_blog_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_blog_image']['settings'] = array(
    'image_style' => 'offering_logo',
    'image_link' => '',
  );
  /* Field: Content: Blog title */
  $handler->display->display_options['fields']['field_blog_title']['id'] = 'field_blog_title';
  $handler->display->display_options['fields']['field_blog_title']['table'] = 'field_data_field_blog_title';
  $handler->display->display_options['fields']['field_blog_title']['field'] = 'field_blog_title';
  $handler->display->display_options['fields']['field_blog_title']['relationship'] = 'field_blog_target_id';
  $handler->display->display_options['fields']['field_blog_title']['label'] = '';
  $handler->display->display_options['fields']['field_blog_title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_blog_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_blog_title']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_blog_target_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['filters']['status']['relationship'] = 'field_blog_target_id';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_blog_target_id';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_caching'] = '-1';
  $translatables['blog_sidebar_block'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Referenced blog'),
    t('All'),
    t('Block'),
  );
  $export['blog_sidebar_block'] = $view;

  $view = new view();
  $view->name = 'blog_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Blog slideshow';
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
    'blog_post' => 'blog_post',
  );
  /* Filter criterion: Content: Screenshots (field_main_images:fid) */
  $handler->display->display_options['filters']['field_main_images_fid']['id'] = 'field_main_images_fid';
  $handler->display->display_options['filters']['field_main_images_fid']['table'] = 'field_data_field_main_images';
  $handler->display->display_options['filters']['field_main_images_fid']['field'] = 'field_main_images_fid';
  $handler->display->display_options['filters']['field_main_images_fid']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['blog_slideshow'] = array(
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
  $export['blog_slideshow'] = $view;

  return $export;
}
