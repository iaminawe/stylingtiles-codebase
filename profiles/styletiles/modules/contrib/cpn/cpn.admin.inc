<?php
/**
 * @file
 * Manage the CPN settings page.
 */

/**
 * Settings form.
 */
function cpn_settings($form, &$form_state) {
  $form['cpn_syntax_highlighting'] = array(
    '#title' => t('Syntax Highlighting'),
    '#type' => 'radios',
    '#options' => array(
      0 => t('None'),
    ),
    '#default_value' => variable_get('cpn_syntax_highlighting', 0),
  );

  // Add CodeMirror as a syntax highlighting option if available.
  if (cpn_codemirror()) {
    $form['cpn_syntax_highlighting']['#options']['codemirror'] = 'CodeMirror 2';
  }
  else {
    drupal_set_message(t('Syntax highlighting requires <a href="@codemirror">CodeMirror 2</a>. Download it, rename the folder "codemirror", and place it at "sites/all/libraries" (or any <a href="@libraries">Libraries API</a> eligible path). Then return to this page and enable syntax highlighting.', array(
      '@codemirror' => 'http://codemirror.net/',
      '@libraries' => 'http://drupal.org/project/libraries',
    )), 'error');
  }

  $form['cpn_path'] = array(
    '#title' => t('File storage path'),
    '#type' => 'textfield',
    '#default_value' => variable_get('cpn_path', 'public://cpn'),
    '#description' => t('The subdirectory of the system files directory where Code per Node will store its files. Note: changing this path will cause the old path to move to the new path, overwriting the new path, if it exists.'),
  );

  // Allow administrator to disable/enable css/js aggregation if required.
  $form['cpn_aggregation'] = array(
    '#type' => 'fieldset',
    '#title' => t('Code aggregation'),
    '#description' => t('This requires CSS/JS aggregation to be enabled on the <a href="!url">performance settings page</a>.', array('!url' => url('admin/config/development/performance'))),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
  );
  $form['cpn_aggregation']['cpn_aggregation_css'] = array(
    '#type' => 'checkbox',
    '#title' => t('CSS aggregation'),
    '#default_value' => variable_get('cpn_aggregation_css', TRUE),
  );
  $form['cpn_aggregation']['cpn_aggregation_js'] = array(
    '#type' => 'checkbox',
    '#title' => t('JavaScript aggregation'),
    '#default_value' => variable_get('cpn_aggregation_js', TRUE),
  );

  foreach (array('block', 'node') as $entity_type) {
    $form['cpn_wrapper_' . $entity_type] = array(
      '#type' => 'fieldset',
      '#title' => t('Code wrappers: !type (optional)', array('!type' => ucwords($entity_type))),
      '#description' => t('Optionally wrap all !type CSS/JS with additional code. This can be used to simplify the code, reducing the likelihood of a page-breaking error arising. It can also be used to aid integrating with custom DOM libraries. If left empty the code will be output as-is.<br />Note: These will only be displayed if there is per-!type code to be output.', array('!type' => $entity_type)),
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
    );
    $form['cpn_wrapper_' . $entity_type]['cpn_wrapper_' . $entity_type . '_css'] = array(
      '#type' => 'textarea',
      '#title' => t('CSS code wrapper'),
      '#description' => t('Use the token <code>[code]</code> to indicate where the per-!type CSS code will be inserted.', array('!type' => $entity_type)),
      '#default_value' => variable_get('cpn_wrapper_ ' . $entity_type . '_css', '[code]'),
    );
    $form['cpn_wrapper_' . $entity_type]['cpn_wrapper_' . $entity_type . '_js'] = array(
      '#type' => 'textarea',
      '#title' => t('JavaScript code wrapper'),
      '#description' => t('Use the token <code>[code]</code> to indicate where the per-!type JavaScript code will be inserted.', array('!type' => $entity_type)),
      '#default_value' => variable_get('cpn_wrapper_' . $entity_type . '_js', '[code]'),
    );
    // Show the list of available tokens.
    if (module_exists('token')) {
      $form['cpn_wrapper_' . $entity_type]['tokens'] = array(
        '#prefix' => '<p>' . t('Custom tokens may be added to the code to output certain information.') . '</p>',
        '#theme' => 'token_tree',
        '#token_types' => array($entity_type),
        '#weight' => 999,
        '#dialog' => TRUE,
      );
    }
  }

  $form['cpn_global'] = array(
    '#type' => 'fieldset',
    '#title' => t('Global code (optional)'),
    '#description' => t('Optionally load custom code on every page. Note: it is <strong>strongly advised to not use this</strong>, instead it <strong>this code should be added to the theme</strong>. These options <strong>could lead to security problems</strong> or <strong>cause parts of the site to malfunction</strong>. Make sure to test all changes on a copy of the site before trying on a live/production site. Also, note that this code will <em>not</em> be wrapped using the code above. You have been warned.'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['cpn_global']['css'] = array(
    '#type' => 'fieldset',
    '#title' => t('Global CSS'),
    '#collapsible' => FALSE,
  );
  $form['cpn_global']['css']['cpn_global_css_agree'] = array(
    '#type' => 'checkbox',
    '#title' => t('I accept responsibility for this code.'),
    '#default_value' => variable_get('cpn_global_css_agree'),
  );
  $form['cpn_global']['css']['cpn_global_css'] = array(
    '#type' => 'textarea',
    '#title' => t('Global CSS code'),
    '#default_value' => variable_get('cpn_global_css', ''),
    '#states' => array(
      'visible' => array(
        ':input[name="cpn_global_css_agree"]' => array('checked' => TRUE),
      ),
    ),
  );
  $form['cpn_global']['css']['cpn_global_js_admin'] = array(
    '#type' => 'checkbox',
    '#title' => t('Load this code on admin pages too'),
    '#default_value' => variable_get('cpn_global_js_admin'),
    '#states' => array(
      'visible' => array(
        ':input[name="cpn_global_css_agree"]' => array('checked' => TRUE),
      ),
    ),
  );
  // Show the list of available tokens.
  if (module_exists('token')) {
    $form['cpn_global']['css']['tokens'] = array(
      '#prefix' => '<p>' . t('Custom tokens may be added to the code to output certain information.') . '</p>',
      '#theme' => 'token_tree',
      '#token_types' => array(),
      '#weight' => 999,
      '#dialog' => TRUE,
    );
  }
  $form['cpn_global']['js'] = array(
    '#type' => 'fieldset',
    '#title' => t('Global JavaScript'),
    '#collapsible' => FALSE,
  );
  $form['cpn_global']['js']['cpn_global_js_agree'] = array(
    '#type' => 'checkbox',
    '#title' => t('I accept responsibility for this code.'),
    '#default_value' => variable_get('cpn_global_js_agree'),
  );
  $form['cpn_global']['js']['cpn_global_js'] = array(
    '#type' => 'textarea',
    '#title' => t('Global JavaScript code'),
    '#default_value' => variable_get('cpn_global_js', ''),
    '#states' => array(
      'visible' => array(
        ':input[name="cpn_global_js_agree"]' => array('checked' => TRUE),
      ),
    ),
  );
  $form['cpn_global']['js']['cpn_global_js_admin'] = array(
    '#type' => 'checkbox',
    '#title' => t('Load this code on admin pages too'),
    '#default_value' => variable_get('cpn_global_js_admin'),
    '#states' => array(
      'visible' => array(
        ':input[name="cpn_global_js_agree"]' => array('checked' => TRUE),
      ),
    ),
  );
  // Show the list of available tokens.
  if (module_exists('token')) {
    $form['cpn_global']['js']['tokens'] = array(
      '#prefix' => '<p>' . t('Custom tokens may be added to the code to output certain information.') . '</p>',
      '#theme' => 'token_tree',
      '#token_types' => array(),
      '#weight' => 999,
      '#dialog' => TRUE,
    );
  }

  // Add a custom submission handler.
  $form['#submit'][] = 'cpn_settings_submit';

  return system_settings_form($form);
}

/**
 * Settings form - submit callback.
 */
function cpn_settings_submit($form, &$form_state) {
  // Trim slashes from the path.
  $form_state['values']['cpn_path'] = trim($form_state['values']['cpn_path'], '/');

  // If the path changed, notify that the folder must be moved.
  $old_path = variable_get('cpn_path', 'public://cpn');
  if ($form_state['values']['cpn_path'] != $old_path and file_exists(drupal_realpath($old_path))) {
    $base_path = variable_get('file_' . file_default_scheme() . '_path', conf_path() . '/files') . '/';
    drupal_set_message(t('The file storage path has changed; thus, the contents of %old_path must manually be moved to %new_path.', array(
      '%old_path' => $base_path . file_uri_target($old_path),
      '%new_path' => $base_path . file_uri_target($form_state['values']['cpn_path']),
    )), 'warning');
  }

  // Save the global files.
  foreach (array('css', 'js') as $type) {
    // Remove the existing file, if present.
    cpn_delete_file('global.' . $type);

    // If data was submitted, export it.
    if (!empty($form_state['values']['cpn_global_' . $type . '_agree']) && !empty($form_state['values']['cpn_global_' . $type])) {
      if (!empty($form_state['values']['cpn_global_' . $type])) {
        cpn_save_file($form_state['values']['cpn_global_' . $type], 'global.' . $type);
      }
    }
    else {
      $form_state['values']['cpn_global_' . $type] = '';
    }
  }
}
