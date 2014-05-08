<?php
/**
 * @file
 * forge_web_base.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function forge_web_base_default_breakpoint_group() {
  $export = array();

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'custom.user.tablet';
  $breakpoints[] = 'custom.user.mobile';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'mobile_and_tablet';
  $breakpoint_group->name = 'Mobile and tablet';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['mobile_and_tablet'] = $breakpoint_group;

  return $export;
}
