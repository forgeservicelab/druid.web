<?php
/**
 * @file
 * forge_web_product_page.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function forge_web_product_page_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'product_page_quicktab';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Product page quicktab';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_product_overview-block',
      'hide_title' => 1,
      'title' => 'Overview',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_product_specifications-block',
      'hide_title' => 1,
      'title' => 'Specifications',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_product_pricing-block',
      'hide_title' => 1,
      'title' => 'Pricing',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'views_delta_product_support-block',
      'hide_title' => 1,
      'title' => 'Support',
      'weight' => '-97',
      'type' => 'block',
    ),
    4 => array(
      'bid' => 'views_delta_product_overview-block',
      'hide_title' => 1,
      'title' => 'Terms & conditions',
      'weight' => '-96',
      'type' => 'block',
    ),
    5 => array(
      'bid' => 'views_delta_product_comments-block',
      'hide_title' => 1,
      'title' => 'Comments',
      'weight' => '-95',
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
  t('Product page quicktab');
  t('Specifications');
  t('Support');
  t('Terms & conditions');

  $export['product_page_quicktab'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'product_page_quicktab_mobile';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Product page quicktab mobile';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_product_overview-block',
      'hide_title' => 1,
      'title' => 'Overview',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_product_specifications-block',
      'hide_title' => 1,
      'title' => 'Specifications',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_product_pricing-block',
      'hide_title' => 1,
      'title' => 'Pricing',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'views_delta_product_support-block',
      'hide_title' => 1,
      'title' => 'Support',
      'weight' => '-97',
      'type' => 'block',
    ),
    4 => array(
      'bid' => 'views_delta_product_comments-block',
      'hide_title' => 1,
      'title' => 'Comments',
      'weight' => '-96',
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
  t('Product page quicktab mobile');
  t('Specifications');
  t('Support');

  $export['product_page_quicktab_mobile'] = $quicktabs;

  return $export;
}
