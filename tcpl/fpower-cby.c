/* Power Function - Call by Value
 * 1.8 Functions
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
		printf("%d %d %d\n", i, power(2,i), power(-5,i));
	return 0;
}

/* power: raise base to n-th power */
int
power(int base, int n)
{
	int p;

	for ( p = 1; n > 0; --n )
		p = p * base;
	return p;
}
