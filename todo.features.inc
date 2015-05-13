<?php
/**
 * @file
 * todo.features.inc
 */

/**
 * Implements hook_node_info().
 */
function todo_node_info() {
  $items = array(
    'task' => array(
      'name' => t('Task'),
      'base' => 'node_content',
      'description' => t('A task to add to a list of things to do.'),
      'has_title' => '1',
      'title_label' => t('Task Name'),
      'help' => t('Enter the name of the task to be completed.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
