<?php

/**
 * @file
 * CRUD functions for Login Destnation module.
 */

/**
 * Load a login destination rule.
 *
 * @param string $machine_name
 *   The machine name of the rule.
 */
function login_destination_load($machine_name) {
  ctools_include('export');
  $result = login_destination_load_multiple(array($machine_name));
  if (isset($result[$machine_name])) {
    return $result[$machine_name];
  }
}

/**
 * Load multiple login destination rules.
 *
 * @param array $machine_names
 *   An array of machine names.
 */
function login_destination_load_multiple(array $machine_names) {
  ctools_include('export');
  return ctools_export_load_object('login_destination', 'names', $machine_names);
}

/**
 * Load all login destination rules.
 */
function login_destination_load_all($reset = FALSE) {
  ctools_include('export');
  return ctools_export_crud_load_all('login_destination', $reset);
}

/**
 * Save a login destination rule.
 */
function login_destination_save($rule) {
  // Normalize to an object.
  $rule = (object) $rule;

  $update = (isset($rule->id) && is_numeric($rule->id)) ? array('id') : array();
  return drupal_write_record('login_destination', $rule, $update);
}

/**
 * Delete a rule from the database.
 *
 * @param mixed $rule
 *   Either the string machine name of the rule, or the full rule object.
 */
function login_destination_delete($rule) {
  ctools_include('export');
  ctools_export_crud_delete('login_destination', $rule);
}