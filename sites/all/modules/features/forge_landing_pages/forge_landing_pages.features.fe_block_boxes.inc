<?php
/**
 * @file
 * forge_landing_pages.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function forge_landing_pages_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer left';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'footer_block_left';
  $fe_block_boxes->body = '<p>FORGE Service Lab is a service by <a href="http://digile.fi" target="_blank">DIGILE</a>.</p>
';

  $export['footer_block_left'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer right';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'footer_block_right';
  $fe_block_boxes->body = '<p>Vaisalantie 6, 02130 Espoo <a class="google-maps" href="https://www.google.fi/maps/place/Vaisalantie+6/@60.1883332,24.8097253,17z/data=!3m1!4b1!4m2!3m1!1s0x468df5c07167b24d:0xa8ad89c77485f40a" target="_blank">Google-maps</a></p>

<p><a href="/en/contact-us">Contact us</a></p>

<p><a href="/forge-service-lab-use-instruction">FORGE Service Lab Use Instruction</a></p>

<p><a class="social-icon social-icon__facebook" href="https://www.facebook.com/groups/forgefriends/" target="_blank">Facebook</a><a class="social-icon social-icon__twitter" href="https://twitter.com/ForgeFriends" target="_blank">Twitter</a><a class="social-icon social-icon__linkedin" href="https://www.linkedin.com/company/digile" target="_blank">LinkedIn</a></p>';

  $export['footer_block_right'] = $fe_block_boxes;

  return $export;
}
