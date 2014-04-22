<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * forgeweb theme.
 */

 // Alter the default comment form
 function forgeweb_form_comment_form_alter(&$form, &$form_state) {
   $form['comment_body']['#after_build'][] = 'forgeweb_customize_comment_form';
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
    $vars['back_to_wizard'] = l(t('Back to role selection'), 'wizard/join-forge-service-lab', array('attributes' => array('class' => 'back-to-wizard')));
  }
}
