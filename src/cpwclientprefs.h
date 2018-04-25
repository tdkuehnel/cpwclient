#ifndef __CPWCLIENTPREFS_H
#define __CPWCLIENTPREFS_H

#include <gtk/gtk.h>
#include "cpwclientwin.h"


#define CPW_CLIENT_PREFS_TYPE (cpw_client_prefs_get_type ())
G_DECLARE_FINAL_TYPE (CpwClientPrefs, cpw_client_prefs, CPW, CLIENT_PREFS, GtkDialog)


CpwClientPrefs        *cpw_client_prefs_new          (CpwClientWindow *win);


#endif /* __CPWCLIENTPREFS_H */
