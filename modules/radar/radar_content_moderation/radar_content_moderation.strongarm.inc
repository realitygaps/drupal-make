<?php
/**
 * @file
 * radar_content_moderation.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function radar_content_moderation_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flag_abuse_flags';
  $strongarm->value = array(
    'inappropriate_node' => 'inappropriate_node',
    'inappropriate_comment' => 'inappropriate_comment',
    'radar_follow_user' => 0,
    'radar_follow_term' => 0,
    'radar_follow_group' => 0,
    'radar_follow_node' => 0,
    'bookmarks' => 0,
    'abuse_user' => 0,
  );
  $export['flag_abuse_flags'] = $strongarm;

  return $export;
}
