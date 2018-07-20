/* K&R
 * Exercise 1-10: copy input to output replacing each tab, 
 * backspace, and backslash with '\t' '\b' '\\'
 *
 * Notes: backspaces don't seem to work...
 *        backspaces are ascii 92
 *        enter is ascii 10
 *        tab is ascii 9
 *
 * Copyright (c) 2018 Fred Crowson <fcbsd@crowsons.com>
 */
#include <stdio.h>

int main(void);

int main(void) {
	int ch;
	while ((ch = getchar()) != EOF) {
		if (ch == '\t') 
            printf("\\t");
		if (ch == '\b') 
            printf("\\b");
		if (ch == '\\') 
            printf("\\\\");
        else
            printf("%c", ch);
		
	}
	return 0;
}
