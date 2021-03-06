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
  global $language;

  if(!empty($_GET['fw'])) {
    // need store value to session
    $_SESSION['forge_web_wizard_role'] = $_GET['role'];
    $vars['back_to_wizard'] = l(t('Back to role selection'), 'wizard/join-forge-service-lab', array('query' => array('role' => $_GET['role']), 'attributes' => array('class' => 'learn-more-link button')));

    // This option is removed, but might be necessary in the future, so it is left here for a while as commented out
    //$vars['fill_in_application'] = l(t('Fill in the application'), 'wizard/registration', array('query' => array('role' => $_GET['role']), 'attributes' => array('class' => 'learn-more-link button')));

    // The contact form has a Finnish version
    ($language->language == 'fi') ? ($contact_page = 'ota-yhteytta') : ($contact_page = 'contact-us');

    // Go to the Contact us page in the current language.
    // For the moment it's the basic contact form only, no selected role is used to pre-fill it.
    $vars['fill_in_application'] = l(t('Contact us'), $contact_page, array('attributes' => array('class' => 'button'))); //l(t('Contact us'), 'wizard/registration', array('query' => array('role' => $_GET['role']), 'attributes' => array('class' => 'learn-more-link button')));
  }
  
  if($vars['type'] == 'tweet') {
    // I'm not sure if this is best way to do this, but in tweet title has html entities like &amp;
    // so let's decode them.
    if(!empty($vars['content']['field_page_title'][0]['#markup'])) {
      $vars['content']['field_page_title'][0]['#markup'] = html_entity_decode($vars['content']['field_page_title'][0]['#markup']);
    }
    if(!empty($vars['content']['field_tweet_body'][0]['#markup'])) {
      $vars['field_tweet_body'][0]['format'] = 'full_html';
      $vars['content']['field_tweet_body'][0]['#markup'] = html_entity_decode(preg_replace('@(https?://([-\w\.]+[-\w])+(:\d+)?(/([\w/_\.#-]*(\?\S+)?[^\.\s])?)?)@', '<a href="$1" target="_blank">$1</a>', $vars['content']['field_tweet_body'][0]['#markup'])); 
    }
  }

  if($vars['view_mode'] == 'teaser') {
    $vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->type . '__teaser';
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
/*
BREAKS CKEDITOR :(), lets do this stuff in advagg
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

  $javascript['misc/drupal.js']['scope'] = 'header';
  $javascript['misc/jquery.js']['scope'] = 'header';
  $javascript['misc/jquery.once.js']['scope'] = 'header';
  $javascript['sites/all/libraries/ckeditor/ckeditor.js']['scope'] = 'header';
}	
*/

function forgeweb_preprocess_menu_link(&$vars) {
  global $user;
  $change_link = false;
  foreach($user->roles as $role) {
    if($role == "developers") {
      $change_link = true;
    }
  }
  if($vars['element']['#title'] == 'Join Forge' && $change_link) {
    $vars['element']['#title'] = 'My Forge';
    $vars['element']['#href'] = 'welcome-forge-service-lab';
  }
}
 