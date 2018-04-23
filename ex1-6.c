/* Exercise 1-6: K&R page 17
 * Verify that getchar() != EOF is 0 or 1
 */
#include <stdio.h>

int main(void);

int main(void) {
	int c, d;
	printf("Type character and return to continue:\n");
	c = getchar();
	d = getchar() != EOF;
	printf("c is: %d and d is: %d \n", c, d);
	return 0;
}
