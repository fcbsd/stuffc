/* Section 2.3
 * Enumeration
 */
#include <stdio.h>

enum months { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, 
		AUG, SEP, OCT, NOV, DEC };

int 
main(void)
{	int i;
	i = 0;
	while (i < 12)
	{
		if (i == JAN)
			printf(" %d is mon %d\n", JAN , i);
		i++;
	}
	printf(" Apr is month %d\n", APR);

	return 0;
}
