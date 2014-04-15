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
      \'vid\' => \'13\',
      \'uid\' => \'1\',
      \'title\' => \'Plaza\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4c085a37-673f-45b8-9b22-6d6ca255b60c\',
      \'nid\' => \'13\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1396605145\',
      \'changed\' => \'1396605145\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'11a49841-08aa-4ce3-bc35-077a6ca16a6a\',
      \'revision_timestamp\' => \'1396605145\',
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
              \'entity_id\' => \'13\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1396590668\',
              \'changed\' => \'1396605145\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1396605145\',
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
        \'pid\' => \'16\',
        \'source\' => \'node/13\',
        \'alias\' => \'content/plaza\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'11\',
      \'uid\' => \'1\',
      \'title\' => \'Learn\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'177ca412-7a65-487e-a188-5b68666eb0b5\',
      \'nid\' => \'11\',
      \'type\' => \'tutorial\',
      \'language\' => \'en\',
      \'created\' => \'1396355296\',
      \'changed\' => \'1397203378\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'4ea9c5de-8612-4872-86f0-909e151ca7e0\',
      \'revision_timestamp\' => \'1397203378\',
      \'revision_uid\' => \'1\',
      \'field_attachments\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'5\',
            \'uid\' => \'1\',
            \'filename\' => \'_JR_7670.jpg\',
            \'uri\' => \'public://_JR_7670_4.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'78188\',
            \'status\' => \'1\',
            \'timestamp\' => \'1396355296\',
            \'uuid\' => \'5e58fd8c-f6d9-4ff1-848e-29a1fb405d4f\',
            \'rdf_mapping\' => array(),
            \'display\' => \'1\',
            \'description\' => \'\',
          ),
        ),
      ),
      \'field_free_text\' => array(
        \'en\' => array(
          array(
            \'value\' => "<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam accumsan ipsum et justo euismod consectetur. Ut fermentum tortor eros. Sed sit amet interdum purus. Cras pretium quam neque, id consectetur diam euismod eu. Mauris neque arcu, porttitor in eros ac, ornare vehicula elit. Quisque id pellentesque sapien. Integer tempus vehicula diam, id adipiscing urna iaculis vel. Proin sollicitudin dui feugiat dictum consequat. Pellentesque id placerat leo. Duis dignissim, nibh sit amet pharetra fermentum, lacus elit pharetra lacus, non suscipit magna urna vitae leo. Sed iaculis ultrices nisi et feugiat. Pellentesque egestas suscipit quam non egestas. Etiam consequat ante non velit tincidunt, sed volutpat urna porta. Curabitur aliquet accumsan sollicitudin.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam accumsan ipsum et justo euismod consectetur. Ut fermentum tortor eros. Sed sit amet interdum purus. Cras pretium quam neque, id consectetur diam euismod eu. Mauris neque arcu, porttitor in eros ac, ornare vehicula elit. Quisque id pellentesque sapien. Integer tempus vehicula diam, id adipiscing urna iaculis vel. Proin sollicitudin dui feugiat dictum consequat. Pellentesque id placerat leo. Duis dignissim, nibh sit amet pharetra fermentum, lacus elit pharetra lacus, non suscipit magna urna vitae leo. Sed iaculis ultrices nisi et feugiat. Pellentesque egestas suscipit quam non egestas. Etiam consequat ante non velit tincidunt, sed volutpat urna porta. Curabitur aliquet accumsan sollicitudin.</p>\\n",
          ),
        ),
      ),
      \'field_link_to_video\' => array(
        \'und\' => array(
          array(
            \'url\' => \'www.youtube.com\',
            \'title\' => \'Test link to video\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_method\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam accumsan ipsum et justo euismod consectetur. Ut fermentum tortor eros. Sed sit amet interdum purus. Cras pretium quam neque, id consectetur diam euismod eu. Mauris neque arcu, porttitor in eros \',
            \'format\' => NULL,
            \'safe_value\' => \'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam accumsan ipsum et justo euismod consectetur. Ut fermentum tortor eros. Sed sit amet interdum purus. Cras pretium quam neque, id consectetur diam euismod eu. Mauris neque arcu, porttitor in eros \',
          ),
        ),
      ),
      \'field_tools\' => array(
        \'und\' => array(
          array(
            \'url\' => \'www.timtools.com\',
            \'title\' => \'Testi linkki\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Learn\',
            \'format\' => NULL,
            \'safe_value\' => \'Learn\',
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
              \'entity_id\' => \'11\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1396355296\',
              \'changed\' => \'1397203378\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1396355296\',
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
        \'source\' => \'node/11\',
        \'alias\' => \'tutorial/learn\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Learn\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'menu-tutorial-menu\',
        \'weight\' => \'-47\',
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
      \'vid\' => \'10\',
      \'uid\' => \'1\',
      \'title\' => \'Explore\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'2edc45be-e2f0-4248-94bd-b8c18050ba2b\',
      \'nid\' => \'10\',
      \'type\' => \'tutorial\',
      \'language\' => \'en\',
      \'created\' => \'1396355263\',
      \'changed\' => \'1397203366\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'5121b02d-e90a-407e-902e-7685f210c438\',
      \'revision_timestamp\' => \'1397203366\',
      \'revision_uid\' => \'1\',
      \'field_attachments\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'4\',
            \'uid\' => \'1\',
            \'filename\' => \'_JR_7670.jpg\',
            \'uri\' => \'public://_JR_7670_3.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'78188\',
            \'status\' => \'1\',
            \'timestamp\' => \'1396355263\',
            \'uuid\' => \'a864ba9f-a6fe-4ca3-988b-7d714ee9fb04\',
            \'rdf_mapping\' => array(),
            \'display\' => \'1\',
            \'description\' => \'\',
          ),
        ),
      ),
      \'field_free_text\' => array(
        \'en\' => array(
          array(
            \'value\' => "<div>\\r\\n<h2>Scrum</h2>\\r\\n\\r\\n<div>Scrum is an agile approach for developing innovative products and services. With an agile approach, you begin by creating a product backlog a prioritized list of the features and other capabilities needed to develop a successful product. Guided by the product backlog, you always work on the most important or highest-priority items first. When you run out of resources (such as time), any work that didn’t get completed will be of lower priority than the completed work.&nbsp;</div>\\r\\n\\r\\n<h2>Backlog</h2>\\r\\n\\r\\n<div>In order to develop the right thing then the development team must understand business goals and customer goals. By using key examples when discucssing and communicating the business cases and use cases, the team is able to create an initial backlog.&nbsp;</div>\\r\\n\\r\\n<h2>Goal</h2>\\r\\n\\r\\n<div>The purpose of this phase is to gain enough understanding about the product to be produced so that reasonable amount user stories can be created and have them in priority order in the initial backlog.</div>\\r\\n\\r\\n<h2>Methods</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Workshops organized by the service design partner.</li>\\r\\n\\t<li>User story writing workshop organized by the product owner</li>\\r\\n</ul>\\r\\n\\r\\n<h2>Tools</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>FORGE Redmine project backlog</li>\\r\\n</ul>\\r\\n\\r\\n<h2>Checklist</h2>\\r\\n</div>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Project lifecycle model and cadence is agreed</li>\\r\\n\\t<li>Development team exists and has access to FORGE Redmine</li>\\r\\n\\t<li>Project and Product backlog exists in the FORGE Redmine</li>\\r\\n\\t<li>Product backlog items are ordered and sizes are estimated</li>\\r\\n\\t<li>Product backlog is reviewed against concept</li>\\r\\n\\t<li>Product owner accepts the backlog</li>\\r\\n</ul>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<div>\\n<h2>Scrum</h2>\\n<div>Scrum is an agile approach for developing innovative products and services. With an agile approach, you begin by creating a product backlog a prioritized list of the features and other capabilities needed to develop a successful product. Guided by the product backlog, you always work on the most important or highest-priority items first. When you run out of resources (such as time), any work that didn’t get completed will be of lower priority than the completed work. </div>\\n<h2>Backlog</h2>\\n<div>In order to develop the right thing then the development team must understand business goals and customer goals. By using key examples when discucssing and communicating the business cases and use cases, the team is able to create an initial backlog. </div>\\n<h2>Goal</h2>\\n<div>The purpose of this phase is to gain enough understanding about the product to be produced so that reasonable amount user stories can be created and have them in priority order in the initial backlog.</div>\\n<h2>Methods</h2>\\n<ul><li>Workshops organized by the service design partner.</li>\\n<li>User story writing workshop organized by the product owner</li>\\n</ul><h2>Tools</h2>\\n<ul><li>FORGE Redmine project backlog</li>\\n</ul><h2>Checklist</h2>\\n</div>\\n<ul><li>Project lifecycle model and cadence is agreed</li>\\n<li>Development team exists and has access to FORGE Redmine</li>\\n<li>Project and Product backlog exists in the FORGE Redmine</li>\\n<li>Product backlog items are ordered and sizes are estimated</li>\\n<li>Product backlog is reviewed against concept</li>\\n<li>Product owner accepts the backlog</li>\\n</ul>",
          ),
        ),
      ),
      \'field_link_to_video\' => array(
        \'und\' => array(
          array(
            \'url\' => \'www.youtube.com\',
            \'title\' => \'Test link to video\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_method\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Workshops organized by the service design partner. Initial backlog grooming organized by the product owner\',
            \'format\' => NULL,
            \'safe_value\' => \'Workshops organized by the service design partner. Initial backlog grooming organized by the product owner\',
          ),
        ),
      ),
      \'field_tools\' => array(
        \'und\' => array(
          array(
            \'url\' => \'https://support.forgeservicelab.fi/redmine/projects\',
            \'title\' => \'FORGE Redmine project backlog\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Explore\',
            \'format\' => NULL,
            \'safe_value\' => \'Explore\',
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
              \'entity_id\' => \'10\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1396355263\',
              \'changed\' => \'1397203366\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1396355263\',
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
        \'source\' => \'node/10\',
        \'alias\' => \'tutorial/explore\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Explore\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'menu-tutorial-menu\',
        \'weight\' => \'-48\',
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
      \'vid\' => \'1\',
      \'uid\' => \'1\',
      \'title\' => \'Monocle ipsum dolor sit amet destination.\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'14c9ed42-4ad4-4880-a3fe-c231e10670db\',
      \'nid\' => \'1\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1396353607\',
      \'changed\' => \'1396353607\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'5155b18c-e2ed-4b34-8cd9-ddc6ab871368\',
      \'revision_timestamp\' => \'1396353607\',
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
      \'field_page_title\' => array(),
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
              \'created\' => \'1395756425\',
              \'changed\' => \'1396353607\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1396353607\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 1,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 1,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'24\',
      \'uid\' => \'1\',
      \'title\' => \' Terms and Conditions\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f7a718d6-c5f6-4861-b485-d908bb5d5147\',
      \'nid\' => \'24\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1397111558\',
      \'changed\' => \'1397111558\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'695e050d-da00-4b7c-bc94-893530e515e6\',
      \'revision_timestamp\' => \'1397111558\',
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
              \'entity_id\' => \'24\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1396972033\',
              \'changed\' => \'1397111558\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1397111558\',
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
        \'pid\' => \'31\',
        \'source\' => \'node/24\',
        \'alias\' => \'content/terms-and-conditions\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'12\',
      \'uid\' => \'1\',
      \'title\' => \'Go live\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'3be81d0b-7658-417b-bdaf-6a8631de1206\',
      \'nid\' => \'12\',
      \'type\' => \'tutorial\',
      \'language\' => \'en\',
      \'created\' => \'1396355333\',
      \'changed\' => \'1397203403\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'6ef4f02b-97bd-4e6b-8692-5062e16d2eef\',
      \'revision_timestamp\' => \'1397203403\',
      \'revision_uid\' => \'1\',
      \'field_attachments\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'6\',
            \'uid\' => \'1\',
            \'filename\' => \'_JR_7670.jpg\',
            \'uri\' => \'public://_JR_7670_5.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'78188\',
            \'status\' => \'1\',
            \'timestamp\' => \'1396355333\',
            \'uuid\' => \'23892c24-8e82-4f15-988f-71a398f92bc3\',
            \'rdf_mapping\' => array(),
            \'display\' => \'1\',
            \'description\' => \'\',
          ),
        ),
      ),
      \'field_free_text\' => array(
        \'en\' => array(
          array(
            \'value\' => "<h2>Description</h2>\\r\\n\\r\\n<div>The team will develop a capability to measure if the service will meet customer value and quality expectations. The service concept can be deployed then when minimum releasable features (MFR) and measuring capability have been implemented.</div>\\r\\n\\r\\n<h2>Documentation</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Essential Scrum: Kenneth S. Rubin</li>\\r\\n</ul>\\r\\n\\r\\n<h2>Methods</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Scrum (Groomings, sprint plannings, sprint executions, sprint reviews and retrospectives)</li>\\r\\n</ul>\\r\\n\\r\\n<h2>Tools</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>FORGE Redmine project backlogs and sprint backlogs</li>\\r\\n\\t<li>FORGE OpenStack cloud development environment</li>\\r\\n\\t<li>FORGE Git version control system</li>\\r\\n</ul>\\r\\n\\r\\n<h2>Checklist</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Product backlog grooming is continuous</li>\\r\\n\\t<li>The measuring capability have been implemented</li>\\r\\n\\t<li>Business intelligence is established, has participated to grooming and has provided analytics user stories</li>\\r\\n\\t<li>Sprints are accepted and closed</li>\\r\\n\\t<li>The golive environment has been selected</li>\\r\\n\\t<li>Provisioning recipes for the analytics are developed and tested in the development environment</li>\\r\\n\\t<li>Provisioning recipes for the service and analytics are tested in the restricted golive environment</li>\\r\\n\\t<li>Golive environment is turned to permissive after the golive decision</li>\\r\\n</ul>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<h2>Description</h2>\\n<div>The team will develop a capability to measure if the service will meet customer value and quality expectations. The service concept can be deployed then when minimum releasable features (MFR) and measuring capability have been implemented.</div>\\n<h2>Documentation</h2>\\n<ul><li>Essential Scrum: Kenneth S. Rubin</li>\\n</ul><h2>Methods</h2>\\n<ul><li>Scrum (Groomings, sprint plannings, sprint executions, sprint reviews and retrospectives)</li>\\n</ul><h2>Tools</h2>\\n<ul><li>FORGE Redmine project backlogs and sprint backlogs</li>\\n<li>FORGE OpenStack cloud development environment</li>\\n<li>FORGE Git version control system</li>\\n</ul><h2>Checklist</h2>\\n<ul><li>Product backlog grooming is continuous</li>\\n<li>The measuring capability have been implemented</li>\\n<li>Business intelligence is established, has participated to grooming and has provided analytics user stories</li>\\n<li>Sprints are accepted and closed</li>\\n<li>The golive environment has been selected</li>\\n<li>Provisioning recipes for the analytics are developed and tested in the development environment</li>\\n<li>Provisioning recipes for the service and analytics are tested in the restricted golive environment</li>\\n<li>Golive environment is turned to permissive after the golive decision</li>\\n</ul>",
          ),
        ),
      ),
      \'field_link_to_video\' => array(
        \'und\' => array(
          array(
            \'url\' => \'www.youtube.com\',
            \'title\' => \'Test link to video\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_method\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam accumsan ipsum et justo euismod consectetur. Ut fermentum tortor eros. Sed sit amet interdum purus. Cras pretium quam neque, id consectetur diam euismod eu. Mauris neque arcu, porttitor in eros \',
            \'format\' => NULL,
            \'safe_value\' => \'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam accumsan ipsum et justo euismod consectetur. Ut fermentum tortor eros. Sed sit amet interdum purus. Cras pretium quam neque, id consectetur diam euismod eu. Mauris neque arcu, porttitor in eros \',
          ),
        ),
      ),
      \'field_tools\' => array(
        \'und\' => array(
          array(
            \'url\' => \'www.timtools.com\',
            \'title\' => \'Tools\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Go live\',
            \'format\' => NULL,
            \'safe_value\' => \'Go live\',
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
              \'created\' => \'1396355333\',
              \'changed\' => \'1397203403\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1396355333\',
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
        \'source\' => \'node/12\',
        \'alias\' => \'tutorial/go-live\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Go live\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'menu-tutorial-menu\',
        \'weight\' => \'-45\',
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
      \'vid\' => \'8\',
      \'uid\' => \'1\',
      \'title\' => \'Define\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'8cd08de3-38c9-4f6d-a5ef-b1653d23d86e\',
      \'nid\' => \'8\',
      \'type\' => \'tutorial\',
      \'language\' => \'en\',
      \'created\' => \'1396355175\',
      \'changed\' => \'1397203351\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ae8dd83e-956f-43a2-aa67-d1c997b78d51\',
      \'revision_timestamp\' => \'1397203351\',
      \'revision_uid\' => \'1\',
      \'field_attachments\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'2\',
            \'uid\' => \'1\',
            \'filename\' => \'_JR_7670.jpg\',
            \'uri\' => \'public://_JR_7670_1.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'78188\',
            \'status\' => \'1\',
            \'timestamp\' => \'1396355175\',
            \'uuid\' => \'d4257797-8740-4329-a64e-640d2beb11a3\',
            \'rdf_mapping\' => array(),
            \'display\' => \'1\',
            \'description\' => \'\',
          ),
        ),
      ),
      \'field_free_text\' => array(
        \'en\' => array(
          array(
            \'value\' => "<h2>Description</h2>\\r\\n\\r\\n<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam accumsan ipsum et justo euismod consectetur. Ut fermentum tortor eros. Sed sit amet interdum purus. Cras pretium quam neque, id consectetur diam euismod eu. Mauris neque arcu, porttitor in eros ac, ornare vehicula elit. Quisque id pellentesque sapien. Integer tempus vehicula diam, id adipiscing urna iaculis vel. Proin sollicitudin dui feugiat dictum consequat. Pellentesque id placerat leo. Duis dignissim, nibh sit amet pharetra fermentum, lacus elit pharetra lacus, non suscipit magna urna vitae leo. Sed iaculis ultrices nisi et feugiat. Pellentesque egestas suscipit quam non egestas. Etiam consequat ante non velit tincidunt, sed volutpat urna porta. Curabitur aliquet accumsan sollicitudin.</p>\\r\\n\\r\\n<h2>Forge Approach</h2>\\r\\n\\r\\n<p><strong><em><u>Placeholder for triangle picture</u></em></strong></p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Ecosystem development</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>PPP (Private-Public-Partnersips)</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Think Big &amp; Wide &amp; Global</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Open Source Innovation</li>\\r\\n</ul>\\r\\n\\r\\n<p>-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------</p>\\r\\n\\r\\n<h2>1. Purpose and Output</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Why this project?</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>What has changed after we have done this?</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>To Whom the service is for? (Working Hyphothesis)</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Value for the business and society?</li>\\r\\n</ul>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<h2>2. Business and Competition Knowledge</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Business field/society knowledge</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Data&amp;vision of the future society direction</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Growth/ Competitive advantage potential</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Wide landscape of the competition</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Position of the service in the competitive landscape</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Business case</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Global trends vs. Innovative vision</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Feasibility of: Legislation, Technical, Political</li>\\r\\n</ul>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<h2>3. Organizational and Societal Impacts</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Process Changes</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Integrating Silos - Mergers and birth of new teams</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Key Resources and Competences (during and after project work)</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Startegic and Operational Changes</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Elastic Enterprise Actions</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Change Management</li>\\r\\n</ul>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<h2>4. Goals and Metrics</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Growth vs. Saving Potential (finding seed of growth as well during concepting)</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>ROI and Payback time</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Numeric Goals (sales, reneview, profit, cost savings, loyalty, new customer acquisition)</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Other Goals (long term learning, social, societal, innovative forrunner organisation, industry indicators eg. digibarometer, job creation, sustainability)</li>\\r\\n</ul>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<h2>Description</h2>\\n<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam accumsan ipsum et justo euismod consectetur. Ut fermentum tortor eros. Sed sit amet interdum purus. Cras pretium quam neque, id consectetur diam euismod eu. Mauris neque arcu, porttitor in eros ac, ornare vehicula elit. Quisque id pellentesque sapien. Integer tempus vehicula diam, id adipiscing urna iaculis vel. Proin sollicitudin dui feugiat dictum consequat. Pellentesque id placerat leo. Duis dignissim, nibh sit amet pharetra fermentum, lacus elit pharetra lacus, non suscipit magna urna vitae leo. Sed iaculis ultrices nisi et feugiat. Pellentesque egestas suscipit quam non egestas. Etiam consequat ante non velit tincidunt, sed volutpat urna porta. Curabitur aliquet accumsan sollicitudin.</p>\\n<h2>Forge Approach</h2>\\n<p><strong><em><u>Placeholder for triangle picture</u></em></strong></p>\\n<p> </p>\\n<p> </p>\\n<ul><li>Ecosystem development</li>\\n</ul><ul><li>PPP (Private-Public-Partnersips)</li>\\n</ul><ul><li>Think Big &amp; Wide &amp; Global</li>\\n</ul><ul><li>Open Source Innovation</li>\\n</ul><p>-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------</p>\\n<h2>1. Purpose and Output</h2>\\n<ul><li>Why this project?</li>\\n</ul><ul><li>What has changed after we have done this?</li>\\n</ul><ul><li>To Whom the service is for? (Working Hyphothesis)</li>\\n</ul><ul><li>Value for the business and society?</li>\\n</ul><p> </p>\\n<h2>2. Business and Competition Knowledge</h2>\\n<ul><li>Business field/society knowledge</li>\\n</ul><ul><li>Data&amp;vision of the future society direction</li>\\n</ul><ul><li>Growth/ Competitive advantage potential</li>\\n</ul><ul><li>Wide landscape of the competition</li>\\n</ul><ul><li>Position of the service in the competitive landscape</li>\\n</ul><ul><li>Business case</li>\\n</ul><ul><li>Global trends vs. Innovative vision</li>\\n</ul><ul><li>Feasibility of: Legislation, Technical, Political</li>\\n</ul><p> </p>\\n<h2>3. Organizational and Societal Impacts</h2>\\n<ul><li>Process Changes</li>\\n</ul><ul><li>Integrating Silos - Mergers and birth of new teams</li>\\n</ul><ul><li>Key Resources and Competences (during and after project work)</li>\\n</ul><ul><li>Startegic and Operational Changes</li>\\n</ul><ul><li>Elastic Enterprise Actions</li>\\n</ul><ul><li>Change Management</li>\\n</ul><p> </p>\\n<h2>4. Goals and Metrics</h2>\\n<ul><li>Growth vs. Saving Potential (finding seed of growth as well during concepting)</li>\\n</ul><ul><li>ROI and Payback time</li>\\n</ul><ul><li>Numeric Goals (sales, reneview, profit, cost savings, loyalty, new customer acquisition)</li>\\n</ul><ul><li>Other Goals (long term learning, social, societal, innovative forrunner organisation, industry indicators eg. digibarometer, job creation, sustainability)</li>\\n</ul><p> </p>\\n<p> </p>\\n<p> </p>\\n",
          ),
        ),
      ),
      \'field_link_to_video\' => array(
        \'und\' => array(
          array(
            \'url\' => \'https://www.youtube.com/watch?v=QoAOzMTLP5s\',
            \'title\' => \'Business Canvas Model by Alexander Osterwalder\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_method\' => array(
        \'en\' => array(
          array(
            \'value\' => \'1) Business Model Canvas by Alexander Osterwalder 2) Pop-Up Business Unit 3) Innovation Tournament 4) Define Project Game\',
            \'format\' => NULL,
            \'safe_value\' => \'1) Business Model Canvas by Alexander Osterwalder 2) Pop-Up Business Unit 3) Innovation Tournament 4) Define Project Game\',
          ),
        ),
      ),
      \'field_tools\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.businessmodelgeneration.com/toolbox\',
            \'title\' => \'Strategyzer\',
            \'attributes\' => array(),
          ),
          array(
            \'url\' => \'http://www.businessmodelgeneration.com/toolbox/bmtbox\',
            \'title\' => \'BMTBox\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Define\',
            \'format\' => NULL,
            \'safe_value\' => \'Define\',
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
              \'entity_id\' => \'8\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1396355175\',
              \'changed\' => \'1397203351\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1396355175\',
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
        \'pid\' => \'10\',
        \'source\' => \'node/8\',
        \'alias\' => \'tutorial/define\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Define\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'menu-tutorial-menu\',
        \'weight\' => \'-50\',
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
      \'vid\' => \'9\',
      \'uid\' => \'1\',
      \'title\' => \'Measure\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'727edf28-e6ae-4daa-bd64-7c3aa6ca4136\',
      \'nid\' => \'9\',
      \'type\' => \'tutorial\',
      \'language\' => \'en\',
      \'created\' => \'1396355216\',
      \'changed\' => \'1397203390\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'caf4df1e-d47e-4e4a-aaac-c51c54088650\',
      \'revision_timestamp\' => \'1397203390\',
      \'revision_uid\' => \'1\',
      \'field_attachments\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'3\',
            \'uid\' => \'1\',
            \'filename\' => \'_JR_7670.jpg\',
            \'uri\' => \'public://_JR_7670_2.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'78188\',
            \'status\' => \'1\',
            \'timestamp\' => \'1396355216\',
            \'uuid\' => \'5b34ab51-e3df-40b0-ac55-1785b349d543\',
            \'rdf_mapping\' => array(),
            \'display\' => \'1\',
            \'description\' => \'\',
          ),
        ),
      ),
      \'field_free_text\' => array(
        \'en\' => array(
          array(
            \'value\' => "<h2>Description</h2>\\r\\n\\r\\n<div>The team will measure the service usage which will serve as an input to business intelligence. This way the team is able to justify and refine MFR which will enable the service optimization towards even more accurate business goals and customer goals.</div>\\r\\n\\r\\n<h2>Documentation</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Essential Scrum: Kenneth S. Rubin</li>\\r\\n</ul>\\r\\n\\r\\n<h2>Methods</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Business intelligence</li>\\r\\n\\t<li>Analytics</li>\\r\\n\\t<li>Grooming</li>\\r\\n</ul>\\r\\n\\r\\n<h2>Tools</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Analytics</li>\\r\\n\\t<li>FORGE Redmine product backlogs and sprint backlogs</li>\\r\\n</ul>\\r\\n\\r\\n<h2>Checklist</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Business intelligence is continous and transforms raw analytics data into meaningful and useful information</li>\\r\\n\\t<li>Information created by business intelligence is continuously being transformed to relevant product backlog items</li>\\r\\n\\t<li>Build phase is restarted or continued</li>\\r\\n</ul>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<h2>Description</h2>\\n<div>The team will measure the service usage which will serve as an input to business intelligence. This way the team is able to justify and refine MFR which will enable the service optimization towards even more accurate business goals and customer goals.</div>\\n<h2>Documentation</h2>\\n<ul><li>Essential Scrum: Kenneth S. Rubin</li>\\n</ul><h2>Methods</h2>\\n<ul><li>Business intelligence</li>\\n<li>Analytics</li>\\n<li>Grooming</li>\\n</ul><h2>Tools</h2>\\n<ul><li>Analytics</li>\\n<li>FORGE Redmine product backlogs and sprint backlogs</li>\\n</ul><h2>Checklist</h2>\\n<ul><li>Business intelligence is continous and transforms raw analytics data into meaningful and useful information</li>\\n<li>Information created by business intelligence is continuously being transformed to relevant product backlog items</li>\\n<li>Build phase is restarted or continued</li>\\n</ul>",
          ),
        ),
      ),
      \'field_link_to_video\' => array(
        \'und\' => array(
          array(
            \'url\' => \'www.youtube.com\',
            \'title\' => \'Test link to video\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_method\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam accumsan ipsum et justo euismod consectetur. Ut fermentum tortor eros. Sed sit amet interdum purus. Cras pretium quam neque, id consectetur diam euismod eu. Mauris neque arcu, porttitor in eros \',
            \'format\' => NULL,
            \'safe_value\' => \'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam accumsan ipsum et justo euismod consectetur. Ut fermentum tortor eros. Sed sit amet interdum purus. Cras pretium quam neque, id consectetur diam euismod eu. Mauris neque arcu, porttitor in eros \',
          ),
        ),
      ),
      \'field_tools\' => array(
        \'und\' => array(
          array(
            \'url\' => \'www.timtools.com\',
            \'title\' => \'Testi linkki\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Measure\',
            \'format\' => NULL,
            \'safe_value\' => \'Measure\',
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
              \'entity_id\' => \'9\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1396355216\',
              \'changed\' => \'1397203390\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1396355216\',
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
        \'pid\' => \'11\',
        \'source\' => \'node/9\',
        \'alias\' => \'tutorial/measure\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Measure\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'menu-tutorial-menu\',
        \'weight\' => \'-46\',
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
      \'vid\' => \'7\',
      \'uid\' => \'1\',
      \'title\' => \'Build\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'a0c107b6-ba01-47af-8fb8-87f4409b641b\',
      \'nid\' => \'7\',
      \'type\' => \'tutorial\',
      \'language\' => \'en\',
      \'created\' => \'1396355071\',
      \'changed\' => \'1397203339\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'d0f28c58-32e2-4187-8e09-032b7b85b07b\',
      \'revision_timestamp\' => \'1397203339\',
      \'revision_uid\' => \'1\',
      \'field_attachments\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'1\',
            \'uid\' => \'1\',
            \'filename\' => \'bootstrap_3_9 2.png\',
            \'uri\' => \'public://bootstrap_3_9 2.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'1720\',
            \'status\' => \'1\',
            \'timestamp\' => \'1396355071\',
            \'uuid\' => \'74cb0dbc-af33-4da5-886a-a9aa77918695\',
            \'rdf_mapping\' => array(),
            \'display\' => \'1\',
            \'description\' => \'\',
          ),
        ),
      ),
      \'field_free_text\' => array(
        \'en\' => array(
          array(
            \'value\' => "<h2>Sprint</h2>\\r\\n\\r\\n<div>In Scrum, the work itself is performed in short, timeboxed iterations (sprints) , which usually range from a week to a calendar month in length. During each iteration, a self-organizing, cross-functional team does all of the work— such as designing, building, and testing—required to produce completed, working features that could be put into production.&nbsp;</div>\\r\\n\\r\\n<p>The work completed in each sprint should create something of tangible value to the customer or user. Sprints are timeboxed so they always have a fixed start and end date, and generally they should all be of the same duration. A new sprint immediately follows the completion of the previous sprint.</p>\\r\\n\\r\\n<p>Typically the amount of work in the product backlog is much greater than can be completed by a team in one short-duration iteration. So, at the start of each iteration, the team plans which high-priority subset of the product backlog to create in the upcoming iteration.</p>\\r\\n\\r\\n<h2>Planning</h2>\\r\\n\\r\\n<p>A product backlog may represent many weeks or months of work, which is much more than can be completed in a single, short sprint. To determine the most important subset of product backlog items to build in the next sprint, the product owner, development team, and ScrumMaster perform sprint planning.&nbsp;During sprint planning, the product owner and development team agree on a sprint goal that defines what the upcoming sprint is supposed to achieve. Using this goal, the development team reviews the product backlog and determines the high-priority items that the team can realistically accomplish in the upcoming sprint. To acquire confidence in what it can get done, many development teams break down each targeted feature into a set of tasks. The collection of these tasks, along with their associated product backlog items, forms a second backlog called the sprint backlog.</p>\\r\\n\\r\\n<p>The approach for sprint planning follows following simple cycle. The team selects a most important item from the product backlog and takes it as part of the sprint backlog. Then the team breaks the item down into tasks, and determines if the selected item will reasonably fit within the sprint (in combination with other items targeted for the same sprint). If it does fit and there is more capacity to complete work then the cycle is repeated until the team is out of capacity to do any more work. The team will learn it\'s capacity after few sprints are completed.</p>\\r\\n\\r\\n<h2>Daily Scrum</h2>\\r\\n\\r\\n<p>Each day of the sprint, ideally at the same time, the development team members hold a timeboxed (15 minutes or less) daily scrum. &nbsp;A common approach to performing the daily scrum has the ScrumMaster facilitating and each team member taking turns answering three questions for the benefit of the other team members.&nbsp;By answering these questions, everyone understands the big picture of what is occurring, how they are progressing toward the sprint goal, any modifications they want to make to their plans for the upcoming day’s.</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>What did I accomplish since the last daily scrum?</li>\\r\\n\\t<li>What do I plan to work on by the next daily scrum?</li>\\r\\n\\t<li>What are the obstacles or impediments that are preventing me from making progress?&nbsp;</li>\\r\\n</ul>\\r\\n\\r\\n<h2>Inspect and adapt</h2>\\r\\n\\r\\n<p>At the end of the sprint there are two additional inspect-and-adapt activities: sprint review and sprint retrospective.&nbsp;The goal of the sprint review is to inspect and adapt the product that is being built. Critical to this activity is the conversation that takes place among its participants, which include the Scrum team, stakeholders, sponsors, customers, and interested members of other teams. The conversation is focused on reviewing the just-completed features in the context of the overall development effort. Everyone in attendance gets clear visibility into what is occurring and has an opportunity to help guide the forthcoming development to ensure that the most business-appropriate solution is created.</p>\\r\\n\\r\\n<p>The sprint retrospective frequently occurs after the sprint review and before the next sprint planning.&nbsp;Whereas the sprint review is a time to inspect and adapt the product, the sprint retrospective is an opportunity to inspect and adapt the process. During the sprint retrospective the development team, ScrumMaster, and product owner come together to discuss what is and is not working with Scrum and associated technical practices. The focus is on the continuous process improvement necessary to help a good Scrum team become great.</p>\\r\\n\\r\\n<h2>Product backlog grooming</h2>\\r\\n\\r\\n<p>The product backlog is a prioritized list of desired product functionality. It provides a centralized and shared understanding of what to build and the order in which to build it. It is a highly visible artifact at the heart of the Scrum framework that is accessible to all project participants.&nbsp;Most product backlog items (PBI) are features, items of functionality that will have tangible value to the user or customer. These are often written as user stories, can be estimated, prioritized and they are emergent.&nbsp;</p>\\r\\n\\r\\n<p>Grooming the product backlog is an ongoing collaborative effort led by the product owner and including significant participation from internal and external stakeholders as well as the ScrumMaster and development team.&nbsp;Grooming refers to a set of three principal activities: creating and refining (adding details to) PBIs, estimating PBIs, and prioritizing PBIs.</p>\\r\\n\\r\\n<h2>Goal</h2>\\r\\n\\r\\n<p>The purpose of this phase is to start and carry on the development activities using agile methods. The team can start the development even when the service concept is not fully specified. It is expected that the concept will develop further parallel and in close collaboration with development activities and the product backlog is therefore continuously groomed. The development activities can be adjusted in each sprint according to newly groomed product backlog. It\'s also important that the team will improve its operations and practises in applying agile methods in it\'s selected project life cycle model.</p>\\r\\n\\r\\n<h2>Method</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Scrum (Product backlog groomings, sprint plannings, sprint executions, sprint reviews and retrospectives)</li>\\r\\n</ul>\\r\\n\\r\\n<h2>Tools</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>FORGE Redmine product backlogs and sprint backlogs</li>\\r\\n\\t<li>FORGE OpenStack cloud development environment</li>\\r\\n\\t<li>FORGE Git version control system</li>\\r\\n</ul>\\r\\n\\r\\n<h2>Checklist</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Product backlog grooming is continuous</li>\\r\\n\\t<li>Each sprint has a goal defined (e.g. Architecture, Implementation, Testing, Security...)</li>\\r\\n\\t<li>Sprints are closed</li>\\r\\n\\t<li>The minimum releasable features (MFR) have been identified and implemented</li>\\r\\n\\t<li>Provisioning recipes for the service are developed and tested in the development environment</li>\\r\\n\\t<li>Provisioning recipes are maintained in git</li>\\r\\n\\t<li>The service(s) are tested in the development environment</li>\\r\\n\\t<li>The service description may exist on FORGE Plaza</li>\\r\\n</ul>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<h2>Sprint</h2>\\n<div>In Scrum, the work itself is performed in short, timeboxed iterations (sprints) , which usually range from a week to a calendar month in length. During each iteration, a self-organizing, cross-functional team does all of the work— such as designing, building, and testing—required to produce completed, working features that could be put into production. </div>\\n<p>The work completed in each sprint should create something of tangible value to the customer or user. Sprints are timeboxed so they always have a fixed start and end date, and generally they should all be of the same duration. A new sprint immediately follows the completion of the previous sprint.</p>\\n<p>Typically the amount of work in the product backlog is much greater than can be completed by a team in one short-duration iteration. So, at the start of each iteration, the team plans which high-priority subset of the product backlog to create in the upcoming iteration.</p>\\n<h2>Planning</h2>\\n<p>A product backlog may represent many weeks or months of work, which is much more than can be completed in a single, short sprint. To determine the most important subset of product backlog items to build in the next sprint, the product owner, development team, and ScrumMaster perform sprint planning. During sprint planning, the product owner and development team agree on a sprint goal that defines what the upcoming sprint is supposed to achieve. Using this goal, the development team reviews the product backlog and determines the high-priority items that the team can realistically accomplish in the upcoming sprint. To acquire confidence in what it can get done, many development teams break down each targeted feature into a set of tasks. The collection of these tasks, along with their associated product backlog items, forms a second backlog called the sprint backlog.</p>\\n<p>The approach for sprint planning follows following simple cycle. The team selects a most important item from the product backlog and takes it as part of the sprint backlog. Then the team breaks the item down into tasks, and determines if the selected item will reasonably fit within the sprint (in combination with other items targeted for the same sprint). If it does fit and there is more capacity to complete work then the cycle is repeated until the team is out of capacity to do any more work. The team will learn it\'s capacity after few sprints are completed.</p>\\n<h2>Daily Scrum</h2>\\n<p>Each day of the sprint, ideally at the same time, the development team members hold a timeboxed (15 minutes or less) daily scrum.  A common approach to performing the daily scrum has the ScrumMaster facilitating and each team member taking turns answering three questions for the benefit of the other team members. By answering these questions, everyone understands the big picture of what is occurring, how they are progressing toward the sprint goal, any modifications they want to make to their plans for the upcoming day’s.</p>\\n<ul><li>What did I accomplish since the last daily scrum?</li>\\n<li>What do I plan to work on by the next daily scrum?</li>\\n<li>What are the obstacles or impediments that are preventing me from making progress? </li>\\n</ul><h2>Inspect and adapt</h2>\\n<p>At the end of the sprint there are two additional inspect-and-adapt activities: sprint review and sprint retrospective. The goal of the sprint review is to inspect and adapt the product that is being built. Critical to this activity is the conversation that takes place among its participants, which include the Scrum team, stakeholders, sponsors, customers, and interested members of other teams. The conversation is focused on reviewing the just-completed features in the context of the overall development effort. Everyone in attendance gets clear visibility into what is occurring and has an opportunity to help guide the forthcoming development to ensure that the most business-appropriate solution is created.</p>\\n<p>The sprint retrospective frequently occurs after the sprint review and before the next sprint planning. Whereas the sprint review is a time to inspect and adapt the product, the sprint retrospective is an opportunity to inspect and adapt the process. During the sprint retrospective the development team, ScrumMaster, and product owner come together to discuss what is and is not working with Scrum and associated technical practices. The focus is on the continuous process improvement necessary to help a good Scrum team become great.</p>\\n<h2>Product backlog grooming</h2>\\n<p>The product backlog is a prioritized list of desired product functionality. It provides a centralized and shared understanding of what to build and the order in which to build it. It is a highly visible artifact at the heart of the Scrum framework that is accessible to all project participants. Most product backlog items (PBI) are features, items of functionality that will have tangible value to the user or customer. These are often written as user stories, can be estimated, prioritized and they are emergent. </p>\\n<p>Grooming the product backlog is an ongoing collaborative effort led by the product owner and including significant participation from internal and external stakeholders as well as the ScrumMaster and development team. Grooming refers to a set of three principal activities: creating and refining (adding details to) PBIs, estimating PBIs, and prioritizing PBIs.</p>\\n<h2>Goal</h2>\\n<p>The purpose of this phase is to start and carry on the development activities using agile methods. The team can start the development even when the service concept is not fully specified. It is expected that the concept will develop further parallel and in close collaboration with development activities and the product backlog is therefore continuously groomed. The development activities can be adjusted in each sprint according to newly groomed product backlog. It\'s also important that the team will improve its operations and practises in applying agile methods in it\'s selected project life cycle model.</p>\\n<h2>Method</h2>\\n<ul><li>Scrum (Product backlog groomings, sprint plannings, sprint executions, sprint reviews and retrospectives)</li>\\n</ul><h2>Tools</h2>\\n<ul><li>FORGE Redmine product backlogs and sprint backlogs</li>\\n<li>FORGE OpenStack cloud development environment</li>\\n<li>FORGE Git version control system</li>\\n</ul><h2>Checklist</h2>\\n<ul><li>Product backlog grooming is continuous</li>\\n<li>Each sprint has a goal defined (e.g. Architecture, Implementation, Testing, Security...)</li>\\n<li>Sprints are closed</li>\\n<li>The minimum releasable features (MFR) have been identified and implemented</li>\\n<li>Provisioning recipes for the service are developed and tested in the development environment</li>\\n<li>Provisioning recipes are maintained in git</li>\\n<li>The service(s) are tested in the development environment</li>\\n<li>The service description may exist on FORGE Plaza</li>\\n</ul>",
          ),
        ),
      ),
      \'field_link_to_video\' => array(
        \'und\' => array(
          array(
            \'url\' => \'www.youtube.com\',
            \'title\' => \'Lorem ipsum dolor\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_method\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Scrum (Groomings, sprint plannings, sprint executions, sprint reviews and retrospectives)\',
            \'format\' => NULL,
            \'safe_value\' => \'Scrum (Groomings, sprint plannings, sprint executions, sprint reviews and retrospectives)\',
          ),
        ),
      ),
      \'field_tools\' => array(
        \'und\' => array(
          array(
            \'url\' => \'https://support.forgeservicelab.fi/\',
            \'title\' => \'FORGE Redmine project backlogs and sprint backlogs\',
            \'attributes\' => array(),
          ),
          array(
            \'url\' => \'https://cloud.forgeservicelab.fi/\',
            \'title\' => \'FORGE OpenStack cloud development environment\',
            \'attributes\' => array(),
          ),
          array(
            \'url\' => \'https://git.forgeservicelab.fi/\',
            \'title\' => \'FORGE Git version control system\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Build\',
            \'format\' => NULL,
            \'safe_value\' => \'Build\',
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
              \'entity_id\' => \'7\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1396355071\',
              \'changed\' => \'1397203339\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1396355071\',
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
        \'pid\' => \'9\',
        \'source\' => \'node/7\',
        \'alias\' => \'tutorial/build\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Build\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'menu-tutorial-menu\',
        \'weight\' => \'-49\',
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
      \'vid\' => \'25\',
      \'uid\' => \'1\',
      \'title\' => \'Contact us!\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'51b238e2-dec5-426a-a980-5d94b36c8d9a\',
      \'nid\' => \'25\',
      \'type\' => \'forge_webform\',
      \'language\' => \'en\',
      \'created\' => \'1397111558\',
      \'changed\' => \'1397111558\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'fab349c1-8bbd-473c-8d6b-4818a548230a\',
      \'revision_timestamp\' => \'1397111558\',
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
      \'last_comment_timestamp\' => \'1397111558\',
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
        \'pid\' => \'32\',
        \'source\' => \'node/25\',
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
