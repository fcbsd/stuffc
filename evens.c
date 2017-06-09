/* evens */
/* Return the count of even numbers */
#include<stdio.h>
#include<stdlib.h>

#define MAXINPUT 10

int main(int, char**);
int evens(int *numbers, int length);

int main(int argc, char **argv) {
	int i;
	int inputnumbs[MAXINPUT];
	int count = 0;

	if(argc == 1) {
		printf("No numbers given. Exiting.\n");
		return (EXIT_FAILURE);
	}
	printf("The arg count is: %d \n", argc);	
	if (argc >= MAXINPUT) {
		printf("Too many args. Exiting\n");
		return(EXIT_FAILURE);
	}
		
	for (i = 1; i < argc; i++) {
		if (i == 0)
			continue;
		else {
			inputnumbs[i - 1] = atoi(argv[i]);
		}
	}

	count = evens(inputnumbs, argc - 1);
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

