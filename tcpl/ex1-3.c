/* Section 1.2 K&R
 * Fahrenheit - Celcius Table 
 * Exercise 1-3: print header to table 
 */

#include <stdio.h>

int main(void);

int main(void) {
	/* Print fahrenheit-celsisus table
	 * from fahr = 0 ... 300
	 */
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20; 	/* step size */

	fahr = lower;
	printf("Fahrenheit\tCelsius\n");
	while (fahr <= upper) {
		/* use floating point calculations */
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%4.0f\t\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}
