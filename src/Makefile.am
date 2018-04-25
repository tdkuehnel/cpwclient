PKGCONFIG = $(shell which pkg-config)
GLIB_COMPILE_RESOURCES = $(shell $(PKGCONFIG) --variable=glib_compile_resources gio-2.0)
GLIB_COMPILE_SCHEMAS = $(shell $(PKGCONFIG) --variable=glib_compile_schemas gio-2.0)

bin_PROGRAMS = cpwclient

cpwclient_CFLAGS = $(GTK_CFLAGS)
cpwclient_LDADD = $(GTK_LIBS)
cpwclient_SOURCES = 				\
	cpwclientmain.c 					\
	cpwclient.c cpwclient.h 		\
	cpwclientwin.c cpwclientwin.h 	\
	cpwclientprefs.c cpwclientprefs.h 	\
	resources.c

BUILT_SOURCES = 				\
	resources.c 				\
	gschemas.compiled

resources.c: cpwclient.gresource.xml $(shell $(GLIB_COMPILE_RESOURCES) --sourcedir=$(srcdir) --generate-dependencies $(srcdir)/cpwclient.gresource.xml)
	$(AM_V_GEN) $(GLIB_COMPILE_RESOURCES) $(srcdir)/cpwclient.gresource.xml \
		--target=$@ --sourcedir=$(srcdir) --generate-source

#resources.c: exampleapp.gresource.xml 
#	$(AM_V_GEN) $(GLIB_COMPILE_RESOURCES) $(srcdir)/exampleapp.gresource.xml \
#		--target=$@ --sourcedir=$(srcdir) --generate-source

gsettings_SCHEMAS = 				\
	org.gtk.cpwclient.gschema.xml

@GSETTINGS_RULES@

gschemas.compiled: org.gtk.cpwclient.gschema.xml
	$(GLIB_COMPILE_SCHEMAS) .

EXTRA_DIST = 					\
	window.ui 				\
	app-menu.ui 				\
	prefs.ui 				\
	cpwclient.gresource.xml 		\
	org.gtk.cpwclient.gschema.xml

CLEANFILES = 					\
	gschemas.compiled

-include $(top_srcdir)/git.mk
