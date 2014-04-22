<?php
/**
 * @file
 * forge_web_blog.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function forge_web_blog_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'all_blogs';
  $context->description = 'This context is triggered on page that lists all blogs';
  $context->tag = 'Blogs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blogs' => 'blogs',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog_latest_blog_posts-block' => array(
          'module' => 'views',
          'delta' => 'blog_latest_blog_posts-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-blog_latest_comments_-block_1' => array(
          'module' => 'views',
          'delta' => 'blog_latest_comments_-block_1',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blogs');
  t('This context is triggered on page that lists all blogs');
  $export['all_blogs'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog';
  $context->description = 'This context is triggered on blog-pages.';
  $context->tag = 'Blogs';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog_posts-block' => array(
          'module' => 'views',
          'delta' => 'blog_posts-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-blog_authors-block' => array(
          'module' => 'views',
          'delta' => 'blog_authors-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-blog_latest_blog_posts-block' => array(
          'module' => 'views',
          'delta' => 'blog_latest_blog_posts-block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-blog_latest_comments_-block' => array(
          'module' => 'views',
          'delta' => 'blog_latest_comments_-block',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blogs');
  t('This context is triggered on blog-pages.');
  $export['blog'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_post';
  $context->description = 'This context is triggered on blog-post page.';
  $context->tag = 'Blogs';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog_post' => 'blog_post',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog_slideshow-block' => array(
          'module' => 'views',
          'delta' => 'blog_slideshow-block',
          'region' => 'content',
          'weight' => '1',
        ),
        'views-blog_sidebar_block-block' => array(
          'module' => 'views',
          'delta' => 'blog_sidebar_block-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-blog_latest_blog_posts-block' => array(
          'module' => 'views',
          'delta' => 'blog_latest_blog_posts-block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-blog_latest_comments_-block_2' => array(
          'module' => 'views',
          'delta' => 'blog_latest_comments_-block_2',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blogs');
  t('This context is triggered on blog-post page.');
  $export['blog_post'] = $context;

  return $export;
}
