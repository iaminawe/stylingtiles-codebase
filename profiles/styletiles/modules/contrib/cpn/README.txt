Code-per-Node
-------------
This module allows arbitrary amounts of CSS or JS to be added to nodes and
blocks.


Features
------------------------------------------------------------------------------
The primary features include:

* CSS and JS may be added to any node, with an optional wrapper to make the code
  simpler.

* CSS and JS may be added to any block, with an optional wrapper to make the
  code simpler.

* Control over whether the CSS and JS output is aggregated with other files.

* Optional global CSS and JS that will be loaded on all non-admin pages.

* Syntax highlighting for both CSS and JS using the CodeMirror library.

* Optional support for Libraries API to control the location of the CodeMirror
  library.

* Optional token replacement for node and block CSS and JS, if the Token module
  is installed a popup token browser will be available.


Installation
------------------------------------------------------------------------------
The module should be installed and enabled in the usual way.

If needed, the CodeMirror library (v2.1 or a newer v2.x release) should be
downloaded from http://codemirror.net/, extracted and placed in:
  sites/all/libraries/codemirror


Configuration
------------------------------------------------------------------------------
 1. On the People Permissions administration page ("Administer >> People
    >> Permissions") you need to assign:

    - The "Edit CSS per node" permission to the roles that are allowed to add
      custom CSS for individual nodes.

    - The "Edit JS per node" permission to the roles that are allowed to add
      custom JavaScript for individual nodes.

    - The "Edit CSS per block" permission to the roles that are allowed to add
      custom CSS for individual blocks.

    - The "Edit JS per block" permission to the roles that are allowed to add
      custom JavaScript for individual blocks.

 2. The main admininistrative page controls the site-wide settings, including
    the location of the custom files, whether aggregation is enabled, customize
    the code wrappers, and global CSS & JS:
      admin/config/content/cpn

 3. Each content type can have the CSS & JS enabled on their respective edit
    page, along with custom code that will be loaded on each node page of that
    type.

 4. Each node add & edit page, belonging to the content type(s) enabled in step
    3 above, will have a new section called "CSS & JavaScript" containing the
    fields for entering the code.


SECURITY WARNING
------------------------------------------------------------------------------
BE VERY CAREFUL with the user roles that are granted access to insert custom CSS
and JS, THERE IS NO SECURITY FILTERING APPLIED to the code so only grant access
to it to people who are trusted.


Troubleshooting / Tips
------------------------------------------------------------------------------
* The CSS and JS will be automatically loaded on the appropriate pages, however
  nothing is added to make the CSS or JS only affect the elements of that node
  or block, so the code should be handled accordingly.
* The CSS and JS wrapper options can be used to simplify the code that is
  necessary for each node or block, e.g. the following would allow all JS code
  to be written to just use the simpler $() syntax for JS selection:
    (function ($) {
    [code]
    })(jQuery);
* The global CSS/JS options are meant for temporary adhoc changes, they are not
  a replacement for properly built code added to the site's theme.


Credits / Contact
------------------------------------------------------------------------------
Originally build by joelstein [1], Rob Loach [2] contributed on the D7 port.

Currently maintained by Damien McKenna [3].

Continued development is sponsored by Mediacurrent [4].

The best way to contact the authors is to submit an issue, be it a support
request, a feature request or a bug report, in the project issue queue:
  http://drupal.org/project/issues/metatag


References
------------------------------------------------------------------------------
1: http://drupal.org/user/61114
2: http://drupal.org/user/36598
3: http://drupal.org/user/108450
4: http://www.mediacurrent.com/
