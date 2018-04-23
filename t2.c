/* Section 1.2 K&R
 * Fahrenheit - Celcius Table 
 * Develop program justify numbers
 */

#include <stdio.h>

int main(void);

int main(void) {
	/* Print fahrenheit-celsisus table
	 * from fahr = 0 ... 300
	 */
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20; 	/* step size */

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		/* adding width's to %d */
		printf("%4d\t%6d\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}
