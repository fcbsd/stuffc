/* Exercise 1.2
 * Generate Primes that are two numbers apart:
 *
 * Example 11,13 and 29,31
 * The C Book Page 18
 */

#include <stdio.h>
#include <stdlib.h>

#define DIFF 2
#define MAX 500

int main(void);

int
main(void)
{
    int this_number, divisor, not_prime;
    int this_prime, next_prime;

    this_number = this_prime = 2;

    while (this_number < MAX) {
        divisor = this_number / 2;
        not_prime = 0;
        while(divisor > 1) {
            if(this_number % divisor == 0) {
                not_prime = 1;
                divisor = 0;
            } else {
                divisor = divisor - 1;
            }
        }

            if(not_prime == 0) {
                next_prime = this_number;
                if(next_prime == this_prime + DIFF) {
                    printf("%3d & %3d are %d apart.\n", 
                            this_prime, next_prime, DIFF);
                }
                /* debugging variables:
                printf("%d is a prime number. %d %d\n", 
                        this_number, this_prime, next_prime);
                */
                this_prime = this_number;
            }
            this_number = this_number + 1;
    }

    exit(EXIT_SUCCESS);
}
