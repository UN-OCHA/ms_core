<?php
/**
 * @file
 * ms_core.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ms_core_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_entity_types';
  $strongarm->value = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
    'user' => 0,
  );
  $export['entity_translation_entity_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_taxonomy';
  $strongarm->value = array(
    'ms_country' => TRUE,
    'ms_themes' => TRUE,
    'ms_disaster' => TRUE,
    'ms_local_group' => TRUE,
    'ms_organization' => TRUE,
    'ms_location' => TRUE,
    'reg_population_type' => TRUE,
  );
  $export['entity_translation_taxonomy'] = $strongarm;

  return $export;
}
