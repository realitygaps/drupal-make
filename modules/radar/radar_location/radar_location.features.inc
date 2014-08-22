<?php
/**
 * @file
 * radar_location.features.inc
 */

/**
 * Implements hook_eck_bundle_info().
 */
function radar_location_eck_bundle_info() {
  $items = array(
    'location_location' => array(
      'machine_name' => 'location_location',
      'entity_type' => 'location',
      'name' => 'location',
      'label' => 'Location',
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function radar_location_eck_entity_type_info() {
  $items = array(
    'location' => array(
      'name' => 'location',
      'label' => 'Location',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
      ),
    ),
  );
  return $items;
}