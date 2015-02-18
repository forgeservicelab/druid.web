<?php
/**
 * @file
 * forge_web_first_login.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function forge_web_first_login_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'467\',
      \'uid\' => \'1\',
      \'title\' => \'Welcome to FORGE\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'90485d6b-371b-4076-af9b-35d4c8ec0843\',
      \'nid\' => \'467\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1424173723\',
      \'changed\' => \'1424254506\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'fe29831b-f0e0-4ed4-ab91-8f7f7ad0729e\',
      \'revision_timestamp\' => \'1424254506\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "<p>Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Nam fermentum, nulla luctus pharetra vulputate, felis tellus mollis orci, sed rhoncus sapien nunc eget odio.</p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<p><a href=\\"dashboard/define\\"><img alt=\\"\\" src=\\"/sites/all/themes/forgeweb/images/dashboard.png\\" style=\\"height:128px; width:766px\\" /></a></p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p>Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Nam fermentum, nulla luctus pharetra vulputate, felis tellus mollis orci, sed rhoncus sapien nunc eget odio.</p>\\n\\n<p>&nbsp;</p>\\n\\n<p><a href=\\"dashboard/define\\"><img alt=\\"\\" src=\\"/sites/all/themes/forgeweb/images/dashboard.png\\" style=\\"height:128px; width:766px\\" /></a></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
        \'fi\' => array(
          array(
            \'value\' => "<p>Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Nam fermentum, nulla luctus pharetra vulputate, felis tellus mollis orci, sed rhoncus sapien nunc eget odio.</p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<p><a href=\\"dashboard/define\\"><img alt=\\"\\" src=\\"/sites/all/themes/forgeweb/images/dashboard.png\\" style=\\"height:128px; width:766px\\" /></a></p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p>Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Nam fermentum, nulla luctus pharetra vulputate, felis tellus mollis orci, sed rhoncus sapien nunc eget odio.</p>\\n\\n<p>&nbsp;</p>\\n\\n<p><a href=\\"dashboard/define\\"><img alt=\\"\\" src=\\"/sites/all/themes/forgeweb/images/dashboard.png\\" style=\\"height:128px; width:766px\\" /></a></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Welcome to FORGE\',
            \'format\' => NULL,
            \'safe_value\' => \'Welcome to FORGE\',
          ),
        ),
        \'fi\' => array(
          array(
            \'value\' => \'Welcome to FORGE\',
            \'format\' => NULL,
            \'safe_value\' => \'Welcome to FORGE\',
          ),
        ),
      ),
      \'field_page_attachment\' => array(),
      \'field_liftup_location\' => array(),
      \'field_page_liftup_image\' => array(),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'467\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1424173723\',
              \'changed\' => \'1424174124\',
            ),
            \'fi\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'467\',
              \'language\' => \'fi\',
              \'source\' => \'en\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1424254129\',
              \'changed\' => \'1424254506\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424173723\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 0,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 0,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'path\' => array(
        \'pid\' => \'800\',
        \'source\' => \'node/467\',
        \'alias\' => \'welcome-to-forge\',
        \'language\' => \'fi\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
