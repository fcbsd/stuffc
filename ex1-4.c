/* Section 1.2 K&R
 * Fahrenheit - Celcius Table 
 * Exercise 1-4: print Celsius to Fahrenheit 
 */

#include <stdio.h>

int main(void);

int main(void) {
	/* Print celsisus-fahrenheit table
	 * from celsius = -20 ... 300
	 */
	float fahr, celsius;
	int lower, upper, step;

	lower = -40;	/* lower limit of temperature table */
	upper = 200;	/* upper limit */
	step = 20; 	/* step size */

	celsius = lower;
	printf("Celsius\tFahrenheit\n");
	while (celsius <= upper) {
		/* use floating point calculations */
		//celsius = (5.0 / 9.0) * (fahr - 32.0);
		fahr = (9.0 * celsius / 5.0) + 32.0;
		printf("%4.1f\t%6.1f\n", celsius, fahr);
		celsius += step;
	}
	return 0;
}
