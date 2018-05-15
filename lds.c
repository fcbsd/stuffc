/* What is the size of ld?
 * Copyright (c) Fred Crowson <fcbsd@crowsons.com>
 */
#include <stdio.h>
 
int main(void);

int 
main(void) 
{
	printf("int:\t%lu\n", (sizeof(int)));
	printf("long:\t%lu\n", (sizeof(long)));
	printf("double:\t%lu\n", (sizeof(double)));
	return 0;
}
