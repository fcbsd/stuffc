/* Character Counting K&R
 * changing from long to double
 */
#include <stdio.h>

int main(void);

int main(void) {
	double nc;

	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);
	return 0;
}
