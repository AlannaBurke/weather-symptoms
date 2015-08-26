<?php
/**
 * @file
 * symptom.features.inc
 */

/**
 * Implements hook_node_info().
 */
function symptom_node_info() {
  $items = array(
    'symptom' => array(
      'name' => t('Symptom'),
      'base' => 'node_content',
      'description' => t('List one symptom for a specific time and location. '),
      'has_title' => '1',
      'title_label' => t('Give this symptom a name (migraine, headache, stiff neck, etc)'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
