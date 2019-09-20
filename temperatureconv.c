/****************************************************************************
 * APLICATION: 	ex0304
 * MODULE: 		temperatureconv.c
 * PURPOSE:		To change the temperature from celcius to fahrenheit.
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

	double tempC;
	double tempF;

	scanf	("%lf", &tempC);
	fflush	(stdout);

	tempF	= 9.0*tempC/5.0 + 32.0;

	printf	("-------------------------------------------------------------\n");
	printf	("EXERCISE #0304\n");
	printf	("-------------------------------------------------------------\n");
	printf	("Temperature in Celsius scale: %6.1f", tempC);
	printf	("Temperature in Fahrenheit scale: %6.1f", tempF);




return 0;
}
