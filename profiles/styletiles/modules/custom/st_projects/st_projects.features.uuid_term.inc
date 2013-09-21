<?php
/**
 * @file
 * st_projects.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function st_projects_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'sample',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1fd877c3-f635-4323-877b-81c5aa1ed22d',
    'vocabulary_machine_name' => 'tags',
    'url_alias' => array(
      0 => array(
        'alias' => 'project-tags/sample',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'test',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '298aafba-cec8-4549-8a32-7169e751e383',
    'vocabulary_machine_name' => 'tags',
    'url_alias' => array(
      0 => array(
        'alias' => 'tags/test',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'first',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2fce542c-2a5b-4a9f-b7e6-ef61d68dd9ed',
    'vocabulary_machine_name' => 'tags',
    'url_alias' => array(
      0 => array(
        'alias' => 'tags/first',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'demonstration',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '53d8d4d0-b85d-49b7-bdae-299c0bfcaf79',
    'vocabulary_machine_name' => 'tags',
    'url_alias' => array(
      0 => array(
        'alias' => 'project-tags/demonstration',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'styletiles',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5410ddac-6460-4d86-9f1a-eac7c584c0a5',
    'vocabulary_machine_name' => 'tags',
    'url_alias' => array(
      0 => array(
        'alias' => 'project-tags/styletiles',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'concept',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8c8412e5-9fb4-4ce0-a795-ce3585059df4',
    'vocabulary_machine_name' => 'tags',
    'url_alias' => array(
      0 => array(
        'alias' => 'tags/concept',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'pioneer',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ac3b4c44-4b69-4479-a3ff-31ef5810d6a2',
    'vocabulary_machine_name' => 'tags',
    'url_alias' => array(
      0 => array(
        'alias' => 'tags/pioneer',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
