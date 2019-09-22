/****************************************************************************
 * APLICATION: 	ex0210
 * MODULE: 		accel.c
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
	double 		acc;				/* Acceleration of the system	[m/s2]	*/
	double 		g		= 9.8067;	/* Gravitational acceleration	[m/s2]	*/
	double 		mass	= 6.0;		/* 								[kg]	*/
	double		 mi		= 0.3;		/*  Kinetic friction coefficient[-]		*/
	double 		p		= 20.0;		/* Applied force				[N]		*/

	acc =(p - mi*mass*g)/mass;

	printf ("------------------------------------------------------\n");
	printf ("EXERCISE #0210\n");
	printf ("------------------------------------------------------\n");
	printf ("Mass of the body:					%7.1f\t[kg]\n",mass);
	printf ("Applied Force:						%7.1f\t[N]\n", p);
	printf ("Kinetic friction coefficient:		%7.1f\t[-]\n",mi);
	printf ("Acceleration of the system:		%7.1f\t[m/s2]\n",acc);


	return 0;
}

