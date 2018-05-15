/*
 * 2017 is a prime number.
 * This program tests if a number is prime.
 * Idea from http://www.xkcd.com/1779/
 *
 * Copyright (c) 2017-8, Fred Crowson <fcbsd@crowsons.com>
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> /* for getopt(3) */

#define PRIME_DEFINITION "A Prime Number " \
    "is a positive integer (p > 1) that has no positive " \
    "integer divisors other than 1 and itself.\n " \
    "See http://mathworld.wolfram.com/PrimeNumber.html"

extern char *__progname;

int main(int, char **);
int hasdivisor(int);  
int isprime(int, int);
int nextprime(int);
int prevprime(int);
int special(int number);
void usage(void);
	
int nearest = 0; /* nearest prime */
int verbose = 0; /* verbose output */

void
usage()
{
    fprintf(stderr, "Usage: %s [-nv][number]\n", __progname);
    exit(1);
}

int 
main(int argc, char **argv) 
{
	
	int c; /* check number */
	int i; /* number passed */
	int ch; /* arguments passed */
	int next; /* next prime number */
	int previous; /* previous prime number */

	while ((ch = getopt(argc, argv, "nv")) != -1) {
		switch (ch) {
			case 'n':
				nearest = 1;
				break;
			case 'v':
				verbose = 1;
				break;
			default:
				usage();
				/* not reached */
		}
	}
	argv += optind;

	printf("argv: %s \n", *argv);
	i = atoi(*argv);
	c = hasdivisor(i);
	printf("You entered %d ", i);
        if (i <= 2) {
            special(i);
            return 0; /* exit */
        }
		if (isprime(i, c) == 0) {
			printf("which is a prime number.\n");
		} else {
			printf("which is divisable by %d.\n", c);
			previous = prevprime(i);
			next = nextprime(i);
			printf("The previous prime was: %d.\n", previous);
			printf("and next prime is: %d.\n", next);
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
/* special numbers */
int
special(int number)
{
    char *prime_def = PRIME_DEFINITION;
    if(number == 1) {
        printf("\nNumber 1 is special - it used to be a prime (Goldbach, 1742).\n");
        printf("%s\n", prime_def);
    }
    if(number == 2)
        printf("\nNumber 2 is special - it is the first and only even prime!\n");
    return number;
}
