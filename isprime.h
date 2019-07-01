/*
 * isprime header file. 
 *
 * Copyright (c) 2017-2019, Fred Crowson <fcbsd@crowsons.com>
 *
 * See LICENSE.md in this directory for Licence information
 */

#define PRIME_DEFINITION "A Prime Number " \
    "is a positive integer (p > 1) that has no positive " \
    "integer divisors other than 1 and itself.\n " \
    "See http://mathworld.wolfram.com/PrimeNumber.html"

#define IS_PRIME "is a prime number.\n"

#define IS_CURIOUS "is a curious prime: if you take one " \
    "or more digits off, the resulting numbers are all " \
    "prime. "

/* 193939 is a cirular prime arranging the digits results in a prime! */
const int CIRCULARPRIME[6] = { 193939, 391939, 393919, 919393, 939391, 939193 };

/* 73939133 is a curious prime: if you take one or more digits off 
 * the end the resulting numbers are all prime */
const int CURIOUSPRIME = 73939133;

extern char *__progname;

int main(int, char **);
int absolute(int); /* Permutable primes */
int hasdivisor(int);  
int isprime(int, int);
int nextprime(int);
int prevprime(int);
int nearestprime(int);
int special(int);
int circular(int); /* Circular primes */
int print(int, int);
int printverbose(int, int);
void usage(void);
