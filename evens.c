/* evens */
/* Return the even numbers */
#include<stdio.h>

#define MAXINPUT 10

int main(int, char**);
int evens(int *numbers, int length);

int main(int argc, char **argv) {
	int a=1, b=2, c=3, d=4, e=8;
	int mynumbers[6]={a,b,c,d,e};
	int inputnumbs[MAXINPUT];
	int count = 0;

	if(argc == 1) {
		printf("No numbers given. Exiting.\n");
		return 0;
	}
	printf(" The arg count is: %d \n", argc);	
	count = evens(mynumbers, 5);
	printf(" The count is: %d \n", count);	

	count = 0; /* reset counter */

	return 0;
}

int evens(int *numbers, int length) {
	int i, evens = 0;
	for ( i = 0; i < length; i++)
		if(numbers[i] % 2 == 0)
			evens++;
	return evens;
}

