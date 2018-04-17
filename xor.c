/* XOR
 * https://www.cs.umd.edu/class/sum2003/cmsc311/Notes/BitOp/xor.html
 *
 * Swapping variables using XOR
 */
#include<stdio.h>

int main(void);

int main(void)
{
	int a = 5;
	int b = 6;

	int x, y;

	x = a;
	y = b;

	printf("x: %d y:%d\n", x, y);

	x = x ^ y;
	y = x ^ y;
	x = x ^ y;
	printf("after:\n");
	printf("x: %d y:%d\n", x, y);

	return 0;
}
