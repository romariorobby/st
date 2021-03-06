#define ANYSIZE_PATCH 1
#define BOLD_NOT_BRIGHT_PATCH 1
#define EXTERNALPIPE_PATCH 1
#define EXTERNALPIPEIN_PATCH 1
#define FONT2_PATCH 1
#define SCROLLBACK_PATCH 1
#define SCROLLBACK_MOUSE_PATCH 1
#define SCROLLBACK_MOUSE_ALTSCREEN_PATCH 1
#define UNIVERSCROLL_PATCH 0
#define CLIPBOARD_PATCH 0
#define BOXDRAW_PATCH 1
#define LIGATURES_PATCH 1
#define BLINKING_CURSOR_PATCH 1
#define DYNAMIC_CURSOR_COLOR_PATCH 1
#define VERTCENTER_PATCH 1
#define NEWTERM_PATCH 1
#define CYCLEFONTS_PATCH 0

/*
 * Hide the X cursor whenever a key is pressed and show it back when the mouse is moved in
 * the terminal window.
 * Alternatively use : xbanish or unclutter
 */
#define HIDECURSOR_PATCH 0

#define XRESOURCES_PATCH 0
/* This patch adds the ability to reload the Xresources config when a SIGUSR1 signal is received
 * e.g.: killall -USR1 st
 * Depends on the XRESOURCES_PATCH.
 */
#define XRESOURCES_RELOAD_PATCH 0
