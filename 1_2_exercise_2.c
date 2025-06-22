#include <stdio.h>

/*
 * print Celsius-Fahrenheit table
 * for fahr = 0, 20, ..., 300
 */

int main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;		/* lower limit of temperature scale*/
	upper = 300;		/* upper limit */
	step = 20;		/* step size */

	celsius = lower;

	printf("Celsius   Fahrenheit\n");
	printf("--------------------\n");

	while( celsius < upper ) {
		fahr = (9.0/5.0) * celsius + 32.0;
		printf("%7.0f %11.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
