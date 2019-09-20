/****************************************************************************
 * APLICATION: 	tnbrs_kedar_kanel
 * MODULE: 		tnbrs.c
 * PURPOSE:
 * DATE:		13.10.2011
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
	int n;		/************** 	numbers of dot(s) in the first row of the triangle 	*******/
	int m;		/************** 	numbers of dot(s) in the last row of the triangle 	*******/
	int sum;
	int i;

	printf 	("-----------------------------------------------------------------------------------\n");
	printf 	("                                 Trangular Numbers\n");
	printf 	("-----------------------------------------------------------------------------------\n");

	printf(" Enter the number of dot(s) for the first row	: ");
	fflush(stdout);
	scanf("%d", &n);

	printf(" Enter the number of dot(s) for the last row	: ");
	fflush(stdout);
	scanf("%d", &m);


	sum = n;

	for( i = n; i <= m; i++){

		printf("%d to   ", 1  );
		printf("%d \n", i);
		sum = sum + i;

	}
	sum = sum - 1;

	printf("The total number of dots in the triangle are : %d", sum);


return 0;
}
