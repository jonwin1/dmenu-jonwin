/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static const unsigned int alpha = 0xff;     /* Amount of opacity. 0xff is opaque             */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"FiraCode Nerd Font:size=12"
};

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                         fg         bg       */
	[SchemeNorm] =          { "#d8dee9", "#2e3440" },
	[SchemeSel] =           { "#eceff4", "#4c566a" },
	[SchemeSelHighlight] =  { "#88c0d0", "#4c566a" },
	[SchemeNormHighlight] = { "#81a1c1", "#2e3440" },
	[SchemeOut] =           { "#d8dee9", "#2e3440" },
};

static const unsigned int alphas[SchemeLast][2] = {
	/*                        fg      bg       */
	[SchemeNorm] =          { OPAQUE, alpha },
	[SchemeSel] =           { OPAQUE, alpha },
	[SchemeSelHighlight] =  { OPAQUE, alpha },
	[SchemeNormHighlight] = { OPAQUE, alpha },
	[SchemeOut] =           { OPAQUE, alpha },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
