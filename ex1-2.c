/*
 * Exercise 1-2 from K&R
 * Experiment with \ arguements.
 */
#include <stdio.h>

int main(void);

int main(void) {
	printf("Hello You\nwith \"new\" lines\n");
	printf("Hello \twith \\ and  \b\b\bstuff\n");
	/* the following line will generate:
	 * -Wunknown-escape-sequence 
	 * warnings from clang:
	printf("c: \c \n");
	 */

	return 0;
}
