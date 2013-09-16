<?php
/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */

function styletiles_form_install_configure_form_alter(&$form, $form_state) {

  // Pre-populate the site name and email address.
  $form['site_information']['site_name']['#default_value'] = 'Style Tiles';
  $form['site_information']['site_mail']['#default_value'] = 'gregg@iaminawe.com';

  // Account information defaults
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['admin_account']['account']['mail']['#default_value'] = 'gregg@iaminawe.com';

  // Date/time settings
  $form['server_settings']['site_default_country']['#default_value'] = 'CA';
 
  // Unset the timezone detect stuff
  unset($form['server_settings']['date_default_timezone']['#attributes']['class']);

  // Only check for updates, no need for email notifications
  $form['update_notifications']['update_status_module']['#default_value'] = array(1);
}

/**
 * Implements hook_form_alter().
 */
function system_form_install_select_profile_form_alter(&$form, $form_state) {
  // select styletiles_dev install profile by default
  foreach ($form['profile'] as $key => $element) {
    $form['profile'][$key]['#value'] = 'styletiles';
  }
}