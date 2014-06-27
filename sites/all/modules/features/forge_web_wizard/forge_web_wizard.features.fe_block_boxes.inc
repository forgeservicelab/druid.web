<?php
/**
 * @file
 * forge_web_wizard.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function forge_web_wizard_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Back to Join Forge';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'back_to_join_forge';
  $fe_block_boxes->body = '<p><a href="/wizard/join-forge-service-lab">Click here to return to the Join Forge.</a></p>
';

  $export['back_to_join_forge'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'All contracts';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'join_forge_sidebar';
  $fe_block_boxes->body = '<p><a href="/all-contracts">FORGE Service Lab contractual framework including all contract documents</a></p>
';

  $export['join_forge_sidebar'] = $fe_block_boxes;

  return $export;
}
