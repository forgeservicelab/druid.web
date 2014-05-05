<?php
/**
 * @file
 * forge_landing_pages.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function forge_landing_pages_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_page';
  $context->description = 'This context is triggered on the front page';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'locale-language_content' => array(
          'module' => 'locale',
          'delta' => 'language_content',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'views-liftup_block-block' => array(
          'module' => 'views',
          'delta' => 'liftup_block-block',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'forge_web_base-forge_web_what' => array(
          'module' => 'forge_web_base',
          'delta' => 'forge_web_what',
          'region' => 'middle_content',
          'weight' => '-10',
        ),
        'forge_web_base-forge_web_why' => array(
          'module' => 'forge_web_base',
          'delta' => 'forge_web_why',
          'region' => 'middle_content',
          'weight' => '-9',
        ),
        'quicktabs-partners_or_people' => array(
          'module' => 'quicktabs',
          'delta' => 'partners_or_people',
          'region' => 'middle_content',
          'weight' => '-8',
        ),
        'views-faq-block' => array(
          'module' => 'views',
          'delta' => 'faq-block',
          'region' => 'middle_content',
          'weight' => '-7',
        ),
        'views-feed-block' => array(
          'module' => 'views',
          'delta' => 'feed-block',
          'region' => 'after_content',
          'weight' => '-10',
        ),
        'fb_likebox-0' => array(
          'module' => 'fb_likebox',
          'delta' => '0',
          'region' => 'after_content',
          'weight' => '-9',
        ),
      ),
      'layout' => 'forge_web_front_page',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('This context is triggered on the front page');
  $export['front_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'This context is triggered sitewide on english pages';
  $context->tag = 'Sitewide';
  $context->conditions = array(
    'language' => array(
      'values' => array(
        'en' => 'en',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'menu-menu-log-in-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-log-in-menu',
          'region' => 'navigation',
          'weight' => '-9',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '0',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'footer_left',
          'weight' => '-10',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'footer_right',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide');
  t('This context is triggered sitewide on english pages');
  $export['sitewide'] = $context;

  return $export;
}
