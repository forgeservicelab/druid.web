<?php
/**
 * @file
 * forge_web_my_forge.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function forge_web_my_forge_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'My FORGE sidebar';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'my_forge_sidebar';
  $fe_block_boxes->body = '<ul>
	<li><a href="https://support.forgeservicelab.fi/redmine">Redmine</a></li>
	<li><a href="https://git.forgeservicelab.fi/">GitLab</a></li>
	<li><a href="https://cloud.forgeservicelab.fi/">OpenStack</a></li>
	<li><a href="https://support.forgeservicelab.fi/redmine/projects/forums/boards">Forums</a></li>
	<li><a href="https://support.forgeservicelab.fi/redmine/projects/forge-support/wiki">Support Wiki</a></li>
</ul>
';

  $export['my_forge_sidebar'] = $fe_block_boxes;

  return $export;
}
