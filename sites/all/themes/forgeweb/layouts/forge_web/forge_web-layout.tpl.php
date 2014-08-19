<div<?php print $attributes; ?>>
  <header class="l-header" role="banner">
    <div class="l-navigation-wrapper">
      <?php if ($site_name): ?>
        <a href="<?php print $front_page; ?>" class="home-icon" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
      <?php endif; ?>
      
      <?php print render($page['navigation']); ?>
    </div>
  </header>
  
  <?php if ($page['help']): ?>
    <div class="l-help-wrapper">
      <?php print render($page['help']); ?>
      <div class="toggle-help"><?php print t("Show/hide"); ?></div>
    </div>
  <?php endif; ?>
  
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
    <?php if ($title && !$node): ?>
      <h1 class="page-title">
        <?php print $title; ?>
      </h1>
    <?php endif; ?>
    <?php if ($page['before_content']): ?>
      <div class="l-before_content">
        <?php print render($page['before_content']); ?>
      </div>
    <?php endif; ?>
    <div class="l-content " role="main">
      <a id="main-content"></a>
      <?php print $messages; ?>
      <?php print render($tabs); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>
      
      <?php if ($page['under_content']): ?>
        <div class="l-under_content">
          <?php print render($page['under_content']); ?>
        </div>
      <?php endif; ?>
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
