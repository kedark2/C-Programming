/****************************************************************************
 * APLICATION: 	ex0209
 * MODULE: 		pointer.c
 * PURPOSE:		To demonstrate use of variables and I/O library.
 * DATE:		14.09.2011
 * AUTHOR(S):	Kedar Kanel
 ****************************************************************************/
#include <stdio.h>
/****************************************************************************
 * MAIN FUNCTION
 *
 ***************************************************************************/
int main (void)

{
		unsigned int x;
		unsigned int *px;
		int y;

		x	= 10;
		px	= &x;
		y	= *px + 2;

		printf	("x	=	%d\n", x);
		printf 	("adr (x) = 0x%08X\n", &x);
		printf 	("px = 0x%08X\n", px);
		printf 	("*px = %d\n", *px);
		printf 	("y = %d\n", y);

		*px	=	20;
		y	= *px + 2;
		printf ("x = %d\n", x);
		printf ("y = %d\n", y);

return 0;
}
