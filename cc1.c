/* Section 1.5.2 K&R
 * Character Count
 */
#include <stdio.h>

int main(void);

int main(void) {
	/* count characters in input; V.1 */
	long nc;

	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("Char count: %ld\n", nc);
	return 0;
}
