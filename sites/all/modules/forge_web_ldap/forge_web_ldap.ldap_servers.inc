<?php
/**
 * @file
 * forge_web_ldap.ldap_servers.inc
 */

/**
 * Implements hook_default_ldap_servers().
 */
function forge_web_ldap_default_ldap_servers() {
  $export = array();

  $ldap_servers_conf = new stdClass();
  $ldap_servers_conf->disabled = FALSE; /* Edit this to true to make a default ldap_servers_conf disabled initially */
  $ldap_servers_conf->api_version = 1;
  $ldap_servers_conf->sid = 'forge_server';
  $ldap_servers_conf->name = 'Forge LDAP server';
  $ldap_servers_conf->status = FALSE;
  $ldap_servers_conf->ldap_type = 'default';
  $ldap_servers_conf->address = 'ip-193-166-24-165.hosts.forgeservicelab.fi';
  $ldap_servers_conf->port = 389;
  $ldap_servers_conf->tls = FALSE;
  $ldap_servers_conf->followrefs = FALSE;
  $ldap_servers_conf->bind_method = 3;
  $ldap_servers_conf->binddn = '';
  $ldap_servers_conf->bindpw = '';
  $ldap_servers_conf->basedn = array(
    0 => 'ou=people, dc=forgeservicelab, dc=fi',
  );
  $ldap_servers_conf->user_attr = 'cn';
  $ldap_servers_conf->account_name_attr = '';
  $ldap_servers_conf->mail_attr = 'mail';
  $ldap_servers_conf->mail_template = '';
  $ldap_servers_conf->picture_attr = '';
  $ldap_servers_conf->unique_persistent_attr = '';
  $ldap_servers_conf->unique_persistent_attr_binary = FALSE;
  $ldap_servers_conf->user_dn_expression = '';
  $ldap_servers_conf->ldap_to_drupal_user = '';
  $ldap_servers_conf->testing_drupal_username = 'erno.koliseva';
  $ldap_servers_conf->testing_drupal_user_dn = 'cn=erno.koliseva,ou=people';
  $ldap_servers_conf->grp_unused = TRUE;
  $ldap_servers_conf->grp_object_cat = '';
  $ldap_servers_conf->grp_nested = FALSE;
  $ldap_servers_conf->grp_user_memb_attr_exists = FALSE;
  $ldap_servers_conf->grp_user_memb_attr = '';
  $ldap_servers_conf->grp_memb_attr = '';
  $ldap_servers_conf->grp_memb_attr_match_user_attr = '';
  $ldap_servers_conf->grp_derive_from_dn = FALSE;
  $ldap_servers_conf->grp_derive_from_dn_attr = '';
  $ldap_servers_conf->grp_test_grp_dn = '';
  $ldap_servers_conf->grp_test_grp_dn_writeable = '';
  $ldap_servers_conf->search_pagination = FALSE;
  $ldap_servers_conf->search_page_size = 1000;
  $ldap_servers_conf->weight = 0;
  $export['forge_server'] = $ldap_servers_conf;

  return $export;
}