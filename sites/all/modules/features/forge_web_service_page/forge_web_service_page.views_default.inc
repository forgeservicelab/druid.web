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
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Terms and conditions */
  $handler->display->display_options['fields']['field_terms_and_conditions']['id'] = 'field_terms_and_conditions';
  $handler->display->display_options['fields']['field_terms_and_conditions']['table'] = 'field_data_field_terms_and_conditions';
  $handler->display->display_options['fields']['field_terms_and_conditions']['field'] = 'field_terms_and_conditions';
  $handler->display->display_options['fields']['field_terms_and_conditions']['element_type'] = '0';
  $handler->display->display_options['fields']['field_terms_and_conditions']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_terms_and_conditions']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_terms_and_conditions']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_terms_and_conditions']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 1,
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
    t('Terms and conditions'),
    t('Cancellation / refund policy'),
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
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Field: Field: Pricing information */
  $handler->display->display_options['fields']['field_pricing_information']['id'] = 'field_pricing_information';
  $handler->display->display_options['fields']['field_pricing_information']['table'] = 'field_data_field_pricing_information';
  $handler->display->display_options['fields']['field_pricing_information']['field'] = 'field_pricing_information';
  $handler->display->display_options['fields']['field_pricing_information']['label'] = 'Price';
  $handler->display->display_options['fields']['field_pricing_information']['element_label_colon'] = FALSE;
  /* Field: Content: Live demo url */
  $handler->display->display_options['fields']['field_live_demo_url']['id'] = 'field_live_demo_url';
  $handler->display->display_options['fields']['field_live_demo_url']['table'] = 'field_data_field_live_demo_url';
  $handler->display->display_options['fields']['field_live_demo_url']['field'] = 'field_live_demo_url';
  $handler->display->display_options['fields']['field_live_demo_url']['label'] = 'Demo';
  $handler->display->display_options['fields']['field_live_demo_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_live_demo_url']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_live_demo_url']['click_sort_column'] = 'url';
  /* Field: Content: Organizer */
  $handler->display->display_options['fields']['field_organizer']['id'] = 'field_organizer';
  $handler->display->display_options['fields']['field_organizer']['table'] = 'field_data_field_organizer';
  $handler->display->display_options['fields']['field_organizer']['field'] = 'field_organizer';
  $handler->display->display_options['fields']['field_organizer']['label'] = 'Provider';
  $handler->display->display_options['fields']['field_organizer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organizer']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Service offer contact details */
  $handler->display->display_options['fields']['field_service_offer_contact_deta']['id'] = 'field_service_offer_contact_deta';
  $handler->display->display_options['fields']['field_service_offer_contact_deta']['table'] = 'field_data_field_service_offer_contact_deta';
  $handler->display->display_options['fields']['field_service_offer_contact_deta']['field'] = 'field_service_offer_contact_deta';
  $handler->display->display_options['fields']['field_service_offer_contact_deta']['label'] = 'Contact';
  $handler->display->display_options['fields']['field_service_offer_contact_deta']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_offer_contact_deta']['settings'] = array(
    'link' => 0,
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
    'service_offering' => 'service_offering',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['service_offering_sidebar_block'] = array(
    t('Master'),
    t('Service offering sidebar block'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Price'),
    t('Demo'),
    t('Provider'),
    t('Contact'),
    t('All'),
    t('Block'),
  );
  $export['service_offering_sidebar_block'] = $view;

  return $export;
}
