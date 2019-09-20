/****************************************************************************
 * APLICATION: 	array2
 * MODULE: 		array2.c
 * PURPOSE:		To deal with arrays
 * DATE:		09.11.2011
 * AUTHOR(S):	Kedar Kanel
 *
 *  SOURCE FILE
 ****************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
enum { nr = 3, nc = 5};
const int maxValue = 100;

int main(void)
{
	int A[nr][nc];/* =	{
			{1,2,4,6,8},
			{3,5,7,9,11},
			{10,15,20,25,30}
	};*/
	int B[nr*nc];
	int i, j, k;

	srand(time(0));
	for ( i = 0; i < nr; ++i)
	for (j = 0; j <nc; ++j) 		A[i][j] = rand()%maxValue;
	for ( i = 0; i < nr; ++i){
		for (j = 0; j <nc; ++j)
			printf("A[%d,%d] = %4d  ", i,j,A[i][j]);
		printf("\n");

	}
	k = 0;
	for (i = 0; i< nr; ++i)
		for ( j = 0; j <nc; ++j)	B[k++] = A[i][j];
	for ( k = 0; k< nr*nc; ++k) {
		i = k*nc;
		j = k %nc;
		printf("B[%2d] = A[%d, %d] = %4d\n",k, i, j, B[k]);
	}

	return 0;
}
