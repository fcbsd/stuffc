/* Section 1.2 K&R
 * Fahrenheit - Celcius Table 
 * Develop program: improve accuracy with floats 
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
	while (fahr <= upper) {
		/* use floating point calculations */
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%4.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}
