<?php
/**
 * Implements hook_drush_init().
 */
function forge_log_drush_init() {
  // Replace log function with our own.
  drush_set_context('DRUSH_LOG_CALLBACK', '_forge_log_drush_write');
}

/**
 * Custom DRUSH_LOG_CALLBACK.
 */
function _forge_log_drush_write($entry) {
  // Log drush messages into file.
  if ($entry['type'] != 'memory')
    file_put_contents('/tmp/drush.log', date("Y-m-d H:i:s") . ' ' . implode(' | ', $entry) . "\n", FILE_APPEND);
  // Call original log function.
  _drush_print_log($entry);
}
