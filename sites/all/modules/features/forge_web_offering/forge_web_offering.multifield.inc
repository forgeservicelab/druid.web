<?php
/**
 * @file
 * forge_web_offering.multifield.inc
 */

/**
 * Implements hook_multifield_default_multifield().
 */
function forge_web_offering_multifield_default_multifield() {
  $export = array();

  $multifield = new stdClass();
  $multifield->disabled = FALSE; /* Edit this to true to make a default multifield disabled initially */
  $multifield->api_version = 1;
  $multifield->machine_name = 'terms_and_conditions_1';
  $multifield->label = 'Terms and conditions 1';
  $multifield->description = '';
  $export['terms_and_conditions_1'] = $multifield;

  $multifield = new stdClass();
  $multifield->disabled = FALSE; /* Edit this to true to make a default multifield disabled initially */
  $multifield->api_version = 1;
  $multifield->machine_name = 'terms_and_conditions_2';
  $multifield->label = 'Terms and conditions 2';
  $multifield->description = '';
  $export['terms_and_conditions_2'] = $multifield;

  return $export;
}
