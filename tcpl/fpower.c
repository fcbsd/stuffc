/* Power Function 
 * 1.7 Functions
 */
#include <stdio.h>

int main(void);
int power(int, int);

/* test power function */
int
main(void)
{
	int i;

	for (i = 0; i < 10; ++i)
		printf("%d %d %d\n", i, power(2,i), power(-3,i));
	return 0;
}

/* power: raise base to n-th power */
int
power(int base, int n)
{
	int i, p;

	p = 1;
	for ( i = 1; i <= n; ++i)
		p = p * base;
	return p;
}