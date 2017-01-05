/* K&R
 * File Copying
 * Simple file copy program
 * EOF on OpenBSD is Ctrl-D on cli
 */
#include <stdio.h>

#define MYEOF -1   /* define different EOF Ex 1-6
		    * it is -1 on OpenBSD not 0 or 1
		    */

int main(void);

int main(void) {

	int c;

	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}

	if (EOF == MYEOF) {
		/* Ex 1-7 what is EOF? */
		printf("EOF = %d\n", MYEOF);
	}

	return 0;
}
