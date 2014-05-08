<?php

/**
 * Implements hook_preprocess_page().
 */
function forgeweb_preprocess_html(&$variables) {
  // You can use preprocess hooks to modify the variables before they are passed
  // to the theme function or template file.
  drupal_add_css('//cloud.typography.com/7101492/624424/css/fonts.css', array('type' => 'external'));
  // Some fix js:s for 234. Most to be removed in future
  drupal_add_js('$path/js/unicode-hack.js');
  drupal_add_js('$path/js/remove-activeclasses.js');
  
  // Check for favicons from registry and add them to head after a thorough checkup
  $registry = theme_get_registry(TRUE);
  dsm($registry);
  /*
   * 
<link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-57x57.png">
<link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114x114.png">
<link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-72x72.png">
<link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144x144.png">
<link rel="apple-touch-icon" sizes="60x60" href="/apple-touch-icon-60x60.png">
<link rel="apple-touch-icon" sizes="120x120" href="/apple-touch-icon-120x120.png">
<link rel="apple-touch-icon" sizes="76x76" href="/apple-touch-icon-76x76.png">
<link rel="apple-touch-icon" sizes="152x152" href="/apple-touch-icon-152x152.png">
<link rel="icon" type="image/png" href="/favicon-196x196.png" sizes="196x196">
<link rel="icon" type="image/png" href="/favicon-160x160.png" sizes="160x160">
<link rel="icon" type="image/png" href="/favicon-96x96.png" sizes="96x96">
<link rel="icon" type="image/png" href="/favicon-16x16.png" sizes="16x16">
<link rel="icon" type="image/png" href="/favicon-32x32.png" sizes="32x32">
<meta name="msapplication-TileColor" content="#da532c">
<meta name="msapplication-TileImage" content="/mstile-144x144.png">
   */
     
  if (!empty($registry['html']['mobile-favicons'])) {
    favicon_get_meta_information($registry['html']['mobile-favicons']);
  }
}

function favicon_get_meta_information($favicons) {
  // Let's start html head item weight from 20
  $weight = 20;

  // Iterate over the array of touch icons and attributes.
  foreach ($favicons as $icon) {
    switch ($icon['file-type']) {
      // Go through file types. In our case png and ico are found.
      case 'png':

        // Go through icon types (names) and set their meta information to meta variable.
        switch ($icon['icon-type']) {
          case 'apple-touch-icon':
            $meta = favicon_insert_meta_information($icon, 'link', 'apple-touch-icon', array(
              'rel',
              'href'
            ));
            break;

          case 'mstile':
            switch ($icon['sizes']) {
              case '144x144':
                $rel = 'msapplication-TileImage' . $icon['sizes'] . 'logo';
                break;
              case '310x150':
                $rel = 'msapplication-wide' . $icon['sizes'] . 'logo';
                break;
              default:
                $rel = 'msapplication-square' . $icon['sizes'] . 'logo';
                break;
            }
            $meta = favicon_insert_meta_information($icon, 'meta', $rel, array(
              'name',
              'content'
            ));

            break;

          case 'favicon':
            $meta = favicon_insert_meta_information($icon, 'link', 'icon');
            $meta['#attributes']['type'] = 'image/png';
            break;
        }
        break;

      case 'ico':
        $meta = favicon_insert_meta_information($icon, 'link', 'shortcut icon');
        break;
    }

    // Check if we should add additional attribute for icon size.
    if (!empty($icon['sizes']) && $icon['icon-type'] != 'mstile' && $icon['file-type'] != 'ico') {
      $meta['#attributes']['sizes'] = $icon['sizes'];
    }

    // Add the touch icon to the html head using a unique key.
    $key = 'mobile-touch-' . (!empty($icon['icon-type']) ? $icon['icon-type'] : '') . (!empty($icon['sizes']) ? '-' . $icon['sizes'] : '') . (!empty($icon['precomposed']) ? '-precomposed' : '');

    if (!empty($meta)) {
      // Add weight to meta information and add the whole array to html head
      $meta['#weight'] = $weight;
      drupal_add_html_head($meta, $key);
      $weight++;
    }
  }

  // We need to add separate base color meta information for MS tiles.
  drupal_add_html_head(
    array(
      '#tag' => 'meta',
      '#attributes' => array(
        'name' => 'msapplication-TileColor',
        'content' => '#ffffff',
      ),
      '#weight' => $weight,
    ),
    'mobile-touch-mstile-color'
  );
}

/**
 * Function to return meta information for different favicon types.
 *
 * @param $icon
 * @return array
 */
function favicon_insert_meta_information($icon, $tag, $rel, $attr = array('rel', 'href')) {
  if (!empty($icon)) {
    $meta = array(
      '#tag' => $tag,
      '#attributes' => array(
        $attr[0] => $rel . (!empty($icon['precomposed']) ? '-precomposed' : ''),
        $attr[1] => file_create_url($icon['uri']),
      ),
    );

    return $meta;
  }
}
