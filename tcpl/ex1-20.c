/* Exercise 1-20
 * K&R Page 34
 * Write a program detab that replaces tabs
 * in the input with proper number of blanks
 * to space to the next tab stop.  Assume a 
 * fixed set of tab stops, say every n columns.
 * Should n be a vailable or a symbolic 
 * parameter?
 */
#include <stdio.h>

#define TABSTOP 8 /* 8 spaces to a tab - symbolic */

int main(void);
void detab(char spaces[]);

int
main (void)
{
	int c;
	int cs = 0; /* count spaces */
	char line[512];

	while ((c = getchar()) != EOF )
	{
		if ( c == '\t') {
			printf("%s", line);
		} else {
			putchar(c);
		}
		if ( c == ' ')
			++cs;
	}

	return 0;
}

void
detab(char spaces[])
{
	int i = 0;
	while ( i < TABSTOP )
	{
		spaces[i] = '_';
		++i;
	}
}
