<?php
/**
 * @file
 * forge_web_service_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function forge_web_service_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'service_offer_terms_conditions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Service offer terms & conditions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Product terms & conditions';
  $handler->display->display_options['css_class'] = 'terms-conditions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Terms and conditions inside FORGE Service Lab */
  $handler->display->display_options['fields']['field_terms_conditions_inside']['id'] = 'field_terms_conditions_inside';
  $handler->display->display_options['fields']['field_terms_conditions_inside']['table'] = 'field_data_field_terms_conditions_inside';
  $handler->display->display_options['fields']['field_terms_conditions_inside']['field'] = 'field_terms_conditions_inside';
  $handler->display->display_options['fields']['field_terms_conditions_inside']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_terms_conditions_inside']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'full',
  );
  /* Field: Content: Terms and conditions in production environment */
  $handler->display->display_options['fields']['field_terms_conditions_prod']['id'] = 'field_terms_conditions_prod';
  $handler->display->display_options['fields']['field_terms_conditions_prod']['table'] = 'field_data_field_terms_conditions_prod';
  $handler->display->display_options['fields']['field_terms_conditions_prod']['field'] = 'field_terms_conditions_prod';
  $handler->display->display_options['fields']['field_terms_conditions_prod']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_terms_conditions_prod']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'full',
  );
  /* Field: Content: Cancellation / refund policy */
  $handler->display->display_options['fields']['field_cancellation_refund_policy']['id'] = 'field_cancellation_refund_policy';
  $handler->display->display_options['fields']['field_cancellation_refund_policy']['table'] = 'field_data_field_cancellation_refund_policy';
  $handler->display->display_options['fields']['field_cancellation_refund_policy']['field'] = 'field_cancellation_refund_policy';
  $handler->display->display_options['fields']['field_cancellation_refund_policy']['element_type'] = '0';
  $handler->display->display_options['fields']['field_cancellation_refund_policy']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_cancellation_refund_policy']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_cancellation_refund_policy']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cancellation_refund_policy']['hide_empty'] = TRUE;
  /* Field: Content: More information */
  $handler->display->display_options['fields']['field_more_information']['id'] = 'field_more_information';
  $handler->display->display_options['fields']['field_more_information']['table'] = 'field_data_field_more_information';
  $handler->display->display_options['fields']['field_more_information']['field'] = 'field_more_information';
  $handler->display->display_options['fields']['field_more_information']['hide_empty'] = TRUE;
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
    'service_offering' => 'service_offering',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['service_offer_terms_conditions'] = array(
    t('Master'),
    t('Product terms & conditions'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Terms and conditions inside FORGE Service Lab'),
    t('Terms and conditions in production environment'),
    t('Cancellation / refund policy'),
    t('More information'),
    t('All'),
    t('Block'),
  );
  $export['service_offer_terms_conditions'] = $view;

  $view = new view();
  $view->name = 'service_offering_overview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Service offering overview';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Service offering overview';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '300';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '300';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Detailed description */
  $handler->display->display_options['fields']['field_detailed_description']['id'] = 'field_detailed_description';
  $handler->display->display_options['fields']['field_detailed_description']['table'] = 'field_data_field_detailed_description';
  $handler->display->display_options['fields']['field_detailed_description']['field'] = 'field_detailed_description';
  $handler->display->display_options['fields']['field_detailed_description']['label'] = '';
  $handler->display->display_options['fields']['field_detailed_description']['element_label_colon'] = FALSE;
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
    'service_offering' => 'service_offering',
  );
  /* Filter criterion: Content: Detailed description (field_detailed_description) */
  $handler->display->display_options['filters']['field_detailed_description_value']['id'] = 'field_detailed_description_value';
  $handler->display->display_options['filters']['field_detailed_description_value']['table'] = 'field_data_field_detailed_description';
  $handler->display->display_options['filters']['field_detailed_description_value']['field'] = 'field_detailed_description_value';
  $handler->display->display_options['filters']['field_detailed_description_value']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['service_offering_overview'] = array(
    t('Master'),
    t('Service offering overview'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Block'),
  );
  $export['service_offering_overview'] = $view;

  $view = new view();
  $view->name = 'service_offering_pricing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Service offering pricing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Service offering pricing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Pricing information */
  $handler->display->display_options['fields']['field_pricing_information']['id'] = 'field_pricing_information';
  $handler->display->display_options['fields']['field_pricing_information']['table'] = 'field_data_field_pricing_information';
  $handler->display->display_options['fields']['field_pricing_information']['field'] = 'field_pricing_information';
  $handler->display->display_options['fields']['field_pricing_information']['label'] = '';
  $handler->display->display_options['fields']['field_pricing_information']['element_label_colon'] = FALSE;
  /* Field: Content: Pricing description */
  $handler->display->display_options['fields']['field_pricing_description']['id'] = 'field_pricing_description';
  $handler->display->display_options['fields']['field_pricing_description']['table'] = 'field_data_field_pricing_description';
  $handler->display->display_options['fields']['field_pricing_description']['field'] = 'field_pricing_description';
  $handler->display->display_options['fields']['field_pricing_description']['label'] = '';
  $handler->display->display_options['fields']['field_pricing_description']['element_label_colon'] = FALSE;
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
    'service_offering' => 'service_offering',
  );
  /* Filter criterion: Content: Pricing description (field_pricing_description) */
  $handler->display->display_options['filters']['field_pricing_description_value']['id'] = 'field_pricing_description_value';
  $handler->display->display_options['filters']['field_pricing_description_value']['table'] = 'field_data_field_pricing_description';
  $handler->display->display_options['filters']['field_pricing_description_value']['field'] = 'field_pricing_description_value';
  $handler->display->display_options['filters']['field_pricing_description_value']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['service_offering_pricing'] = array(
    t('Master'),
    t('Service offering pricing'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Block'),
  );
  $export['service_offering_pricing'] = $view;

  $view = new view();
  $view->name = 'service_offering_sidebar_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Service offering sidebar block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Service offering sidebar block';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Page title */
  $handler->display->display_options['fields']['field_page_title']['id'] = 'field_page_title';
  $handler->display->display_options['fields']['field_page_title']['table'] = 'field_data_field_page_title';
  $handler->display->display_options['fields']['field_page_title']['field'] = 'field_page_title';
  $handler->display->display_options['fields']['field_page_title']['label'] = '';
  $handler->display->display_options['fields']['field_page_title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_page_title']['element_class'] = 'views-field';
  $handler->display->display_options['fields']['field_page_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_page_title']['element_default_classes'] = FALSE;
  /* Field: Content: Provider */
  $handler->display->display_options['fields']['field_organizer']['id'] = 'field_organizer';
  $handler->display->display_options['fields']['field_organizer']['table'] = 'field_data_field_organizer';
  $handler->display->display_options['fields']['field_organizer']['field'] = 'field_organizer';
  $handler->display->display_options['fields']['field_organizer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organizer']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_offering_email']['id'] = 'field_offering_email';
  $handler->display->display_options['fields']['field_offering_email']['table'] = 'field_data_field_offering_email';
  $handler->display->display_options['fields']['field_offering_email']['field'] = 'field_offering_email';
  $handler->display->display_options['fields']['field_offering_email']['label'] = '';
  $handler->display->display_options['fields']['field_offering_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_offering_email']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_offering_email']['alter']['path'] = 'mailto:[field_offering_email-email]';
  $handler->display->display_options['fields']['field_offering_email']['alter']['max_length'] = '25';
  $handler->display->display_options['fields']['field_offering_email']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_offering_email']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_offering_email']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_offering_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offering_email']['type'] = 'email_plain';
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_offering_phone']['id'] = 'field_offering_phone';
  $handler->display->display_options['fields']['field_offering_phone']['table'] = 'field_data_field_offering_phone';
  $handler->display->display_options['fields']['field_offering_phone']['field'] = 'field_offering_phone';
  $handler->display->display_options['fields']['field_offering_phone']['label'] = '';
  $handler->display->display_options['fields']['field_offering_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_offering_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_offering_website']['id'] = 'field_offering_website';
  $handler->display->display_options['fields']['field_offering_website']['table'] = 'field_data_field_offering_website';
  $handler->display->display_options['fields']['field_offering_website']['field'] = 'field_offering_website';
  $handler->display->display_options['fields']['field_offering_website']['label'] = '';
  $handler->display->display_options['fields']['field_offering_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_offering_website']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_offering_website']['alter']['path'] = '[field_offering_website-url]';
  $handler->display->display_options['fields']['field_offering_website']['alter']['max_length'] = '25';
  $handler->display->display_options['fields']['field_offering_website']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_offering_website']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_offering_website']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_offering_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offering_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_offering_website']['type'] = 'link_title_plain';
  /* Field: Content: Contact person / Address */
  $handler->display->display_options['fields']['field_offering_address']['id'] = 'field_offering_address';
  $handler->display->display_options['fields']['field_offering_address']['table'] = 'field_data_field_offering_address';
  $handler->display->display_options['fields']['field_offering_address']['field'] = 'field_offering_address';
  $handler->display->display_options['fields']['field_offering_address']['label'] = 'Contact';
  $handler->display->display_options['fields']['field_offering_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_offering_address']['alter']['text'] = '[field_offering_address]
[field_offering_phone]
[field_offering_email]
[field_offering_website] ';
  $handler->display->display_options['fields']['field_offering_address']['alter']['nl2br'] = TRUE;
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
    'service_offering' => 'service_offering',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Live demo url */
  $handler->display->display_options['fields']['field_live_demo_url']['id'] = 'field_live_demo_url';
  $handler->display->display_options['fields']['field_live_demo_url']['table'] = 'field_data_field_live_demo_url';
  $handler->display->display_options['fields']['field_live_demo_url']['field'] = 'field_live_demo_url';
  $handler->display->display_options['fields']['field_live_demo_url']['label'] = 'Demo';
  $handler->display->display_options['fields']['field_live_demo_url']['click_sort_column'] = 'url';
  $handler->display->display_options['displays'] = array(
    'block' => 'block',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $translatables['service_offering_sidebar_block'] = array(
    t('Master'),
    t('Service offering sidebar block'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Provider'),
    t('Contact'),
    t('[field_offering_address]
[field_offering_phone]
[field_offering_email]
[field_offering_website] '),
    t('All'),
    t('Block'),
    t('Attachment'),
    t('Demo'),
  );
  $export['service_offering_sidebar_block'] = $view;

  return $export;
}
