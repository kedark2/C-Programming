/****************************************************************************
 * APLICATION: 	array4
 * MODULE: 		array4.c
 * PURPOSE:		To deal with arrays
 * DATE:		09.11.2011
 * AUTHOR(S):	Kedar Kanel
 *
 *  SOURCE FILE
 ****************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>
static int Goo ( int nr, int nc, int a[nr][nc]);
static int Goo1 ( int nr, int nc, int b[]);

int main(void)
{
	enum {nr = 3, nc =5 };
	const int maxValue = 100;

	int A[nr][nc];
	int i, j;
	int sum;

	for (i = 0; i < nr; ++i)
		for (j = 0; j < nc; ++j)		A[i][j]= rand()%maxValue;
	sum = Goo (nr,nc,A);
	printf("Total = %6d\n", sum);

	printf("Total2 = %6d\n", Goo1(nr,nc,A));


	return 0;
}
/*********************************************************************************************
  *
  *function prints out given array and computes sum of all elements
  *
  *
  * input: 	nr	Number of rows
  * 		nc 	Number of columns
  * 		a	The array
  * output:
  * value
  *****************************************************************************************/
int Goo ( int nr, int nc, int a[nr][nc])
{
	int i, j;
	int sum  = 0;

	for(i =0; i < nr; ++i)
		for (j =0; j < nc ; ++j){
			printf( "a[%d,%d] =%6d \n",i,j, a[i][j]);
			sum += a[i][j];
		}

	return sum;
}
int Goo1 ( int nr, int nc, int b[])
{
	int i, j, k;
	int sum  = 0;

	for(i =0; i < nr; ++i)
		for (j =0; j < nc ; ++j){
			k = i*nc + j;
			printf( "b[%d,%d] =%6d \n",i,j, b[k]);
			sum += b[k];

		}

	return sum;
}
