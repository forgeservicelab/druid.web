<?php
/**
 * @file
 * forge_web_authcache.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function forge_web_authcache_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_block-block-9';
  $strongarm->value = array(
    'status' => '1',
    'lifespan' => '3600',
    'peruser' => '1',
    'clients' => array(
      'authcache_ajax' => array(
        'status' => '1',
        'weight' => '0',
      ),
    ),
    'fallback' => 'cancel',
    'perpage' => 0,
  );
  $export['authcache_block-block-9'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_block-views-what_why_blocks-block';
  $strongarm->value = array(
    'status' => '1',
    'lifespan' => '3600',
    'peruser' => '1',
    'perpage' => '1',
    'clients' => array(
      'authcache_ajax' => array(
        'status' => '1',
        'weight' => '0',
      ),
    ),
    'fallback' => 'cancel',
  );
  $export['authcache_block-views-what_why_blocks-block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_block-views-what_why_blocks-block_1';
  $strongarm->value = array(
    'status' => '1',
    'lifespan' => '3600',
    'peruser' => '1',
    'perpage' => '1',
    'clients' => array(
      'authcache_ajax' => array(
        'status' => '1',
        'weight' => '0',
      ),
    ),
    'fallback' => 'cancel',
  );
  $export['authcache_block-views-what_why_blocks-block_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_debug_all';
  $strongarm->value = 1;
  $export['authcache_debug_all'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_debug_users';
  $strongarm->value = array(
    0 => '',
  );
  $export['authcache_debug_users'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_mimetype';
  $strongarm->value = 'text/html
text/javascript
text/plain
application/xml
application/atom+xml
';
  $export['authcache_mimetype'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_pagecaching';
  $strongarm->value = array(
    0 => array(
      'option' => '0',
      'pages' => 'user*
node/add/*
node/*/edit
node/*/track
tracker*
comment/edit*
civicrm*
cart*
checkout*
system/files/*
system/temporary*
file/ajax/*
js/admin_menu/cache/*
',
      'noadmin' => 1,
      'roles' => array(
        'custom' => '1',
        'roles' => array(
          2 => '2',
          4 => '4',
          3 => '3',
          5 => '5',
          6 => '6',
          7 => '7',
          8 => '8',
        ),
      ),
    ),
  );
  $export['authcache_pagecaching'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_roles';
  $strongarm->value = array(
    2 => '2',
    4 => '4',
    3 => '3',
    5 => '5',
    6 => '6',
    7 => '7',
    8 => '8',
  );
  $export['authcache_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'authcache_su';
  $strongarm->value = 1;
  $export['authcache_su'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_authcache_key';
  $strongarm->value = 1415175164;
  $export['cache_flush_cache_authcache_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_flush_cache_authcache_p13n';
  $strongarm->value = 1415175164;
  $export['cache_flush_cache_authcache_p13n'] = $strongarm;

  return $export;
}
