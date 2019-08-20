CONTENTS OF THIS FILE
---------------------

 * Introduction
 * Requirements
 * Installation
 * Configuration

INTRODUCTION
------------

Simple Elasticsearch module indexes content to Elasticsearch server and outputs
the data with Searchkit.co (http://searchkit.co/).
The module is integrated with core Search module so all of the configuration is
done on admin/config/search/settings page.

Minimally you need to define Elasticsearch index, document type, url and what
Drupal content types you want to index. You can also define every field
separately for every content type if you want.

REQUIREMENTS
------------

This module requires the following enabled:

 * Search

This module optionally needs:
 * Elasticsearch-PHP (https://github.com/elastic/elasticsearch-php)
   This is actually strongly recommended as the the basic CURL that the module
   is using is at least 30% slower and can fail on some queries.
   Elasticsearch-PHP is the official PHP library for Elasticsearch.

INSTALLATION
------------

 * Install as you would normally install a contributed Drupal module. Visit:
   https://drupal.org/documentation/install/modules-themes/modules-7
   for further information.

 * To get most out of this module, install Elasticsearch-PHP library.
   The recommended method to install Elasticsearch-PHP is through Composer.
   1. In your console go to sites/all/libraries
   2. Create file at sites/all/libraries/composer.json with contents:
      {
          "require": {
              "elasticsearch/elasticsearch": "~5.0"
          }
      }
   3. Download and install Composer:
      curl -s http://getcomposer.org/installer | php
   4. Install your dependencies:
      php composer.phar install
   5. Check on admin/reports/status that the library is installed correctly.
      It should say "Elasticsearch-PHP version" and next to it the version
      installed.
