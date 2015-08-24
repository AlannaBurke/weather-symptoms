<?php
/**
 * @file
 * symptom.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function symptom_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-symptom-field_helped_by'
  $field_instances['node-symptom-field_helped_by'] = array(
    'bundle' => 'symptom',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What, if anything, helped with this symptom? You can come back and edit this if needed. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_helped_by',
    'label' => 'Helped by',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-symptom-field_location_of_symptom'
  $field_instances['node-symptom-field_location_of_symptom'] = array(
    'bundle' => 'symptom',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Where the symptom is on your body (front of head, back of neck, etc).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location_of_symptom',
    'label' => 'Location of Symptom',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-symptom-field_severity'
  $field_instances['node-symptom-field_severity'] = array(
    'bundle' => 'symptom',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'The severity of this symptom on a scale of 1 to 10.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_severity',
    'label' => 'Severity',
    'required' => 0,
    'settings' => array(
      'max' => 10,
      'min' => 1,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-symptom-field_time'
  $field_instances['node-symptom-field_time'] = array(
    'bundle' => 'symptom',
    'deleted' => 0,
    'description' => 'The time of this symptom - it can be one timestamp, or a range of when it started and ended. If you enter a range, we\'ll use all of the relevant weather data in that range to find a pattern. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_time',
    'label' => 'Time',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 1,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+0',
      ),
      'type' => 'date_select',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Helped by');
  t('Location of Symptom');
  t('Severity');
  t('The severity of this symptom on a scale of 1 to 10.');
  t('The time of this symptom - it can be one timestamp, or a range of when it started and ended. If you enter a range, we\'ll use all of the relevant weather data in that range to find a pattern. ');
  t('Time');
  t('What, if anything, helped with this symptom? You can come back and edit this if needed. ');
  t('Where the symptom is on your body (front of head, back of neck, etc).');

  return $field_instances;
}
