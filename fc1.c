/* Section 1.5 K&R
 * File Copy 
 */
#include <stdio.h>

int main(void);

int main(void) {
	/* copy input to output first version */
	int c;

	c = getchar();

	while ( c != EOF) {
		putchar(c);
		c = getchar();
	}
	return 0;
}
