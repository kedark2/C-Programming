/****************************************************************************
 * APLICATION: 	array3
 * MODULE: 		array3.c
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

static void Foo(int n, int a[n]);

 int main(void)
 {
	 enum { na = 15};
	 const int maxValue = 100;

	 int A[na];
	 int i;

	 for (i = 0; i < na; ++i)	A[i] = rand()%maxValue;
	 Foo (na, A);

	 return 0;
 }

 /*********************************************************************************************
  * procedure displays given array and computes aggregates.
  *
  * input: 	n	Number if elements in the array
  * 		a	Given one dimensional array
  * output:
  * value
  *****************************************************************************************/
void Foo(int n, int a[n]) /* we can also do a[] for one dimensional array */
 {
	 int min = INT_MAX;
	 	int max = 0;
	 	int sum = 0;
	 	int i;

	 	for (i = 0; i <n; ++i) 		a[i] = rand()%min;
	 		for(i = 0; i < n ; ++i) 		printf("a[%d] = %4d\n", i, a[i]);
	 		for(i = 0; i < n; ++i){
	 			if (a[i] < min) min = a[i];
	 			if (a[i] > max) max = a[i];
	 			sum += a[i];
	 		}
	 		printf("Minimum value of an element : %5d\n", min);
	 		printf("Average value of an element: %8.2f\n", (double)sum/n);
	 		printf("Maximum value of an element : %5d\n", max);


 }
