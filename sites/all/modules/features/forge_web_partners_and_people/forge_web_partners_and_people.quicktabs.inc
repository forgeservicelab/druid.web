<?php
/**
 * @file
 * forge_web_partners_and_people.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function forge_web_partners_and_people_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'partners_or_people';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 999999;
  $quicktabs->title = 'Partners & people';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_partners-block',
      'hide_title' => 1,
      'title' => 'Partners',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_people-block',
      'hide_title' => 1,
      'title' => 'People',
      'weight' => '-99',
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
  t('Partners');
  t('Partners & people');
  t('People');

  $export['partners_or_people'] = $quicktabs;

  return $export;
}
