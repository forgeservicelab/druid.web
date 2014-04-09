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
  $quicktabs->hide_empty_tabs = FALSE;
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
      'bid' => 'views_delta_service_offering_comments-block',
      'hide_title' => 1,
      'title' => 'Comments',
      'weight' => '-98',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'ui_tabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array(
    'history' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Comments');
  t('Overview');
  t('Pricing');
  t('Service offering quicktab');

  $export['service_offering_quicktab'] = $quicktabs;

  return $export;
}
