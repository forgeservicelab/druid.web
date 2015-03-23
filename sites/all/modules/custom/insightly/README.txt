Module: Insightly
Author: Bela Patkai <https://www.drupal.org/user/299361>

Description
===========
The Insightly module is an API module providing access to the Insightly service https://www.insightly.com

Requirements
============
* Insightly PHP library: https://github.com/Insightly/php


Installation
============
* Download the Insightly PHP library from https://github.com/Insightly/php/archive/master.zip
* Expand the library contents into sites/all/libraries/insightly
* Download the Insightly module from drupal.org, install and enable it
* Add the API key to the module settings page at admin/config/system/insightly

Usage
=====
When the library and the module is installed and a valid API key is set correctly then you can write custom modules that
use the the DrupalInsightly class for accessing the API.

E.g. the following code snippet fetches the list of contacts from Insightly:

$i = new DrupalInsightly();
$contacts = $i->getContacts();
