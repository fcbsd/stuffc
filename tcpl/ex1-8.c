/* K&R
 * Exercise 1-8: count blanks, tabs, newlines
 * Copyright (c) 2017 Fred Crowson <fcbsd@crowsons.com>
 */
#include <stdio.h>

int main(void);
int sc(int, int, int); /* function for printing results */

int main(void) {
	int ch, bl, ts, nl;
	bl = ts = nl = 0;
	while ((ch = getchar()) != EOF) {
		if ( ch == '\n')
			++nl;
		if ( ch == '\t')
			++ts;
		if ( ch == ' ')
			++bl;
	}
	sc(bl, ts, nl);
	return 0;
}

int sc(int blanks, int tabs, int newlines) {
	printf("In this input, there was:\n");
	printf("%d blanks, %d tabs, %d newlines\n",
			blanks, tabs, newlines);
	return 0;
}

