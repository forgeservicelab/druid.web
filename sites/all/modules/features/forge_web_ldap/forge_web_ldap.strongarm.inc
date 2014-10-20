<?php
/**
 * @file
 * forge_web_ldap.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function forge_web_ldap_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cas_access';
  $strongarm->value = '0';
  $export['cas_access'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cas_auto_assigned_role';
  $strongarm->value = array(
    5 => 5,
    2 => TRUE,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $export['cas_auto_assigned_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cas_cert';
  $strongarm->value = '';
  $export['cas_cert'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cas_changePasswordURL';
  $strongarm->value = '';
  $export['cas_changePasswordURL'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cas_check_first';
  $strongarm->value = 0;
  $export['cas_check_first'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cas_debugfile';
  $strongarm->value = '';
  $export['cas_debugfile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cas_domain';
  $strongarm->value = '';
  $export['cas_domain'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cas_exclude';
  $strongarm->value = 'services/*';
  $export['cas_exclude'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cas_first_login_destination';
  $strongarm->value = '';
  $export['cas_first_login_destination'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cas_hide_email';
  $strongarm->value = 1;
  $export['cas_hide_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cas_hide_password';
  $strongarm->value = 1;
  $export['cas_hide_password'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cas_login_drupal_invite';
  $strongarm->value = 'Cancel CAS login';
  $export['cas_login_drupal_invite'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cas_login_form';
  $strongarm->value = '2';
  $export['cas_login_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cas_login_invite';
  $strongarm->value = 'Log in using CAS';
  $export['cas_login_invite'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cas_login_message';
  $strongarm->value = 'Logged in via CAS as %cas_username.';
  $export['cas_login_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cas_login_redir_message';
  $strongarm->value = 'You will be redirected to the secure CAS login page.';
  $export['cas_login_redir_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cas_logout_destination';
  $strongarm->value = '<front>';
  $export['cas_logout_destination'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cas_pages';
  $strongarm->value = '';
  $export['cas_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cas_pgtformat';
  $strongarm->value = 'plain';
  $export['cas_pgtformat'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cas_pgtpath';
  $strongarm->value = '';
  $export['cas_pgtpath'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cas_port';
  $strongarm->value = '443';
  $export['cas_port'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cas_proxy';
  $strongarm->value = 0;
  $export['cas_proxy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cas_registerURL';
  $strongarm->value = '';
  $export['cas_registerURL'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cas_server';
  $strongarm->value = 'auth.forgeservicelab.fi';
  $export['cas_server'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cas_uri';
  $strongarm->value = '';
  $export['cas_uri'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cas_user_register';
  $strongarm->value = 1;
  $export['cas_user_register'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cas_version';
  $strongarm->value = '2.0';
  $export['cas_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_authentication_conf';
  $strongarm->value = array(
    'sids' => array(
      'forge_ldap' => 'forge_ldap',
    ),
    'authenticationMode' => 2,
    'loginUIUsernameTxt' => NULL,
    'loginUIPasswordTxt' => NULL,
    'ldapUserHelpLinkUrl' => NULL,
    'ldapUserHelpLinkText' => 'Logon Help',
    'emailOption' => 3,
    'emailUpdate' => 1,
    'passwordOption' => 3,
    'allowOnlyIfTextInDn' => array(),
    'excludeIfTextInDn' => array(),
    'allowTestPhp' => '',
    'excludeIfNoAuthorizations' => NULL,
    'ssoRemoteUserStripDomainName' => NULL,
    'ssoExcludedPaths' => array(),
    'ssoExcludedHosts' => array(),
    'seamlessLogin' => NULL,
    'ssoNotifyAuthentication' => NULL,
    'ldapImplementation' => NULL,
    'cookieExpire' => NULL,
    'emailTemplate' => '@username@fake-domain.com',
    'emailTemplateHandling' => 3,
    'templateUsagePromptUser' => 0,
    'templateUsageNeverUpdate' => 0,
    'templateUsageResolveConflict' => 0,
    'templateUsagePromptRegex' => '.*@fake-domain\\.com',
    'templateUsageRedirectOnLogin' => 0,
  );
  $export['ldap_authentication_conf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_forge_settings';
  $strongarm->value = array (
    '05a2bfdf274edc7740382af4060135d9' => array(
      2 => 2,
      5 => 5,
    ),
    'cb30d26d9a23cf539bc685f7cee71547' => array(
      2 => 2,
      4 => 4,
      5 => 5,
    ),
    '3f2672190861680e14f9d013a813d212' => array(
      2 => 2,
      5 => 5,
    ),
    '66e04068d40f27e8446ca382d7dbce57' => array(),
    'd0863ed39fad52faffd75cbfabeea762' => array(),
    '49a5b3e69efe1b93b8c53f2b92813c31' => array(),
    'd07e3ea7b690daf5b742377958fcb89f' => array(),
    '3b5d8c9a14e90a6f1d72168f995de4e4' => array(),
    '218e62fe46d94c06b3d0d241e501f7bb' => array(
      2 => 2,
      5 => 5,
      6 => 6,
    ),
    '106effece1edddf9d3e7c58ee8867b67' => array(
      8 => 8,
    ),
    'fa3960a9890af2f96db6a55be90e12ca' => array(
      8 => 8,
    ),
    '4fbdcc8565c5e4ac0ebb3b191c83af69' => array(),
    '831b8b6642e436f85877fe4ebe6047dd' => array(),
    'eabc064a2800b9b17039bbaf2137c34e' => array(),
    '20f07b764f809dd47b24f43209a55409' => array(
      2 => 2,
      9 => 9,
      7 => 7,
    ),
    '0067fe82a64a0d8fb2422f9098839176' => array(
      2 => 2,
      5 => 5,
    ),
    'b2f9aa47cb1a770c57df9b75b42ca142' => array(
      2 => 2,
      6 => 6,
    ),
    '375c3378af89c84360b0b97cb194bc0c' => array(),
    'f554e6cb71a88d1696b07a626dab5a0e' => array(),
    'a75af22fdc144b6df3c43cad178a4087' => array(),
    '96b665395c2d4fbf30d16ea9fb9c0278' => array(),
    'e784e48944f57ba4b1a4e941f90dcff6' => array(),
    '607b7740a77875a66c4ad247d394cbe8' => array(),
    'e1976ae8c00a3cf19d5cd0b4d9cb9672' => array(),
    '81350dc5bf2d3eb8a8adcab8d3c9bc75' => array(),
    'd1890baf3ea93f0a874d3353b8ff0cdc' => array(),
    '52ccb99db5fd163f8ee1e1a6be23c4e6' => array(),
    '4f758cda0934f78565f007e645136f18' => array(),
    '64971a5bcc42b2d6c9cd8e118a3b20dd' => array(),
    '268b7788b8f7327bee34e06fe1b1f5e9' => array(
      2 => 2,
      4 => 4,
    ),
    'b1712f5ab126e372ebd496b76c2de764' => array(
      8 => 8,
    ),
    '6887fa2cf5f7e2636aaf4a649e272728' => array(),
    'c6cd5dd383455731a14cd649b6adb4b6' => array(),
    '93b9c82d09dff5c443e28f34a505e93a' => array(),
    '1d384e95e9fcd04d1f0ac918848dde87' => array(),
    '25b91e35069784baa56a4162c9f64501' => array(),
    'c2ea18988c3ec84defa1317dfccf2e57' => array(),
    '2611e88beeba2aa9fc50fda051ef16db' => array(),
    'cc1ea8785b1c003a7886421e71cbe874' => array(),
    'f2c5e9587f80397f8cb87278ec6e6660' => array(),
    'ae2cd687da20ba2e25e448bd6e150d03' => array(),
    '97f66a478c9088537c1e05f427753901' => array(),
  );
  $export['ldap_forge_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_user_conf';
  $strongarm->value = array(
    'drupalAcctProvisionServer' => 'forge_ldap',
    'ldapEntryProvisionServer' => 'forge_ldap',
    'drupalAcctProvisionTriggers' => array(
      2 => '2',
      1 => '1',
    ),
    'ldapEntryProvisionTriggers' => array(
      6 => 0,
      7 => 0,
      8 => 0,
      3 => 0,
    ),
    'orphanedDrupalAcctBehavior' => 'ldap_user_orphan_email',
    'orphanedCheckQty' => '100',
    'userConflictResolve' => 2,
    'manualAccountConflict' => '1',
    'acctCreation' => 4,
    'ldapUserSynchMappings' => array(),
    'disableAdminPasswordField' => 1,
  );
  $export['ldap_user_conf'] = $strongarm;

  return $export;
}
