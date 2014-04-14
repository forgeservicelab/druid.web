<?php
/**
 * @file
 * forge_web_node_export.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function forge_web_node_export_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'1\',
      \'uid\' => \'1\',
      \'title\' => \'Plaza\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4c085a37-673f-45b8-9b22-6d6ca255b60c\',
      \'nid\' => \'1\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1397200863\',
      \'changed\' => \'1397200863\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'11a49841-08aa-4ce3-bc35-077a6ca16a6a\',
      \'revision_timestamp\' => \'1397200863\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "<p>FORGE Plaza frontpage</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>FORGE Plaza frontpage</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Plaza\',
            \'format\' => NULL,
            \'safe_value\' => \'Plaza\',
          ),
        ),
      ),
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
              \'entity_id\' => \'1\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1396590668\',
              \'changed\' => \'1397200863\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1397200863\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 1,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 1,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'1\',
        \'source\' => \'node/1\',
        \'alias\' => \'content/plaza\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'12\',
      \'uid\' => \'1\',
      \'title\' => \'Monocle ipsum dolor sit amet destination.\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'14c9ed42-4ad4-4880-a3fe-c231e10670db\',
      \'nid\' => \'12\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1397445986\',
      \'changed\' => \'1397445986\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'5155b18c-e2ed-4b34-8cd9-ddc6ab871368\',
      \'revision_timestamp\' => \'1397445986\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "<p>In eget urna massa. Vestibulum congue, felis id sagittis volutpat, eros urna tincidunt urna, eu molestie eros leo ut quam. Nulla ultricies aliquet ipsum vitae faucibus. Fusce et pharetra ante. Fusce non lobortis lorem, sit amet vehicula purus.</p>\\r\\n\\r\\n<p>Ut accumsan mattis risus, et volutpat magna dapibus eget. Mauris sit amet pharetra elit, a adipiscing nisl. Mauris mauris purus, adipiscing ut auctor at, semper nec est. Sed purus sem, tempus sed dolor eget, imperdiet mattis quam. Nulla non libero vel est tempor sodales.</p>\\r\\n\\r\\n<p><strong>Aliquam tristique porttitor augue non sagittis. Donec pellentesque bibendum enim, a molestie est ultricies nec. </strong></p>\\r\\n\\r\\n<p><strong>Interdum et malesuada fames ac ante ipsum primis in faucibus. Nam non mi euismod, pharetra ante in, molestie nisl. Nullam auctor at orci non scelerisque.&nbsp;</strong></p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>In eget urna massa. Vestibulum congue, felis id sagittis volutpat, eros urna tincidunt urna, eu molestie eros leo ut quam. Nulla ultricies aliquet ipsum vitae faucibus. Fusce et pharetra ante. Fusce non lobortis lorem, sit amet vehicula purus.</p>\\n<p>Ut accumsan mattis risus, et volutpat magna dapibus eget. Mauris sit amet pharetra elit, a adipiscing nisl. Mauris mauris purus, adipiscing ut auctor at, semper nec est. Sed purus sem, tempus sed dolor eget, imperdiet mattis quam. Nulla non libero vel est tempor sodales.</p>\\n<p><strong>Aliquam tristique porttitor augue non sagittis. Donec pellentesque bibendum enim, a molestie est ultricies nec. </strong></p>\\n<p><strong>Interdum et malesuada fames ac ante ipsum primis in faucibus. Nam non mi euismod, pharetra ante in, molestie nisl. Nullam auctor at orci non scelerisque. </strong></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Monocle ipsum dolor sit amet destination.\',
            \'format\' => NULL,
            \'safe_value\' => \'Monocle ipsum dolor sit amet destination.\',
          ),
        ),
      ),
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
              \'entity_id\' => \'12\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1396362825\',
              \'changed\' => \'1397445986\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1397445986\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 1,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 1,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'12\',
        \'source\' => \'node/12\',
        \'alias\' => \'content/monocle-ipsum-dolor-sit-amet-destination\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'13\',
      \'uid\' => \'1\',
      \'title\' => \' Terms and Conditions\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f7a718d6-c5f6-4861-b485-d908bb5d5147\',
      \'nid\' => \'13\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1397445986\',
      \'changed\' => \'1397445986\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'695e050d-da00-4b7c-bc94-893530e515e6\',
      \'revision_timestamp\' => \'1397445986\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_page_title\' => array(
        \'en\' => array(
          array(
            \'value\' => \' Terms and Conditions\',
            \'format\' => NULL,
            \'safe_value\' => \' Terms and Conditions\',
          ),
        ),
      ),
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
              \'entity_id\' => \'13\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1396972033\',
              \'changed\' => \'1397445986\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1397445986\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 1,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 1,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'13\',
        \'source\' => \'node/13\',
        \'alias\' => \'content/terms-and-conditions\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'14\',
      \'uid\' => \'1\',
      \'title\' => \'Contact us!\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'51b238e2-dec5-426a-a980-5d94b36c8d9a\',
      \'nid\' => \'14\',
      \'type\' => \'forge_webform\',
      \'language\' => \'en\',
      \'created\' => \'1397445986\',
      \'changed\' => \'1397445986\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'fab349c1-8bbd-473c-8d6b-4818a548230a\',
      \'revision_timestamp\' => \'1397445986\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
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
          \'original\' => NULL,
          \'data\' => array(),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1397445986\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 1,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 1,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'14\',
        \'source\' => \'node/14\',
        \'alias\' => \'content/contact-us\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
