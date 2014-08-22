<?php
/**
 * @file
 * forge_web_partners_and_people.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function forge_web_partners_and_people_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'partners_people';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Partners & People';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Partners & People';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['type'] = 'link_absolute';
  /* Field: Content: Small image */
  $handler->display->display_options['fields']['field_small_image']['id'] = 'field_small_image';
  $handler->display->display_options['fields']['field_small_image']['table'] = 'field_data_field_small_image';
  $handler->display->display_options['fields']['field_small_image']['field'] = 'field_small_image';
  $handler->display->display_options['fields']['field_small_image']['label'] = '';
  $handler->display->display_options['fields']['field_small_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_small_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_small_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_small_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_small_image']['settings'] = array(
    'picture_group' => 'retina_display',
    'fallback_image_style' => 'partners_people_small',
    'image_link' => '',
    'colorbox' => 'retina_display',
  );
  /* Field: Content: Page title */
  $handler->display->display_options['fields']['field_page_title']['id'] = 'field_page_title';
  $handler->display->display_options['fields']['field_page_title']['table'] = 'field_data_field_page_title';
  $handler->display->display_options['fields']['field_page_title']['field'] = 'field_page_title';
  $handler->display->display_options['fields']['field_page_title']['label'] = '';
  $handler->display->display_options['fields']['field_page_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_page_title']['element_label_colon'] = FALSE;
  /* Field: Content: Short description */
  $handler->display->display_options['fields']['field_short_description']['id'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['table'] = 'field_data_field_short_description';
  $handler->display->display_options['fields']['field_short_description']['field'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_short_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_short_description']['alter']['text'] = '<div class="short-desc__img">[field_small_image]</div>
<div class="short-desc__text"><h3>[field_page_title]</h3>
[field_short_description]</div>';
  $handler->display->display_options['fields']['field_short_description']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_description']['alter']['path'] = '[field_website]';
  $handler->display->display_options['fields']['field_short_description']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_short_description']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_short_description']['element_class'] = 'short-desc';
  $handler->display->display_options['fields']['field_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_short_description']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_short_description']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
    'field_website' => 0,
    'field_small_image' => 0,
    'field_page_title' => 0,
    'field_short_description' => 0,
  );
  /* Sort criterion: Content: Weight (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
  /* Sort criterion: Content: Partner or people (field_partner_or_people) */
  $handler->display->display_options['sorts']['field_partner_or_people_value']['id'] = 'field_partner_or_people_value';
  $handler->display->display_options['sorts']['field_partner_or_people_value']['table'] = 'field_data_field_partner_or_people';
  $handler->display->display_options['sorts']['field_partner_or_people_value']['field'] = 'field_partner_or_people_value';
  $handler->display->display_options['sorts']['field_partner_or_people_value']['order'] = 'DESC';
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
    'partners_and_people' => 'partners_and_people',
  );
  /* Filter criterion: Content: Partner or people (field_partner_or_people) */
  $handler->display->display_options['filters']['field_partner_or_people_value']['id'] = 'field_partner_or_people_value';
  $handler->display->display_options['filters']['field_partner_or_people_value']['table'] = 'field_data_field_partner_or_people';
  $handler->display->display_options['filters']['field_partner_or_people_value']['field'] = 'field_partner_or_people_value';
  $handler->display->display_options['filters']['field_partner_or_people_value']['value'] = array(
    0 => '0',
    1 => '1',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['partners_people'] = array(
    t('Master'),
    t('Partners & People'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="short-desc__img">[field_small_image]</div>
<div class="short-desc__text"><h3>[field_page_title]</h3>
[field_short_description]</div>'),
    t('Block'),
  );
  $export['partners_people'] = $view;

  return $export;
}
