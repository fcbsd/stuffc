/*
 * 2017 is a prime number.
 * This program tests if a number is prime.
 * Idea from http://www.xkcd.com/1779/
 *
 * Copyright (c) 2017, Fred Crowson <fcbsd@crowsons.com>
 */
#include <stdio.h>
#include <stdlib.h>

extern char *__progname;

int main(int, char **);
int hasdivisor(int);  
int isprime(int, int);
int nextprime(int);
int prevprime(int);
void usage(void);

void
usage()
{
    fprintf(stderr, "Usage: %s [number]\n", __progname);
    exit(1);
}

int 
main(int argc, char **argv) 
{
	
	int c; /* check number */
	int i; /* number passed */
	int next; /* next prime number */
	int previous; /* previous prime number */

	if (argc == 1) {
		usage();
	} else {
		i = atoi(argv[1]);
		c = hasdivisor(i);
		printf("You entered %d ", i);
		if (isprime(i, c) == 0) {
			printf("which is a prime number.\n");
		} else {
			printf("which is divisable by %d.\n", c);
			previous = prevprime(i);
			next = nextprime(i);
			printf("The previous prime was: %d.\n", previous);
			printf("and next prime is: %d.\n", next);

		}
	}

	return 0;
}

/* return first divisor or number if prime */
int 
hasdivisor(int number) 
{
	int a;
	for (a = 2; a < number; a++) {
		if ((number % a) == 0)
			return a;
	}

	return number;
}

/* check if the number is the divisor - if yes then prime */
int 
isprime(int number, int divisor) 
{
	if (number == divisor) {
		return 0; /* true */
	} else {
		return 1; /* false */
	}

}

/* find next prime that is greater than number */
int
nextprime(int number)
{
	int prime, count;
	count = ++number;
	prime = hasdivisor(count);	

	while (isprime(prime, count) != 0) {
		++count;
		prime = hasdivisor(count);
	}
	return prime;
}

/* find previous prime number that is less than number */
int
prevprime(int number)
{
	int prime, count;
	count = --number;
	prime = hasdivisor(count);	

	while (isprime(prime, count) != 0) {
		--count;
		prime = hasdivisor(count);
	}
	return prime;
}
