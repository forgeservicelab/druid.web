<?php
/**
 * @file
 * forge_web_offering.flexslider_default_preset.inc
 */

/**
 * Implements hook_flexslider_default_presets().
 */
function forge_web_offering_flexslider_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'slideshow';
  $preset->title = 'Slideshow';
  $preset->theme = 'classic';
  $preset->imagestyle_normal = 'flexslider_full';
  $preset->imagestyle_thumbnail = 'flexslider_thumbnail';
  $preset->options = array(
    'namespace' => 'flex-',
    'selector' => '.slides > li',
    'easing' => 'swing',
    'direction' => 'horizontal',
    'reverse' => 0,
    'smoothHeight' => 1,
    'startAt' => '0',
    'animationSpeed' => '400',
    'initDelay' => '0',
    'useCSS' => 1,
    'touch' => 1,
    'video' => 1,
    'keyboard' => 1,
    'multipleKeyboard' => 0,
    'mousewheel' => 0,
    'controlsContainer' => '.flex-control-nav-container',
    'sync' => '',
    'asNavFor' => '',
    'itemWidth' => '0',
    'itemMargin' => '0',
    'minItems' => '0',
    'maxItems' => '0',
    'move' => '0',
    'animation' => 'slide',
    'slideshow' => 0,
    'slideshowSpeed' => '8000',
    'directionNav' => 0,
    'controlNav' => 'thumbnails',
    'prevText' => 'Previous',
    'nextText' => 'Next',
    'pausePlay' => 0,
    'pauseText' => 'Pause',
    'playText' => 'Play',
    'randomize' => 0,
    'thumbCaptions' => 0,
    'thumbCaptionsBoth' => 0,
    'animationLoop' => 1,
    'pauseOnAction' => 0,
    'pauseOnHover' => 0,
    'manualControls' => '',
  );
  $export['slideshow'] = $preset;

  return $export;
}
