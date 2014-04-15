<?php
/**
 * @file
 * forge_web_service_page.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function forge_web_service_page_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'service_offering_quicktab';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Service offering quicktab';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_service_offering_overview-block',
      'hide_title' => 1,
      'title' => 'Overview',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_service_offering_pricing-block',
      'hide_title' => 1,
      'title' => 'Pricing',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_7d37ffe540ad1bf682f23a55d7c39213',
      'hide_title' => 1,
      'title' => 'Terms & conditions',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'node_comment_block_delta_node_comments',
      'hide_title' => 1,
      'title' => 'Comments',
      'weight' => '-97',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'ui_tabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array(
    'history' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Comments');
  t('Overview');
  t('Pricing');
  t('Service offering quicktab');
  t('Terms & conditions');

  $export['service_offering_quicktab'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'service_offering_quicktab_mobile';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Service offering quicktab mobile';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_service_offering_overview-block',
      'hide_title' => 1,
      'title' => 'Overview',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_service_offering_pricing-block',
      'hide_title' => 1,
      'title' => 'Pricing',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_7d37ffe540ad1bf682f23a55d7c39213',
      'hide_title' => 1,
      'title' => 'Terms & conditions',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'node_comment_block_delta_node_comments',
      'hide_title' => 1,
      'title' => 'Comments',
      'weight' => '-97',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'accordion';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array(
    'history' => 0,
    'jquery_ui' => array(
      'autoHeight' => 0,
      'collapsible' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Comments');
  t('Overview');
  t('Pricing');
  t('Service offering quicktab mobile');
  t('Terms & conditions');

  $export['service_offering_quicktab_mobile'] = $quicktabs;

  return $export;
}
