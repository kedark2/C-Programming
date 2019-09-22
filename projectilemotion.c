/****************************************************************************
 * APLICATION: 	projectile_kedar_kanel
 * MODULE: 		projectilemotion.c
 * PURPOSE:		To find the values of time and distance of projectile motion.
 * DATE:		13.10.2011
 * AUTHOR(S):	Kedar Kanel
 ****************************************************************************/
#include <stdio.h>
#include <math.h>

/****************************************************************************
 * MAIN FUNCTION
 *
 ***************************************************************************/

int main(void)
{
	/*#define M_PI;*/
	const float PI = 3.14;
	const float g = 9.98067;
	float vo;		/*****************initial velocity		:				 [m/s]		*/
	float theta;	/*****************angle of projection	:				 [degree]	*/
	float t;		/*****************change in time		:				 [s]		*/
	float x;		/*****************distance in the horizontal direction	 [m]		*/
	float y;		/*****************distance  in vertical direction		 [m]		*/
	float d;		/*****************total distance covered 				 [m]		*/
	float radian;	/*****************angle in radian						 			*/
	float T;		/*****************Total time of the projection			 [s]		*/

	printf 	("-----------------------------------------------------------------------------------\n");
	printf 	("                                  Projectile Motion\n");
	printf 	("-----------------------------------------------------------------------------------\n");

	printf("enter the value of initial velocity 		: ");
	fflush(stdout);
	scanf("%f", &vo);

	printf ("enter the angle of projection (in degree) 	: ");
	fflush(stdout);
	scanf("%f", &theta);

	printf(" enter the time of the projection		: ");
	fflush(stdout);
	scanf("%f", &t);

	radian = theta*PI/180.0;

	x = vo*t*cos(radian);
	y = (vo*t*sin(radian) - g/2*t*t );
	T = 2*vo*sin(radian)/g;
	d = vo*vo*sin(2*radian)/g;



	printf ("Given initial velocity is							: %.2f m/s\n", vo);
	printf ("Given time is 									: %.2f s\n", t);
	printf ("Given angle of projection is 							: %.2f degree\n", theta);
	printf ("The distance traveled in x direction is						: %.2f m\n", x);
	printf ("The distance traveled in y direction is 					: %.2f m\n", y);
	printf ("The total time of the projection is						: %.2f s\n", T);
	printf ("The total distance traveled by the projectile is				: %.2f m\n", d);






return 0;
}
