#if EXTERNALPIPE_PATCH
#include "externalpipe.c"
#endif
#if SCROLLBACK_PATCH || SCROLLBACK_MOUSE_PATCH || SCROLLBACK_MOUSE_ALTSCREEN_PATCH
#include "scrollback.c"
#endif
#if UNIVERSCROLL_PATCH || SCROLLBACK_MOUSE_ALTSCREEN_PATCH
#include "universcroll.c"
#endif
