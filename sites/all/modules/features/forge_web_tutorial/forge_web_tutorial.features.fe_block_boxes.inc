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
  $fe_block_boxes->body = '<div class="navigation-dashboard">
<p><a class="red" href="https://forgeservicelab.fi/dashboard/define">Define</a></p>

<p><a class="rose" href="https://forgeservicelab.fi/dashboard/explore">Explore</a></p>

<p><a class="purple" href="https://forgeservicelab.fi/dashboard/learn">Learn</a></p>

<p class="active"><a class="blue active" href="https://forgeservicelab.fi/dashboard/build">Build</a></p>

<p><a class="teal" href="https://forgeservicelab.fi/dashboard/go-live">Go live</a></p>

<p><a class="teal" href="https://forgeservicelab.fi/dashboard/measure">Measure</a></p>
</div>';

  $export['forge_member_navi'] = $fe_block_boxes;

  return $export;
}
