/* $Header: /home/agruen/git/patch-h/cvsroot/patch/version.c,v 1.1 1992/07/06 23:34:46 djm Exp $
 *
 * $Log: version.c,v $
 * Revision 1.1  1992/07/06 23:34:46  djm
 * Initial revision
 *
 * Revision 1.1  1992/07/06 23:34:46  djm
 * Initial revision
 *
 * Revision 2.0  86/09/17  15:40:11  lwall
 * Baseline for netwide release.
 * 
 */

#include "EXTERN.h"
#include "common.h"
#include "util.h"
#include "INTERN.h"
#include "patchlevel.h"
#include "version.h"

void my_exit();

/* Print out the version number and die. */

void
version()
{
    fprintf(stderr, "Patch version 2.0, patch level %s\n", PATCHLEVEL);
    my_exit(0);
}
