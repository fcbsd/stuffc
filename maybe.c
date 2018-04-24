/* maybe based on yes.c
 */
#include <err.h>
#include <stdio.h>
#include <stdlib.h> /* for atoi */
#include <unistd.h>

#define REPEATS 5   /* default repeats */

int 
main(int argc, char *argv[])
{
	int c, i, repeat;
	c = argc;
	
	if (c > 1) {
		repeat = atoi(argv[1]);
		for(i = 0; i < repeat; i++)
            if (c > 2)
			    puts(argv[2]);
            else
                puts("woot");
	} else {
		for(i = 0; i < REPEATS; i++)
			puts("maybe");
    }
	return 0;
}
