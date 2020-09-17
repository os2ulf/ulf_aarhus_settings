<?php

/**
 * @file
 * ulf_aarhus_settingss.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ulf_aarhus_settings_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_practical_info_buttons'.
  $field_bases['field_practical_info_buttons'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_practical_info_buttons',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'show_transport_request' => ' Søg tilskud til transport',
        'show_free_course_request' => ' Søg om refusion af forløbet',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
