<?php
/**
 * @file
 * forge_web_faq.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function forge_web_faq_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Front page FAQ';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'faq';
  $fe_block_boxes->body = '<p>We truly value openness, interaction and feedback – and every question we are being asked helps us to further develop FORGE Service Lab and the dialogue with our audience. <a href="/contact-us">Please get in touch!</a></p>
';

  $export['faq'] = $fe_block_boxes;

  return $export;
}
