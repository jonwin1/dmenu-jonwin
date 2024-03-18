/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static const unsigned int alpha = 0x80;     /* Amount of opacity. 0xff is opaque             */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Fira Code:size=12"
};

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                         fg         bg       */
	[SchemeNorm] =          { "#d4be98", "#1d2021" },
	[SchemeSel] =           { "#1d2021", "#d4be98" },
	[SchemeSelHighlight] =  { "#928374", "#d4be98" },
	[SchemeNormHighlight] = { "#928374", "#1d2021" },
	[SchemeOut] =           { "#1d2021", "#9dc2ba" },
};

static const unsigned int alphas[SchemeLast][2] = {
	/*                        fg      bg       */
	[SchemeNorm] =          { OPAQUE, alpha },
	[SchemeSel] =           { OPAQUE, OPAQUE},
	[SchemeSelHighlight] =  { OPAQUE, OPAQUE},
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
