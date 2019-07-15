/* Generate Primes
 * Example 1.2
 * The C Book Page 12
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

int main(void);

int
main(void)
{
    int this_number, divisor, not_prime;

    this_number = 3;

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

            if(not_prime == 0)
                printf("%d is a prime number\n", this_number);
            this_number = this_number + 1;
    }

    exit(EXIT_SUCCESS);
}

