/* K&R
 * Character count; 2nd Version
 */
#include <stdio.h>

int main(void);

int main(void) {
	double nc;
	for (nc = 0; getchar() != EOF; ++nc)
		continue;
	printf("%.0f\n", nc);
	return 0;
}
