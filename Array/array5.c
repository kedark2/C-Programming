#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>
static void generateData( int n, int A[n] );
static void reverseOrder(int n, int A[n]);
static void printOutArray (int n, int a[n]);

int main(void)
{
	enum {na = 20};
	int A[na];

	srand(time);
	generateData(na,A);
	printOutArray(na,A);
	reverseOrder(na, A);

return 0;
}

void printOutArray (int n, int A[n])
{
	int i;
	for(i = 0; i<n ; ++i)	printf("%4d", A[i]);
	printf("\n");



}
/*********************************************************************************************
  *Procedure initializes given array with random variables.
  *
  *
  *
  * input: 	n Number of elements
  * 		a	The given one dimensional array
  * output:	a	Array is to be initialized.
  * value
  *****************************************************************************************/
void reverseOrder(int n, int A[n])
{
	int a,i, j;
		i= 0; j = n;
		/*for(i = n; i>0 ; --i)	printf("%4d", A[i]);
		printf("\n");*/

	while ( i < j){

		a = A[i];
		A[i] = A[j];
		A[j] = a;
		++i;
		--j;
		printf ("%d", A[j]);
		printf("\n");
	}



}


void generateData( int n, int A[n] )
{
	const int maxValue = 100;
	int i;

	for (i =0; i< n; ++i) A[i] = rand()%maxValue;



}


