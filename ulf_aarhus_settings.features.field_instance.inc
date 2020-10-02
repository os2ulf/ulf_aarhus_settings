<?php

/**
 * @file
 * ulf_aarhus_settings.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ulf_aarhus_settings_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-course-field_practical_info_buttons'.
  $field_instances['node-course-field_practical_info_buttons'] = array(
    'bundle' => 'course',
    'default_value' => array(
      0 => array(
        'value' => 'show_transport_request',
      ),
      1 => array(
        'value' => 'show_free_course_request',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 46,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_practical_info_buttons',
    'label' => 'Request buttons',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 33,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Request buttons');

  return $field_instances;
}
