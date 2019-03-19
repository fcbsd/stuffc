/* Exercise 1-21
 * Page 34 K&R
 *
 * Write a progam entab that replaces strings of blanks 
 * by the minimum number of tabs and blanks that
 * achieve the same spacing.  Use the same tab 
 * stops as for detab. When either a tab or a 
 * single blank would suffice to reach a tab stop,
 * which should be given preference?
 *
 * Copyright (c) Fred Crowson <fcbsd@crowsons.com>
 */
#include <stdio.h>

#define TABSTOP 8 /* number of spaces to a tabstop */

int main(void);

int
main(void)
{
	int c;
	int cs = 0; /* count spaces */
	int isspace = 0; /* char is space */

	while ((c = getchar()) != EOF )
	{
		if ( c == ' ') {
			if (isspace > 0) {
				isspace++;
				cs++;
			}
			cs++;
		} else {
			printf("%d %d\n", isspace, cs);
			isspace = 0;
		}
	}

	return 0;
}

