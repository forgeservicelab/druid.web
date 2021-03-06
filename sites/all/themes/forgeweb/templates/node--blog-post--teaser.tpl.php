<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type, i.e., "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Article" it would result in "node-article". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. page, article, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined, e.g. $node->body becomes $body. When needing to access
 * a field's raw values, developers/themers are strongly encouraged to use these
 * variables. Otherwise they will have to explicitly specify the desired field
 * language, e.g. $node->body['en'], thus overriding any language negotiation
 * rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
?>
<article class="feed-item feed-item--article masonry-item has-social-icons-toggle <?php print $classes; ?>" role="article">
  <?php if (!empty($title_prefix) || !empty($title_suffix) || !$page): ?>
    <header>
      <?php if ($content['field_liftup_image'] || $content['field_blog_post_liftup_video']): ?>
        <div class="feed-item-media">
          <?php print render($content['field_liftup_image']); ?>
          <?php print render($content['field_blog_post_liftup_video']); ?>
        </div>
      <?php endif; ?>
      <?php print render($title_prefix); ?>
      <h2 class="feed-item-title" property="dc:title"><a href="<?php print $node_url; ?>" class="feed-item-title-link" rel="bookmark"><?php print $title; ?></a></h2>
      <?php print render($title_suffix); ?>
    </header>
  <?php endif; ?>

  <?php if ($display_submitted): ?>
    <footer class="node__submitted">
      <?php print $user_picture; ?>
      <p class="submitted"><?php print $submitted; ?></p>
    </footer>
  <?php endif; ?>

  <div<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['field_liftup_image']);
      hide($content['field_blog_post_liftup_video']);
      hide($content['comments']);
      hide($content['links']);
      $share_post_url = url('node/' . $node->nid, array('absolute' => true));
      print render($content);
    ?>
    <div class="feed-item-type"><?php print format_date($created, 'custom', 'j.n.Y'); ?></div>
    <div class="social-icons-wrapper">
      <span class="social-icons-toggle"><?php print t('Share'); ?></span>
      <div class="social-icons">
        <a href="https://www.facebook.com/sharer/sharer.php?u=<?php print $share_post_url; ?>" class="social-icon social-icon--invert social-icon__facebook" target="_blank"><span><?php print t('Share on Facebook'); ?></span></a>
        <a href="https://twitter.com/home?status=<?php print $node->title; ?>%20%7C%20<?php print $share_post_url; ?>" class="social-icon social-icon--invert social-icon__twitter" target="_blank"><span><?php print t('Share on Twitter'); ?></span></a>
        <a href="https://www.linkedin.com/shareArticle?mini=true&url=<?php print $share_post_url; ?>&title=<?php print $node->title; ?>" class="social-icon social-icon--invert social-icon__linkedin" target="_blank"><span><?php print t('Share on LinkedIn'); ?></span></a>
      </div>
    </div>
  </div>

</article>
