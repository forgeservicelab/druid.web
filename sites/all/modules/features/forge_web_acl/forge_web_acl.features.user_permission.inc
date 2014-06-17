<?php
/**
 * @file
 * forge_web_acl.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function forge_web_acl_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Forge member' => 'Forge member',
      'Partner' => 'Partner',
      'Service developer' => 'Service developer',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Forge member' => 'Forge member',
      'Partner' => 'Partner',
      'Service developer' => 'Service developer',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Forge member' => 'Forge member',
      'Service developer' => 'Service developer',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Content admin' => 'Content admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(),
    'module' => 'contextual',
  );

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: 'access environment indicator'.
  $permissions['access environment indicator'] = array(
    'name' => 'access environment indicator',
    'roles' => array(),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator default_environment'.
  $permissions['access environment indicator default_environment'] = array(
    'name' => 'access environment indicator default_environment',
    'roles' => array(),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator overwritten_environment'.
  $permissions['access environment indicator overwritten_environment'] = array(
    'name' => 'access environment indicator overwritten_environment',
    'roles' => array(),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator prod'.
  $permissions['access environment indicator prod'] = array(
    'name' => 'access environment indicator prod',
    'roles' => array(),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator testi'.
  $permissions['access environment indicator testi'] = array(
    'name' => 'access environment indicator testi',
    'roles' => array(),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access own authorizations'.
  $permissions['access own authorizations'] = array(
    'name' => 'access own authorizations',
    'roles' => array(),
    'module' => 'oauth_common',
  );

  // Exported permission: 'access own consumers'.
  $permissions['access own consumers'] = array(
    'name' => 'access own consumers',
    'roles' => array(),
    'module' => 'oauth_common',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access print'.
  $permissions['access print'] = array(
    'name' => 'access print',
    'roles' => array(),
    'module' => 'print',
  );

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'add authenticated twitter accounts'.
  $permissions['add authenticated twitter accounts'] = array(
    'name' => 'add authenticated twitter accounts',
    'roles' => array(),
    'module' => 'twitter',
  );

  // Exported permission: 'add twitter accounts'.
  $permissions['add twitter accounts'] = array(
    'name' => 'add twitter accounts',
    'roles' => array(),
    'module' => 'twitter',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(),
    'module' => 'ds',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(),
    'module' => 'block',
  );

  // Exported permission: 'administer breakpoints'.
  $permissions['administer breakpoints'] = array(
    'name' => 'administer breakpoints',
    'roles' => array(),
    'module' => 'breakpoints',
  );

  // Exported permission: 'administer cas'.
  $permissions['administer cas'] = array(
    'name' => 'administer cas',
    'roles' => array(),
    'module' => 'cas',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer consumers'.
  $permissions['administer consumers'] = array(
    'name' => 'administer consumers',
    'roles' => array(),
    'module' => 'oauth_common',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer easy social'.
  $permissions['administer easy social'] = array(
    'name' => 'administer easy social',
    'roles' => array(),
    'module' => 'easy_social',
  );

  // Exported permission: 'administer entity translation'.
  $permissions['administer entity translation'] = array(
    'name' => 'administer entity translation',
    'roles' => array(),
    'module' => 'entity_translation',
  );

  // Exported permission: 'administer environment indicator settings'.
  $permissions['administer environment indicator settings'] = array(
    'name' => 'administer environment indicator settings',
    'roles' => array(),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer field permissions'.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(),
    'module' => 'field_group',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'administer fitvids'.
  $permissions['administer fitvids'] = array(
    'name' => 'administer fitvids',
    'roles' => array(),
    'module' => 'fitvids',
  );

  // Exported permission: 'administer flexslider'.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(),
    'module' => 'flexslider',
  );

  // Exported permission: 'administer honeypot'.
  $permissions['administer honeypot'] = array(
    'name' => 'administer honeypot',
    'roles' => array(),
    'module' => 'honeypot',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(),
    'module' => 'image',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(),
    'module' => 'locale',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer oauth'.
  $permissions['administer oauth'] = array(
    'name' => 'administer oauth',
    'roles' => array(),
    'module' => 'oauth_common',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer pdfs'.
  $permissions['administer pdfs'] = array(
    'name' => 'administer pdfs',
    'roles' => array(),
    'module' => 'fillpdf',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'administer pictures'.
  $permissions['administer pictures'] = array(
    'name' => 'administer pictures',
    'roles' => array(),
    'module' => 'picture',
  );

  // Exported permission: 'administer print'.
  $permissions['administer print'] = array(
    'name' => 'administer print',
    'roles' => array(),
    'module' => 'print',
  );

  // Exported permission: 'administer quicktabs'.
  $permissions['administer quicktabs'] = array(
    'name' => 'administer quicktabs',
    'roles' => array(),
    'module' => 'quicktabs',
  );

  // Exported permission: 'administer responsive menus'.
  $permissions['administer responsive menus'] = array(
    'name' => 'administer responsive menus',
    'roles' => array(),
    'module' => 'responsive_menus',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer twitter accounts'.
  $permissions['administer twitter accounts'] = array(
    'name' => 'administer twitter accounts',
    'roles' => array(),
    'module' => 'twitter',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(),
    'module' => 'uuid',
  );

  // Exported permission: 'administer video styles'.
  $permissions['administer video styles'] = array(
    'name' => 'administer video styles',
    'roles' => array(),
    'module' => 'video_embed_field',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: 'administer voting api'.
  $permissions['administer voting api'] = array(
    'name' => 'administer voting api',
    'roles' => array(),
    'module' => 'votingapi',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'bypass honeypot protection'.
  $permissions['bypass honeypot protection'] = array(
    'name' => 'bypass honeypot protection',
    'roles' => array(),
    'module' => 'honeypot',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'change own user language'.
  $permissions['change own user language'] = array(
    'name' => 'change own user language',
    'roles' => array(),
    'module' => 'dul',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(),
    'module' => 'context_ui',
  );

  // Exported permission: 'create company content'.
  $permissions['create company content'] = array(
    'name' => 'create company content',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Partner' => 'Partner',
      'Service developer' => 'Service developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create contact_us content'.
  $permissions['create contact_us content'] = array(
    'name' => 'create contact_us content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create faq_item content'.
  $permissions['create faq_item content'] = array(
    'name' => 'create faq_item content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field_cancellation_refund_policy'.
  $permissions['create field_cancellation_refund_policy'] = array(
    'name' => 'create field_cancellation_refund_policy',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_company_contact_details_fo'.
  $permissions['create field_company_contact_details_fo'] = array(
    'name' => 'create field_company_contact_details_fo',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Partner' => 'Partner',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_customer_rating'.
  $permissions['create field_customer_rating'] = array(
    'name' => 'create field_customer_rating',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_pricing_description'.
  $permissions['create field_pricing_description'] = array(
    'name' => 'create field_pricing_description',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Partner' => 'Partner',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_pricing_information'.
  $permissions['create field_pricing_information'] = array(
    'name' => 'create field_pricing_information',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Partner' => 'Partner',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_pricing_information_in'.
  $permissions['create field_pricing_information_in'] = array(
    'name' => 'create field_pricing_information_in',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Partner' => 'Partner',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_terms_and_conditions'.
  $permissions['create field_terms_and_conditions'] = array(
    'name' => 'create field_terms_and_conditions',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Partner' => 'Partner',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create forge_role_information content'.
  $permissions['create forge_role_information content'] = array(
    'name' => 'create forge_role_information content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create forge_webform content'.
  $permissions['create forge_webform content'] = array(
    'name' => 'create forge_webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create news content'.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create offering content'.
  $permissions['create offering content'] = array(
    'name' => 'create offering content',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Partner' => 'Partner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create partners_and_people content'.
  $permissions['create partners_and_people content'] = array(
    'name' => 'create partners_and_people content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create product_family content'.
  $permissions['create product_family content'] = array(
    'name' => 'create product_family content',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Partner' => 'Partner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create project content'.
  $permissions['create project content'] = array(
    'name' => 'create project content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create service_offering content'.
  $permissions['create service_offering content'] = array(
    'name' => 'create service_offering content',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Partner' => 'Partner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tutorial content'.
  $permissions['create tutorial content'] = array(
    'name' => 'create tutorial content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tweet content'.
  $permissions['create tweet content'] = array(
    'name' => 'create tweet content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(),
    'module' => 'path',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(),
    'module' => 'ckeditor',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'delete any company content'.
  $permissions['delete any company content'] = array(
    'name' => 'delete any company content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any contact_us content'.
  $permissions['delete any contact_us content'] = array(
    'name' => 'delete any contact_us content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any faq_item content'.
  $permissions['delete any faq_item content'] = array(
    'name' => 'delete any faq_item content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any forge_role_information content'.
  $permissions['delete any forge_role_information content'] = array(
    'name' => 'delete any forge_role_information content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any forge_webform content'.
  $permissions['delete any forge_webform content'] = array(
    'name' => 'delete any forge_webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any news content'.
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any offering content'.
  $permissions['delete any offering content'] = array(
    'name' => 'delete any offering content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any partners_and_people content'.
  $permissions['delete any partners_and_people content'] = array(
    'name' => 'delete any partners_and_people content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any product_family content'.
  $permissions['delete any product_family content'] = array(
    'name' => 'delete any product_family content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any project content'.
  $permissions['delete any project content'] = array(
    'name' => 'delete any project content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any service_offering content'.
  $permissions['delete any service_offering content'] = array(
    'name' => 'delete any service_offering content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tutorial content'.
  $permissions['delete any tutorial content'] = array(
    'name' => 'delete any tutorial content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tweet content'.
  $permissions['delete any tweet content'] = array(
    'name' => 'delete any tweet content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own company content'.
  $permissions['delete own company content'] = array(
    'name' => 'delete own company content',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Partner' => 'Partner',
      'Service developer' => 'Service developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own contact_us content'.
  $permissions['delete own contact_us content'] = array(
    'name' => 'delete own contact_us content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own faq_item content'.
  $permissions['delete own faq_item content'] = array(
    'name' => 'delete own faq_item content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own forge_role_information content'.
  $permissions['delete own forge_role_information content'] = array(
    'name' => 'delete own forge_role_information content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own forge_webform content'.
  $permissions['delete own forge_webform content'] = array(
    'name' => 'delete own forge_webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own news content'.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own offering content'.
  $permissions['delete own offering content'] = array(
    'name' => 'delete own offering content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own partners_and_people content'.
  $permissions['delete own partners_and_people content'] = array(
    'name' => 'delete own partners_and_people content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own product_family content'.
  $permissions['delete own product_family content'] = array(
    'name' => 'delete own product_family content',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Partner' => 'Partner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own project content'.
  $permissions['delete own project content'] = array(
    'name' => 'delete own project content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own service_offering content'.
  $permissions['delete own service_offering content'] = array(
    'name' => 'delete own service_offering content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tutorial content'.
  $permissions['delete own tutorial content'] = array(
    'name' => 'delete own tutorial content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tweet content'.
  $permissions['delete own tweet content'] = array(
    'name' => 'delete own tweet content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in category'.
  $permissions['delete terms in category'] = array(
    'name' => 'delete terms in category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in collection'.
  $permissions['delete terms in collection'] = array(
    'name' => 'delete terms in collection',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in geographical_coverage'.
  $permissions['delete terms in geographical_coverage'] = array(
    'name' => 'delete terms in geographical_coverage',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in hashtag'.
  $permissions['delete terms in hashtag'] = array(
    'name' => 'delete terms in hashtag',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags_offerings'.
  $permissions['delete terms in tags_offerings'] = array(
    'name' => 'delete terms in tags_offerings',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'edit any company content'.
  $permissions['edit any company content'] = array(
    'name' => 'edit any company content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any contact_us content'.
  $permissions['edit any contact_us content'] = array(
    'name' => 'edit any contact_us content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any faq_item content'.
  $permissions['edit any faq_item content'] = array(
    'name' => 'edit any faq_item content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any forge_role_information content'.
  $permissions['edit any forge_role_information content'] = array(
    'name' => 'edit any forge_role_information content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any forge_webform content'.
  $permissions['edit any forge_webform content'] = array(
    'name' => 'edit any forge_webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any news content'.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any offering content'.
  $permissions['edit any offering content'] = array(
    'name' => 'edit any offering content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any partners_and_people content'.
  $permissions['edit any partners_and_people content'] = array(
    'name' => 'edit any partners_and_people content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any product_family content'.
  $permissions['edit any product_family content'] = array(
    'name' => 'edit any product_family content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any project content'.
  $permissions['edit any project content'] = array(
    'name' => 'edit any project content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any service_offering content'.
  $permissions['edit any service_offering content'] = array(
    'name' => 'edit any service_offering content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tutorial content'.
  $permissions['edit any tutorial content'] = array(
    'name' => 'edit any tutorial content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tweet content'.
  $permissions['edit any tweet content'] = array(
    'name' => 'edit any tweet content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_cancellation_refund_policy'.
  $permissions['edit field_cancellation_refund_policy'] = array(
    'name' => 'edit field_cancellation_refund_policy',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_company_contact_details_fo'.
  $permissions['edit field_company_contact_details_fo'] = array(
    'name' => 'edit field_company_contact_details_fo',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_customer_rating'.
  $permissions['edit field_customer_rating'] = array(
    'name' => 'edit field_customer_rating',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_pricing_description'.
  $permissions['edit field_pricing_description'] = array(
    'name' => 'edit field_pricing_description',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_pricing_information'.
  $permissions['edit field_pricing_information'] = array(
    'name' => 'edit field_pricing_information',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_pricing_information_in'.
  $permissions['edit field_pricing_information_in'] = array(
    'name' => 'edit field_pricing_information_in',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_terms_and_conditions'.
  $permissions['edit field_terms_and_conditions'] = array(
    'name' => 'edit field_terms_and_conditions',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Forge member' => 'Forge member',
      'Partner' => 'Partner',
      'Service developer' => 'Service developer',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own company content'.
  $permissions['edit own company content'] = array(
    'name' => 'edit own company content',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Partner' => 'Partner',
      'Service developer' => 'Service developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own contact_us content'.
  $permissions['edit own contact_us content'] = array(
    'name' => 'edit own contact_us content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own faq_item content'.
  $permissions['edit own faq_item content'] = array(
    'name' => 'edit own faq_item content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own field_cancellation_refund_policy'.
  $permissions['edit own field_cancellation_refund_policy'] = array(
    'name' => 'edit own field_cancellation_refund_policy',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_company_contact_details_fo'.
  $permissions['edit own field_company_contact_details_fo'] = array(
    'name' => 'edit own field_company_contact_details_fo',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Partner' => 'Partner',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_customer_rating'.
  $permissions['edit own field_customer_rating'] = array(
    'name' => 'edit own field_customer_rating',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_pricing_description'.
  $permissions['edit own field_pricing_description'] = array(
    'name' => 'edit own field_pricing_description',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Partner' => 'Partner',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_pricing_information'.
  $permissions['edit own field_pricing_information'] = array(
    'name' => 'edit own field_pricing_information',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Partner' => 'Partner',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_pricing_information_in'.
  $permissions['edit own field_pricing_information_in'] = array(
    'name' => 'edit own field_pricing_information_in',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Partner' => 'Partner',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_terms_and_conditions'.
  $permissions['edit own field_terms_and_conditions'] = array(
    'name' => 'edit own field_terms_and_conditions',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Partner' => 'Partner',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own forge_role_information content'.
  $permissions['edit own forge_role_information content'] = array(
    'name' => 'edit own forge_role_information content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own forge_webform content'.
  $permissions['edit own forge_webform content'] = array(
    'name' => 'edit own forge_webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own news content'.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own offering content'.
  $permissions['edit own offering content'] = array(
    'name' => 'edit own offering content',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Partner' => 'Partner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own partners_and_people content'.
  $permissions['edit own partners_and_people content'] = array(
    'name' => 'edit own partners_and_people content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own product_family content'.
  $permissions['edit own product_family content'] = array(
    'name' => 'edit own product_family content',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Partner' => 'Partner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own project content'.
  $permissions['edit own project content'] = array(
    'name' => 'edit own project content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own service_offering content'.
  $permissions['edit own service_offering content'] = array(
    'name' => 'edit own service_offering content',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Partner' => 'Partner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tutorial content'.
  $permissions['edit own tutorial content'] = array(
    'name' => 'edit own tutorial content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tweet content'.
  $permissions['edit own tweet content'] = array(
    'name' => 'edit own tweet content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'edit terms in category'.
  $permissions['edit terms in category'] = array(
    'name' => 'edit terms in category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in collection'.
  $permissions['edit terms in collection'] = array(
    'name' => 'edit terms in collection',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in geographical_coverage'.
  $permissions['edit terms in geographical_coverage'] = array(
    'name' => 'edit terms in geographical_coverage',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in hashtag'.
  $permissions['edit terms in hashtag'] = array(
    'name' => 'edit terms in hashtag',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags_offerings'.
  $permissions['edit terms in tags_offerings'] = array(
    'name' => 'edit terms in tags_offerings',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: 'export nodes'.
  $permissions['export nodes'] = array(
    'name' => 'export nodes',
    'roles' => array(),
    'module' => 'node_export',
  );

  // Exported permission: 'export own nodes'.
  $permissions['export own nodes'] = array(
    'name' => 'export own nodes',
    'roles' => array(),
    'module' => 'node_export',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'grant content access'.
  $permissions['grant content access'] = array(
    'name' => 'grant content access',
    'roles' => array(),
    'module' => 'content_access',
  );

  // Exported permission: 'grant own content access'.
  $permissions['grant own content access'] = array(
    'name' => 'grant own content access',
    'roles' => array(),
    'module' => 'content_access',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'node-specific print configuration'.
  $permissions['node-specific print configuration'] = array(
    'name' => 'node-specific print configuration',
    'roles' => array(),
    'module' => 'print',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(),
    'module' => 'pathauto',
  );

  // Exported permission: 'oauth authorize any consumers'.
  $permissions['oauth authorize any consumers'] = array(
    'name' => 'oauth authorize any consumers',
    'roles' => array(),
    'module' => 'oauth_common',
  );

  // Exported permission: 'oauth register any consumers'.
  $permissions['oauth register any consumers'] = array(
    'name' => 'oauth register any consumers',
    'roles' => array(),
    'module' => 'oauth_common',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Forge member' => 'Forge member',
      'Partner' => 'Partner',
      'Service developer' => 'Service developer',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'publish all pdfs'.
  $permissions['publish all pdfs'] = array(
    'name' => 'publish all pdfs',
    'roles' => array(),
    'module' => 'fillpdf',
  );

  // Exported permission: 'publish own pdfs'.
  $permissions['publish own pdfs'] = array(
    'name' => 'publish own pdfs',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'fillpdf',
  );

  // Exported permission: 'rate content'.
  $permissions['rate content'] = array(
    'name' => 'rate content',
    'roles' => array(),
    'module' => 'fivestar',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'save draft'.
  $permissions['save draft'] = array(
    'name' => 'save draft',
    'roles' => array(
      'Blogger' => 'Blogger',
      'Content admin' => 'Content admin',
      'Forge member' => 'Forge member',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'save_draft',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Forge member' => 'Forge member',
      'Partner' => 'Partner',
      'Service developer' => 'Service developer',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(),
    'module' => 'shortcut',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: 'toggle field translatability'.
  $permissions['toggle field translatability'] = array(
    'name' => 'toggle field translatability',
    'roles' => array(),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate admin strings'.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(),
    'module' => 'i18n_string',
  );

  // Exported permission: 'translate any entity'.
  $permissions['translate any entity'] = array(
    'name' => 'translate any entity',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate comment entities'.
  $permissions['translate comment entities'] = array(
    'name' => 'translate comment entities',
    'roles' => array(),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(),
    'module' => 'locale',
  );

  // Exported permission: 'translate node entities'.
  $permissions['translate node entities'] = array(
    'name' => 'translate node entities',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate taxonomy_term entities'.
  $permissions['translate taxonomy_term entities'] = array(
    'name' => 'translate taxonomy_term entities',
    'roles' => array(),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate user entities'.
  $permissions['translate user entities'] = array(
    'name' => 'translate user entities',
    'roles' => array(),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate user-defined strings'.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(),
    'module' => 'i18n_string',
  );

  // Exported permission: 'use PHP for title patterns'.
  $permissions['use PHP for title patterns'] = array(
    'name' => 'use PHP for title patterns',
    'roles' => array(),
    'module' => 'auto_nodetitle',
  );

  // Exported permission: 'use PHP to import nodes'.
  $permissions['use PHP to import nodes'] = array(
    'name' => 'use PHP to import nodes',
    'roles' => array(),
    'module' => 'node_export',
  );

  // Exported permission: 'use easy social wizard'.
  $permissions['use easy social wizard'] = array(
    'name' => 'use easy social wizard',
    'roles' => array(),
    'module' => 'easy_social',
  );

  // Exported permission: 'use text format comment'.
  $permissions['use text format comment'] = array(
    'name' => 'use text format comment',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Forge member' => 'Forge member',
      'Partner' => 'Partner',
      'Service developer' => 'Service developer',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Partner' => 'Partner',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view field_cancellation_refund_policy'.
  $permissions['view field_cancellation_refund_policy'] = array(
    'name' => 'view field_cancellation_refund_policy',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_company_contact_details_fo'.
  $permissions['view field_company_contact_details_fo'] = array(
    'name' => 'view field_company_contact_details_fo',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_customer_rating'.
  $permissions['view field_customer_rating'] = array(
    'name' => 'view field_customer_rating',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_pricing_description'.
  $permissions['view field_pricing_description'] = array(
    'name' => 'view field_pricing_description',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Forge member' => 'Forge member',
      'Partner' => 'Partner',
      'Service developer' => 'Service developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_pricing_information'.
  $permissions['view field_pricing_information'] = array(
    'name' => 'view field_pricing_information',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Forge member' => 'Forge member',
      'Partner' => 'Partner',
      'Service developer' => 'Service developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_pricing_information_in'.
  $permissions['view field_pricing_information_in'] = array(
    'name' => 'view field_pricing_information_in',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Forge member' => 'Forge member',
      'Partner' => 'Partner',
      'Service developer' => 'Service developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_terms_and_conditions'.
  $permissions['view field_terms_and_conditions'] = array(
    'name' => 'view field_terms_and_conditions',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Forge member' => 'Forge member',
      'Partner' => 'Partner',
      'Service developer' => 'Service developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_cancellation_refund_policy'.
  $permissions['view own field_cancellation_refund_policy'] = array(
    'name' => 'view own field_cancellation_refund_policy',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_company_contact_details_fo'.
  $permissions['view own field_company_contact_details_fo'] = array(
    'name' => 'view own field_company_contact_details_fo',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Partner' => 'Partner',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_customer_rating'.
  $permissions['view own field_customer_rating'] = array(
    'name' => 'view own field_customer_rating',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_pricing_description'.
  $permissions['view own field_pricing_description'] = array(
    'name' => 'view own field_pricing_description',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Partner' => 'Partner',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_pricing_information'.
  $permissions['view own field_pricing_information'] = array(
    'name' => 'view own field_pricing_information',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Partner' => 'Partner',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_pricing_information_in'.
  $permissions['view own field_pricing_information_in'] = array(
    'name' => 'view own field_pricing_information_in',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Partner' => 'Partner',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_terms_and_conditions'.
  $permissions['view own field_terms_and_conditions'] = array(
    'name' => 'view own field_terms_and_conditions',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Partner' => 'Partner',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'system',
  );

  return $permissions;
}
