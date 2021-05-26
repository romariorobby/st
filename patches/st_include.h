#if EXTERNALPIPE_PATCH
#include "externalpipe.h"
#endif
#if SCROLLBACK_PATCH || SCROLLBACK_MOUSE_PATCH || SCROLLBACK_MOUSE_ALTSCREEN_PATCH
#include "scrollback.h"
#endif
#if UNIVERSCROLL_PATCH || SCROLLBACK_MOUSE_ALTSCREEN_PATCH
#include "universcroll.h"
#endif
#if NEWTERM_PATCH
#include "newterm.h"
#endif
