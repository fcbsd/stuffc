/*
 * 2017 is a prime number.
 * This program tests if a number is prime.
 * Idea from http://www.xkcd.com/1779/
 *
 * Copyright (c) 2017-8, Fred Crowson <fcbsd@crowsons.com>
 *
 * See LICENSE.md in this directory for Licence information
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> /* for getopt(3) */
#include "isprime.h"

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

	/* debug argv:
     * printf("argv: %s \n", *argv);
     */
	i = atoi(*argv);
	c = hasdivisor(i);
	/* printf("You entered %d ", i); */
        if (i <= 2) {
            if (verbose == 1)
                special(i);
            else
                if (i == 1)
                    printf("%d\n", c);
                else
    			    printf("%d", i);
            return 0; /* exit */
        }
		if (isprime(i, c) == 0) {
            circular(i); /* check if circular prime */
            printf("%d\n", i);
		} else {
            if (verbose == 1)
                print(i, c);
            else 
			    printf("%d\n", c);
            if (nearest == 1)
                printf("The nearest prime is: %d \n", 
                        nearestprime(i, verbose));
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

/* circular primes */
int
circular(int prime)
{
    int i;
    for(i=0; i < 6; i++) {
        if (prime == CIRCULARPRIME[i])
            printf("we have a circular prime!\n");
    }
    return 0;
}

/* verbose output */
int
print(int number, int divisor)
{
	int next; /* next prime number */
	int previous; /* previous prime number */
    /* char *prime = IS_PRIME; */
    printf("You entered %d ", number);
	printf("which is divisable by %d.\n", divisor);
	previous = prevprime(number);
	next = nextprime(number);
	printf("The previous prime was: %d ", previous);
	printf("and next prime is: %d.\n", next);
    return number;
}

/* nearest prime */
int 
nearestprime(int number, int verbose)
{
    int nd; /* difference between next prime and number */
    int pd; /* difference between previous prime and number */

    nd = nextprime(number) - number;
    pd = number - prevprime(number);

    if (verbose == 1)
        printf("nd: %d and pd: %d \n", nd, pd);

    if(nd >= pd)
        return prevprime(number);

    return nextprime(number);
}
