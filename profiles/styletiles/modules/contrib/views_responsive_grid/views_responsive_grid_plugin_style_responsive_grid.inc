<?php
/**
 * @file
 * Contains the responsive grid style plugin.
 */

/**
 * Style plugin to render each item in a responsive grid.
 *
 * @ingroup views_style_plugins
 */
class views_responsive_grid_plugin_style_responsive_grid extends views_plugin_style {
  /**
   * Set default options.
   */
  function option_definition() {
    $options = parent::option_definition();
    $options['wrapper_classes'] = array('default' => '');
    $options['columns'] = array('default' => '4');
    $options['alignment'] = array('default' => 'horizontal');
    $options['column_classes'] = array('default' => '');
    $options['row_classes'] = array('default' => '');
    return $options;
  }

  /**
   * Render the given style.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['wrapper_classes'] = array(
      '#type' => 'textfield',
      '#title' => t('Wrapper Class'),
      '#description' => t('Name of the class(es) to be used for the entire wrapper. Separated by spaces.'),
      '#default_value' => $options['wrapper_class'],
    );
    $form['columns'] = array(
      '#type' => 'textfield',
      '#title' => t('Number of columns'),
      '#default_value' => $this->options['columns'],
      '#required' => TRUE,
      '#element_validate' => array('views_element_validate_integer'),
    );
    $form['alignment'] = array(
      '#type' => 'radios',
      '#title' => t('Alignment'),
      '#options' => array('horizontal' => t('Horizontal'), 'vertical' => t('Vertical')),
      '#default_value' => $this->options['alignment'],
      '#description' => t('Horizontal alignment will place items starting in the upper left and moving right. Vertical alignment will place items starting in the upper left and moving down.'),
    );
    $form['column_classes'] = array(
      '#type' => 'textfield',
      '#title' => t('Column Classes'),
      '#description' => t('Name of the class(es) being used for every column. Separated by spaces.'),
      '#default_value' => $this->options['column_classes'],
    );
    $form['row_classes'] = array(
      '#type' => 'textfield',
      '#title' => t('Row Classes'),
      '#description' => t('Name of the class(es) being used for every row. Separated by spaces.'),
      '#default_value' => $this->options['row_classes'],
    );
  }
}
