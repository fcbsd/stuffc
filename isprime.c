/*
 * 2017 is a prime number.
 * This program tests if a number is prime.
 * Idea from http://www.xkcd.com/1779/
 *
 * Copyright (c) 2017-2019, Fred Crowson <fcbsd@crowsons.com>
 *
 * See LICENSE.md in this directory for Licence information
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> /* for getopt(3) */
#include "isprime.h"

int nearest = 0; /* nearest prime */
int verbose = 0; /* verbose output */
int boolean = 0; /* boolean output */

void
usage()
{
    fprintf(stderr, "Usage: %s [-bnv] [number]\n", __progname);
    exit(1);
}

int 
main(int argc, char **argv) 
{
    
    int c; /* check number */
    int i; /* number passed */
    int ch; /* arguments passed */

    while ((ch = getopt(argc, argv, "bnv")) != -1) {
        switch (ch) {
            case 'n':
                nearest = 1;
                break;
            case 'v':
                verbose += 1;
                break;
            case 'b':
                boolean = 1;
                break;
            default:
                usage();
                /* not reached */
        }
    }
    argv += optind;

    if (argv == NULL) {
        printf("argv: %s \n", *argv);
        usage();
    }

    /* debug argv:
     * printf("argv: %s \n", *argv);
     */
    i = atoi(*argv);
    c = hasdivisor(i);
    /* printf("You entered %d ", i); */
    if (i <= 2) {
        /* 1 and 2 are special */
        if (verbose)
            special(i);
        else { 
            if (i == 1)
                print(i, c);
            else
            print(i, c); /* i is 2 */
        }

        return 0; /* exit */
    }
    if (isprime(i, c)) {
            circular(i); /* check if circular prime */
            /* add check for absolute primes */
            if (verbose)
                printverbose(i, c);
            else
                print(i, c);

    } else {
            if (verbose)
                printverbose(i, c);
            else 
                print(i, c);
            if (nearest)
                printf("The nearest prime is: %d \n", 
                        nearestprime(i));
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
        return 1; /* true */
    } else {
        return 0; /* false */
    }

}

/* find next prime that is greater than number */
int
nextprime(int number)
{
    int np, div;
    np = number++;
    div = hasdivisor(np);   

    while (isprime(np, div) == 0) {
        np++;
        div = hasdivisor(np);
    }
    return np;
}

/* find previous prime number that is less than number */
int
prevprime(int number)
{
    int pp, div;
    pp = number--;
    div = hasdivisor(pp);   

    while (isprime(pp, div) == 0) {
        pp--;
        div = hasdivisor(pp);
    }
    return pp;
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
    if(boolean)
        printf("True");
    if(number == 2)
        printf("\nNumber 2 is special - it is the first and only even prime!\n");
    return number;
}

/* circular primes 
 * see https://en.wikipedia.org/wiki/Circular_prime
 * These are primes where rearranging the order of the digits results
 * in another prime: eg: 1193, 1931, 9311, 3119
 * currently this function just uses the circular prime in the isprime.h
 * file - need to convert to proper function.
 */
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
/* Absolute primes or permutable primes
 * see https://en.wikipedia.org/wiki/Permutable_prime
 * These primes are primes that remain as primes no matter how
 * you switch their digits positions.
 */
int
absolute(int prime)
{
    return 0;    
}

/* print output */
int
print(int number, int devisor)
{
    if (boolean == 1 && (number == 1 || number != devisor))
        printf("0\n");
    else if (boolean == 1 && number == devisor)
        printf("1\n");
    else
        printf("%d\n", devisor);
    return 0;
}

/* verbose output */
int
printverbose(int number, int divisor)
{
    int next; /* next prime number */
    int previous; /* previous prime number */
    char *prime = IS_PRIME; /* the number is prime*/
    char *curious = IS_CURIOUS; /* this is a curious prime */
    if(boolean && verbose) {
        if (number == divisor)
            printf("True\n"); 
        else
            printf("False\n");
    } else {
        if (verbose > 1) {
            printf(" in extra verbose %d \n", verbose); 
        }
        if (number == divisor) {
            printf("%d %s\n", number, prime);
            if (number == CURIOUSPRIME)
                printf("%d %s\n", number, curious);
        } else {
	    printf("You entered %d ", number);
	    printf("which is divisable by %d.\n", divisor);
	    previous = prevprime(number);
	    next = nextprime(number);
	    printf("The previous prime was: %d ", previous);
	    printf("and next prime is: %d.\n", next);
        }
    }
    return number;
}

/* nearest prime */
int 
nearestprime(int number)
{
    int nd; /* difference between next prime and number */
    int pd; /* difference between previous prime and number */

    nd = nextprime(number) - number;
    pd = number - prevprime(number);
    /* see https://www.le.ac.uk/users/rjm1/cotter/page_37.htm */
    if (verbose)
        printf("nd: %d and pd: %d \n", nd, pd);

    if(nd >= pd)
        return prevprime(number);

    return nextprime(number);
}
