# Microservices

Microservices is a suite of Drupal features (prefixed by ms_) which have been created in the context of the
Humanitarian Hub and can be reused by other entities to easily integrate taxonomies which are pulled and
synchronized from sites which belong to the Humanitarian Hub.

The following is a list of the Microservice modules (which are currently in use in the [Assessments Registry](https://assessments.hpc.tools) ):

 * [ms_core](https://github.com/un-ocha/ms_core): this module, required by other microservice modules
 * [ms_themes](https://github.com/un-ocha/ms_themes): fetches and synchronizes themes from humanitarianresponse.info in a local taxonomy
 * [ms_disasters](https://github.com/un-ocha/ms_disasters): fetches and synchronizes disasters from reliefweb.int in a local taxonomy
 * [ms_organizations](https://github.com/un-ocha/ms_organizations): fetches and synchronizes organizations from humanitarianresponse.info in a local taxonomy
 * [ms_locations](https://github.com/un-ocha/ms_locations): fetches and synchronizes locations from humanitarianresponse.info in a local taxonomy
 * [ms_countries](https://github.com/un-ocha/ms_countries): fetches and synchronizes countries from vocabulary.unocha.org in a local taxonomy
 * [ms_local_groups](https://github.com/un-ocha/ms_local_groups): fetches and synchronizes local clusters and working groups from humanitarianresponse.info in a local taxonomy

 ## ms_core

 This module provides:

  * Field base field_ms_hrinfo_id: used to store the humanitarianresponse.info ID when a local taxonomy term comes from humanitarianresponse.info
  * Field base field_ms_rw_id: used to store the Reliefweb ID when a local taxonomy term comes from Reliefweb
  * Field base name_field: title field used for taxonomies
  * Field base title_field: title field used for content types
  * Date form
  * Entity translation settings
