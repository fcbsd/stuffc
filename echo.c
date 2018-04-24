/* echo.c -- repeats input 
 * Until a #
 */
#include <stdio.h>

int main(void);

int 
main(void) 
{
	char ch;

	while (( ch = getchar()) != '#')
		putchar(ch);

	return 0;
}
