/****************************************************************************
 * APLICATION: 	ex0403
 * MODULE: 		ex0403.c
 * PURPOSE:		finding the distance.(to demonstrate use of variables )
 * DATE:		28.09.2011
 * AUTHOR(S):	Kedar Kanel
 ****************************************************************************/
#include <stdio.h>
#include <math.h>
/****************************************************************************
 * MAIN FUNCTION
 *
 ***************************************************************************/

int main (void)
{
	double d;
	double x1, y1;
	double x2, y2;
	printf 	("---------------------------------------------------------\n");
	printf 	("EXERCISE #0403\n");
	printf 	("---------------------------------------------------------\n");
	printf 	("Enter coordinates of the first point: ");
	fflush 	(stdout);
	scanf	("%lf%lf", &x1, &y1);
	printf 	("Enter coordinates of the second point: ");
	fflush 	(stdout);
	scanf	("%lf%lf", &x2, &y2);

	x1 	-= x2;
	y1	-= y2;
	d	 = sqrt (x1*x1 + y1*y1);

	printf	("Distance is : 					%.3f\n", d);






return 0;
}
