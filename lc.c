/* Section 1.5.3 K&R
 * Line Counting
 */
#include <stdio.h>

extern char *__progname; /* program name */

int main(void);

int main(void) {
	printf("Program called as: %s\n", __progname);
	int c, nl;
	nl = 0;
	while ((c = getchar()) != EOF)
		if ( c == '\n')
			++nl;
	printf("%d\n", nl);
	return 0;
}
