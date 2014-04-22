<div<?php print $attributes; ?>>
  <header class="l-header" role="banner">
    <div class="l-navigation-wrapper">
      <?php if ($site_name): ?>
        <a href="<?php print $front_page; ?>" class="home-icon" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
      <?php endif; ?>
      
      <?php print render($page['navigation']); ?>
    </div>
  </header>
  
  <?php if ($page['highlighted']): ?>
    <div class="l-highlighted">
      <?php print render($page['highlighted']); ?>
    </div>
  <?php endif; ?>
  
  
  <?php if ($page['hero']): ?>
    <div class="l-hero">
      <?php print render($page['hero']); ?>
    </div>
  <?php endif; ?>
  
  <div class="l-main">
    <div class="l-content " role="main">
      <a id="main-content"></a>
      <?php print $messages; ?>
      <?php print render($tabs); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>
    </div>
    
    <?php print render($page['sidebar_first']); ?>
    <?php print render($page['sidebar_second']); ?>
  </div>
  
  <?php if ($page['after_content']): ?>
    <div class="l-after_content">
      <?php print render($page['after_content']); ?>
    </div>
  <?php endif; ?>
  
  <footer class="l-footer" role="contentinfo">
    <div class="l-footer-wrapper">
      <?php print render($page['footer_left']); ?>
      <?php print render($page['footer_right']); ?>
    </div>
  </footer>
</div>
