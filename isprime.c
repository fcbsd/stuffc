/* 2017 is a prime number.
 * This program tests if a number is prime.
 * Idea from http://www.xkcd.com/1779/
 *
 * Copyright (c) 2017, Fred Crowson <fcbsd@crowsons.com>
 */
#include <stdio.h>
#include <stdlib.h>

int main(int, char **);
int hasdivisor(int);
int isprime(int, int);

int main(int argc, char **argv) {
	
	int c; /* check number */
	int i; /* number passed */

	if (argc == 1) {
		printf("No number given.\n");
		return 0;
	} else {
		i = atoi(argv[1]);
		c = hasdivisor(i);
		printf("You entered %d ", i);
		if (isprime(i, c) == 0) {
			printf("which is a prime number.\n");
		} else {
			printf("which is divisable by %d.\n", c);
		}
	}

	return 0;
}

/* return first divisor or number if prime */
int hasdivisor(int number) {
	int a;
	for (a = 2; a < number; a++) {
		if ((number % a) == 0)
			return a;
	}

	return number;
}

int isprime(int number, int divisor) {
	if (number == divisor) {
		return 0; /* true */
	} else {
		return 1; /* false */
	}

}
