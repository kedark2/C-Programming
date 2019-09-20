/****************************************************************************
 * APLICATION: 	array1
 * MODULE: 		array1.c
 * PURPOSE:		To deal with arrays
 * DATE:		09.11.2011
 * AUTHOR(S):	Kedar Kanel
 *
 *  SOURCE FILE
 ****************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
enum {	nb = 15, maxValue = 100};
/*enum {nb = 15};
static constant int maxValue = 100;*/
int A[4]	= {1,3,5,10};

int main (void)
{
	int i;
	/*int na = sizeof(A)/sizeof(int);*/
	int B[nb];
	int bMin = maxValue;
	int bMax = 0;
	int sumB = 0;
	srand(time(0));

	/*for (i =0; i<na; i++){
		printf("A[%d] =%4d \n", i, A[i]);
	}*/

	for (i = 0; i <nb; ++i) 		B[i] = rand()%maxValue;
	for(i = 0; i < nb ; ++i) 		printf("B[%d] = %4d\n", i, B[i]);
	for(i = 0; i < nb; ++i){
		if (B[i] < bMin) bMin = B[i];
		if (B[i] > bMax) bMax = B[i];
		sumB += B[i];
	}
	printf("Minimum value of an element : %5d\n", bMin);
	printf("Average value of an element: %8.2f\n", (double)sumB/nb);
	printf("Maximum value of an element : %5d\n", bMax);

	return 0;
}
