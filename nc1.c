/* K&R 
 * Count Characters; 1 St Version
 */
#include <stdio.h>

int main(void);

int main(void) {
	long nc;

	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
	return 0;
}
