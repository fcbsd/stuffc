/* K&R
 * Exercise 1-9: copy input to output replacing multiple blanks with
 * a single blank
 *
 * Copyright (c) 2017 Fred Crowson <fcbsd@crowsons.com>
 */
#include <stdio.h>

int main(void);

int main(void) {
	int ch, cb;
	cb = 0; /* count blanks */
	while ((ch = getchar()) != EOF) {
		if (ch == ' ') {
			cb++;
		} else {
			if ( cb >= 1)
				printf(" ");
			putchar(ch);
			cb = 0;
		}
	}
	return 0;
}
