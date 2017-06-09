/* maybe based on yes.c
 */
#include <err.h>
#include <stdio.h>
#include <stdlib.h> /* for atoi */
#include <unistd.h>

int 
main (int argc, char *argv[])
{
	int c, i, repeat;
	c = argc;
	
	if (c > 1) {
		repeat = atoi(argv[1]);
		for(i = 0; i < repeat; i++)
			puts(argv[2]);
	}
	else
		for(i=0;i<5;i++)
			puts("maybe");
	return 0;
}
