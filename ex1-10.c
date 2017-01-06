/* K&R
 * Exercise 1-10: copy input to output replacing tabs, backspaces, 
 * and backslashes 
 * Copyright (c) 2017 Fred Crowson <fcbsd@crowsons.com>
 *
 * Note: backspaces don't seem to work...
 * 	 backslashes are ascii 92
 */
#include <stdio.h>

int main(void);

int main(void) {
	int ch;
	while ((ch = getchar()) != EOF) {
		if ( ch == '\n')
			printf("\\n");
		if ( ch == '\t')
			printf("\\t");
		if ( ch == '\b')
			printf("\\b");
		if ( ch == '\\')
			printf("\\");
		putchar(ch);	
	}
	return 0;
}
