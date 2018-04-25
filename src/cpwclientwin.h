#ifndef __CPWCLIENTWIN_H
#define __CPWCLIENTWIN_H

#include <gtk/gtk.h>
#include "cpwclient.h"


#define CPW_CLIENT_WINDOW_TYPE (cpw_client_window_get_type ())
G_DECLARE_FINAL_TYPE (CpwClientWindow, cpw_client_window, CPW, CLIENT_WINDOW, GtkApplicationWindow)


CpwClientWindow       *cpw_client_window_new          (CpwClient *app);
void                    cpw_client_window_open         (CpwClientWindow *win,
                                                         GFile            *file);


#endif /* __CPWCLIENTWIN_H */
