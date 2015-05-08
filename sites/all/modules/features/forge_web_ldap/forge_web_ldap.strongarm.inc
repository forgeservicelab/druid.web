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
    5 => 0,
    2 => TRUE,
    4 => 0,
    3 => 0,
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
  $strongarm->value = array(
    'fa657fc9a515642d26d463cbd19a8f3e' => array(),
    '2f1cc5940d2ed85d75d2198aecae1d9f' => array(),
    '2e717846b31740d1baffeae514571549' => array(),
    '3fa5005723528eab0bdb51a658332702' => array(),
    'd76bb4dd2cb68bf19e45320a388d7448' => array(),
    'e485e212e7aa42bccb9619dfea105130' => array(),
    '2c9c6e172d1f48f99a10d069d299eb37' => array(),
    '8b165ff12a78888d4433c7ed4b7563ff' => array(),
    'b5782688c5981e97d6f5f2393eb0bc8d' => array(),
    '98bb9085da97bf6386eccf2f5f4ddccc' => array(),
    '1e6d6ae4c5d7c1ec4a77b2d80ec25625' => array(),
    '63eec88fe7815078198f69bdb200ace4' => array(),
    '66966582a23fc34d35b70dd1422a878f' => array(),
    '2a1da5d786dee0a36f53225c0c08eadb' => array(),
    '99624a72b2c9eca6da44082693fbe67f' => array(
      2 => 2,
      4 => 4,
    ),
    '7689de42ab5314e405662c2cf6ddecad' => array(),
    '48d8aff6948c39640a2aa89b847d5ca1' => array(),
    '6185642d40c2ed4e8fe12aa4fefb7038' => array(
      2 => 2,
      9 => 9,
    ),
    '5e4a205beb5942976f3eaacacfd42173' => array(),
    '0be79ee8818c8c2580c3b260ac58322e' => array(),
    '04f4c61b361d2964d02a6429bdcd77c4' => array(
      2 => 2,
      4 => 4,
    ),
    'd75ccd790b1e24613a17cd378d4fa5a9' => array(
      2 => 2,
      4 => 4,
    ),
    '0d4c0f321b18c4be001bfc33a8a91f44' => array(
      2 => 2,
      4 => 4,
    ),
    '76b070e70531bd3c5650288acf49bc2b' => array(
      2 => 2,
      4 => 4,
    ),
    'd050f99e6035d4c76319eb1ca70e22f2' => array(),
    '4e7c9413c31abe090089b46bec79daef' => array(
      2 => 2,
      7 => 7,
      8 => 8,
    ),
    'b04c56599f37b3ff27bae58934170b48' => array(
      5 => 5,
    ),
    '2fb413ddd11cd6f0bacfa6369aa5960f' => array(
      2 => 2,
      5 => 5,
    ),
    '6be137fad7d0d6b47e124ab29559690a' => array(
      2 => 2,
      6 => 6,
    ),
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
