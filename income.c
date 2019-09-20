/****************************************************************************
 * APLICATION: 	ex0402
 * MODULE: 		area.c
 * PURPOSE:		finding the area of the triangle
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
	double y, x;
	double p, r, n;

	printf 	("---------------------------------------------------------\n");
	printf 	("EXERCISE #0402\n");
	printf 	("---------------------------------------------------------\n");
	printf	("princlpal. interest rate, time period : 	");
	fflush 	(stdout);
	scanf	("%lf%lf%lf", &p, &r, &n);

	r /=100.0;
	x = pow(1.0+r,n);
	y = p * x ;


	printf	("Amount of money is : 					%.2f\n", y);






return 0;
}
