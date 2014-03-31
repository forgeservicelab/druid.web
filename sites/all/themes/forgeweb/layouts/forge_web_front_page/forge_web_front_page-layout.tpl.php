<div<?php print $attributes; ?>>
  <header class="l-header" role="banner">
    <div class="l-navigation-wrapper">
      <?php print render($page['navigation']); ?>
    </div>
    <?php if ($page['highlighted']): ?>
      <div class="l-highlighted">
        <?php print render($page['highlighted']); ?>
      </div>
    <?php endif; ?>
  </header>

  <div class="l-main">
    <div class="l-content " role="main">
      <a id="main-content"></a>
      <div class="l-branding">
        <?php if ($site_name): ?>
          <?php if ($site_name): ?>
            <h1 class="site-name">
              <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
            </h1>
          <?php endif; ?>
        <?php endif; ?>
      </div>
      
      <div class="l-content-wrapper">
        <?php if ($site_slogan): ?>
          <?php if ($site_slogan): ?>
            <h1 class="site-slogan"><?php print $site_slogan; ?></h1>
          <?php endif; ?>
        <?php endif; ?>
      
        <?php print render($title_prefix); ?>
        <?php if ($title): ?>
          <h2 class="site-title"><?php print $title; ?></h2>
        <?php endif; ?>
        <?php print render($title_suffix); ?>
        <?php print $messages; ?>
        <?php print render($tabs); ?>
        <?php if ($action_links): ?>
          <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>
        <?php print render($page['content']); ?>
        <?php print $feed_icons; ?>
      </div>
    </div>
  </div>
  
  <?php if ($page['after_content']): ?>
    <div class="l-after_content">
      <?php print render($page['after_content']); ?>
    </div>
  <?php endif; ?>
  
  <footer class="l-footer" role="contentinfo">
    <?php print render($page['footer']); ?>
  </footer>
</div>