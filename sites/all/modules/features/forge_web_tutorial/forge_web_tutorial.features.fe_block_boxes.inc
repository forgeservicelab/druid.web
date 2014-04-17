<?php
/**
 * @file
 * forge_web_tutorial.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function forge_web_tutorial_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Navigation to tutorial page';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'forge_member_navi';
  $fe_block_boxes->body = '<p><a class="red" href="https://plaza.forgeservicelab.fi/tutorial/define">Define</a></p>

<p><a class="rose" href="https://plaza.forgeservicelab.fi/tutorial/explore">Explore</a></p>

<p><a class="purple" href="https://plaza.forgeservicelab.fi/tutorial/learn">Learn</a></p>

<p><a class="blue" href="https://plaza.forgeservicelab.fi/tutorial/build">Build</a></p>

<p><a class="blue" href="https://plaza.forgeservicelab.fi/tutorial/go-live">Go live</a></p>

<p><a class="blue" href="https://plaza.forgeservicelab.fi/tutorial/measure">Measure</a></p>
';

  $export['forge_member_navi'] = $fe_block_boxes;

  return $export;
}
