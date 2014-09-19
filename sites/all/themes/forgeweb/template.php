<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * forgeweb theme.
 */

 // Alter the default comment form
 function forgeweb_form_comment_form_alter(&$form, &$form_state) {
   $form['comment_body']['#after_build'][] = 'forgeweb_customize_comment_form';

   if($form['node_type']['#value'] == 'comment_node_bulletin_board_item') {
     $form['comment_body']['und'][0]['#title'] = t('Reply');
   }
 }

 function forgeweb_customize_comment_form(&$form) {
   // Force comment text-format
   $form[LANGUAGE_NONE][0]['format']['format']['#value'] = 'comment';
   
   // Disable the text-format change from users on comments-
   $form[LANGUAGE_NONE][0]['format']['#access'] = FALSE;
   return $form;
 }
 
function forgeweb_preprocess_node(&$vars) {
  
  if(!empty($_GET['fw'])) {
    // need store value to session
    $_SESSION['forge_web_wizard_role'] = $_GET['role'];
    $vars['back_to_wizard'] = l(t('Back to role selection'), 'wizard/join-forge-service-lab', array('query' => array('role' => $_GET['role']), 'attributes' => array('class' => 'learn-more-link button')));
    $vars['fill_in_application'] = l(t('Fill in application'), 'wizard/registration', array('query' => array('role' => $_GET['role']), 'attributes' => array('class' => 'learn-more-link button')));
  }
}

/**
 * Implements hook_extension_EXTENSION_registry_alter().
 *
 * Add favicons and mobile/tablet icons under head tag.
 */
function forgeweb_theme_registry_alter(&$registry) {

  // The regex finds all files following certain naming conventions.
  $mask = '/^(favicon|mstile|browserconfig|apple-touch-icon)(-precomposed)?(-([0-9]+x[0-9]+))?\.(png|ico|xml)$/';

  // Loop over all themes in the trail in reverse (starting with the current
  // theme) and use the touch icons of the first theme we find. The favicon files
  // are found under theme_name/images
  foreach (array_reverse(omega_theme_trail()) as $theme => $name) {
    $path = drupal_get_path('theme', $theme) . '/images/favicons';

    // Scan files from the path and iterate through the files
    if ($files = file_scan_directory($path, $mask, array('recurse' => FALSE))) {
      foreach ($files as $file) {
        $matches = array();

        // Run the filename through the regex once more picking up the
        // sub-matches in order to find out the dimensions and other information
        // of the files.
        preg_match($mask, $file->filename, $matches);

        // Cache the array of apple touch icons.
        $registry['html']['mobile-favicons'][$file->uri] = array(
          'uri' => $file->uri,
          'precomposed' => !empty($matches[2]) ? $matches[2] : FALSE,
          'sizes' => !empty($matches[4]) ? $matches[4] : FALSE,
          'icon-type' => $matches[1],
          'file-type' => $matches[5],
        );
      }

      // Break out of the loop because we found at least one touch icon.
      break;
    }
  }
}

/**
 * Implements hook_form_alter().
 *
 * Replace the search field label with a placeholder
 */
function forgeweb_form_alter(&$form, &$form_state, $form_id){
  if ($form_id == "views_exposed_form") {
    if (isset($form['keyword'])) {
      // Get the label value from search form
      $label_value = $form['#info']['filter-search_api_views_fulltext']['label'];
      // Move the label to the input as a placeholder
      $form['keyword']['#attributes'] = array('placeholder' => array(t($label_value)));
      // Hide the original label
      $form['#info']['filter-search_api_views_fulltext']['label'] = '';
    }
    if (isset($form['field_page_title_value'])) {
      // Get the label value from search form
      $label_value = $form['#info']['filter-field_page_title_value']['label'];
      // Move the label to the input as a placeholder
      $form['field_page_title_value']['#attributes'] = array('placeholder' => array(t($label_value)));
      // Hide the original label
      $form['#info']['filter-field_page_title_value']['label'] = '';
    }
  }
  if ($form['#id'] == "views-exposed-form-feed-block" || $form['#id'] == 'views-exposed-form-feed-page') {
    $form['#attributes']['autocomplete'][0] = 'off';
  }
}

// Unset module/system javascript
function forgeweb_js_alter(&$javascript){

  // Move all javascript to footer
  foreach ($javascript as $key => $val) {
    if ($javascript[$key]['scope'] == 'force-header') {
      $javascript[$key]['scope'] = 'header';
    }
    else {
      $javascript[$key]['scope'] = 'footer';
    }
  }

  // $javascript['misc/drupal.js']['scope'] = 'header';
  // $javascript['misc/jquery.js']['scope'] = 'header';
  // $javascript['misc/jquery.once.js']['scope'] = 'header';
}	


function forgeweb_preprocess_menu_link(&$vars) {
  if($vars['element']['#title'] == 'Join Forge' && !user_is_anonymous()) {
    $vars['element']['#title'] = 'My Forge';
    $vars['element']['#href'] = 'welcome-forge-service-lab';
  }
}
 