#include <stdio.h>

/*
 * print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300
 */

int main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;		/* lower limit of temperature scale*/
	upper = 300;		/* upper limit */
	step = 20;		/* step size */

	fahr = lower;

	printf("Fahrenheit  Celsius\n");
	printf("--------------------\n");

	while( fahr < upper ) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%10.0f %7.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
