<?php
/**
 * @file
 * forge_web_partners_and_people.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function forge_web_partners_and_people_default_breakpoint_group() {
  $export = array();

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'custom.user.retina_display';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'retina_display';
  $breakpoint_group->name = 'retina display';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['retina_display'] = $breakpoint_group;

  return $export;
}
