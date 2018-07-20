/* Section 1.4 K&R
 * Fahrenheit - Celcius Table 
 * Symbolic Constants 
 */
#include <stdio.h>

#define LOWER 0 	/* lower limit of table */
#define UPPER 300	/* upper limit */
#define STEP  20	/* step size */

int main(void);

int main(void) {
	int fahr;
	for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0)*(fahr - 32));
	return 0;
}
