/* Section 1.5 K&R
 * File Copy
 * Shortened Version
 */
#include <stdio.h>

int main(void);

int main(void) {
	/* copy input to output 2nd version */
	int c;

	while ((c = getchar()) != EOF) {
		putchar(c);
	}
	return 0;
}
