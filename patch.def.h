#define ANYSIZE_PATCH 1
#define XRESOURCES_PATCH 1

/* This patch adds the ability to reload the Xresources config when a SIGUSR1 signal is received
 * e.g.: killall -USR1 st
 * Depends on the XRESOURCES_PATCH.
 */
#define XRESOURCES_RELOAD_PATCH 1
