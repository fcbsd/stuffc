/* From Trusting Trust
 * https://www.win.tue.nl/~aeb/linux/hh/thompson/trust.html
 *
 * Write a self-reproducing program:
 * 	write a source program that when compiled and executed 
 * 	will produce an exact copy of its source.
 */
#include <stdio.h>

char s[] = {
	't',
	'0',
	'\n',
	'|',
	':',
	'\n',
	'/',
	'*',
	'\n',
	'*',
	'T',
	'h',
	'e',
	0
	};

int main(void) {
	int i;
	printf("char\ts[ ] = |\n");
	for(i = 0; s[i]; i++)
		printf("\n%d,\n", s[i]);
	printf("%s", s);

	return 0;
}
