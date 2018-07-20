/* K&R
 * Exercise 1-12: write a program that prints its input
 *                one word per line
 *
 * Copyright (c) 2018 Fred Crowson <fcbsd@crowsons.com>
 */
#include <stdio.h>

#define IN  1   /* inside word */
#define OUT 0   /* outside a word */

int main(void);

/* print one word per line */
int 
main(void)
{
    int c, word;

    word = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (word == IN)
                printf("\n"); /* separate words */
            word = OUT; /* no longer in a word */
        }
        else if (word == OUT) {
            putchar(c);
            word = IN;
        }
        else
            putchar(c);
    }
    return 0;
}
