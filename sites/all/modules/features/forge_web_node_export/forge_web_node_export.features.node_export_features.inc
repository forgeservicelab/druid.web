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
      \'vid\' => \'43\',
      \'uid\' => \'1\',
      \'title\' => \'Forge Plaza\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4c085a37-673f-45b8-9b22-6d6ca255b60c\',
      \'nid\' => \'43\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1397551114\',
      \'changed\' => \'1397553783\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'11a49841-08aa-4ce3-bc35-077a6ca16a6a\',
      \'revision_timestamp\' => \'1397553783\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Vestibulum quis felis tincidunt, tincidunt nibh varius, tristique ipsum. Nunc eu risus sed elit scelerisque molestie. Aliquam sit amet viverra mi. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Vestibulum scelerisque metus a sem ultrices ultricies. Integer ut imperdiet orci. Mauris posuere dictum orci sit amet porta. Nullam semper eget metus ut vestibulum. Curabitur lobortis id sapien molestie ullamcorper. Vestibulum congue, orci non pharetra blandit, libero dolor dictum turpis, id suscipit leo nisl non purus.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Vestibulum quis felis tincidunt, tincidunt nibh varius, tristique ipsum. Nunc eu risus sed elit scelerisque molestie. Aliquam sit amet viverra mi. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Vestibulum scelerisque metus a sem ultrices ultricies. Integer ut imperdiet orci. Mauris posuere dictum orci sit amet porta. Nullam semper eget metus ut vestibulum. Curabitur lobortis id sapien molestie ullamcorper. Vestibulum congue, orci non pharetra blandit, libero dolor dictum turpis, id suscipit leo nisl non purus.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Forge Plaza\',
            \'format\' => NULL,
            \'safe_value\' => \'Forge Plaza\',
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
          \'original\' => \'und\',
          \'data\' => array(
            \'und\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'43\',
              \'language\' => \'und\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1397551114\',
              \'changed\' => \'1397553783\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1397551114\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 0,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 0,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'55\',
        \'source\' => \'node/43\',
        \'alias\' => \'plaza\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Forge Plaza\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'0\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'44\',
      \'uid\' => \'1\',
      \'title\' => \'FORGE Service Lab\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'14c9ed42-4ad4-4880-a3fe-c231e10670db\',
      \'nid\' => \'44\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1397551114\',
      \'changed\' => \'1397552443\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'5155b18c-e2ed-4b34-8cd9-ddc6ab871368\',
      \'revision_timestamp\' => \'1397552443\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "<p>FORGE Service Lab is a place for creating digital services. It is intended to accelerate the digitalization of services in Finland.</p>\\r\\n\\r\\n<p>FORGE supports the learning journey from designing and developing to implementing experimenting services by enabling co-working and giving support with the help of world-class tools.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>FORGE Service Lab is a place for creating digital services. It is intended to accelerate the digitalization of services in Finland.</p>\\n<p>FORGE supports the learning journey from designing and developing to implementing experimenting services by enabling co-working and giving support with the help of world-class tools.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
        \'fi\' => array(
          array(
            \'value\' => "<p>Palvelupaja FORGE on digitaalisten palveluiden kehitysympäristö. FORGE luo puitteet niin kaupallisten digitaalisten palveluiden suunnitteluun ja luomiseen kuin yhteiskunnallisten palveluiden digitalisoimiseen.</p>\\r\\n\\r\\n<p>FORGE yhdistää oikeat ihmiset, avaa yhteistyömahdollisuudet, kannustaa ja sitouttaa. FORGE tarjoaa ohjausta, tukea ja oikeat työkalut. Palvelupaja FORGE haluaa olla mukana opintomatkalla ja auttaa osallistujia luomaan maailmanluokan digitaalisia palveluita.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Palvelupaja FORGE on digitaalisten palveluiden kehitysympäristö. FORGE luo puitteet niin kaupallisten digitaalisten palveluiden suunnitteluun ja luomiseen kuin yhteiskunnallisten palveluiden digitalisoimiseen.</p>\\n<p>FORGE yhdistää oikeat ihmiset, avaa yhteistyömahdollisuudet, kannustaa ja sitouttaa. FORGE tarjoaa ohjausta, tukea ja oikeat työkalut. Palvelupaja FORGE haluaa olla mukana opintomatkalla ja auttaa osallistujia luomaan maailmanluokan digitaalisia palveluita.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'en\' => array(
          array(
            \'value\' => \'FORGE Service Lab\',
            \'format\' => NULL,
            \'safe_value\' => \'FORGE Service Lab\',
          ),
        ),
        \'fi\' => array(
          array(
            \'value\' => \'Palvelupaja FORGE\',
            \'format\' => NULL,
            \'safe_value\' => \'Palvelupaja FORGE\',
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
              \'entity_id\' => \'44\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1397551114\',
              \'changed\' => \'1397552443\',
            ),
            \'fi\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'44\',
              \'language\' => \'fi\',
              \'source\' => \'en\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1397551590\',
              \'changed\' => \'1397551602\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1397551114\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 0,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 0,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'56\',
        \'source\' => \'node/44\',
        \'alias\' => \'forge-service-lab\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'45\',
      \'uid\' => \'1\',
      \'title\' => \' Terms and Conditions\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f7a718d6-c5f6-4861-b485-d908bb5d5147\',
      \'nid\' => \'45\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1397551114\',
      \'changed\' => \'1397551354\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'695e050d-da00-4b7c-bc94-893530e515e6\',
      \'revision_timestamp\' => \'1397551354\',
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
              \'entity_id\' => \'45\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1397551114\',
              \'changed\' => \'1397551354\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1397551114\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 0,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 0,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'57\',
        \'source\' => \'node/45\',
        \'alias\' => \'terms-and-conditions\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'46\',
      \'uid\' => \'1\',
      \'title\' => \'Contact us\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'51b238e2-dec5-426a-a980-5d94b36c8d9a\',
      \'nid\' => \'46\',
      \'type\' => \'forge_webform\',
      \'language\' => \'en\',
      \'created\' => \'1397551114\',
      \'changed\' => \'1397551286\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'fab349c1-8bbd-473c-8d6b-4818a548230a\',
      \'revision_timestamp\' => \'1397551286\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "<p>Aenean augue diam, imperdiet ut purus et, tincidunt bibendum ipsum. Proin at dolor sit amet risus ornare tempor. In eu ligula sem. Suspendisse non magna sit amet turpis hendrerit laoreet at quis magna. Curabitur dictum luctus massa nec fringilla. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Nulla tristique ut lacus ac lacinia.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Aenean augue diam, imperdiet ut purus et, tincidunt bibendum ipsum. Proin at dolor sit amet risus ornare tempor. In eu ligula sem. Suspendisse non magna sit amet turpis hendrerit laoreet at quis magna. Curabitur dictum luctus massa nec fringilla. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Nulla tristique ut lacus ac lacinia.</p>\\n",
            \'safe_summary\' => \'\',
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
          \'original\' => NULL,
          \'data\' => array(),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1397551114\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 0,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 0,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'58\',
        \'source\' => \'node/46\',
        \'alias\' => \'contact-us\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
