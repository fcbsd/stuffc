/* K&R
 * Exercise 1-14: write a program to print a histogram of the
 * letter frequencies of different characters in it's input.
 *
 * Copyright (c) Fred Crowson <fred@crowsons.com>
 */
#include <stdio.h>

#define ALPHA 26    /* Letters in Alphabet */
#define LCA 97      /* ASCII char code for a */

int main(void);

int
main(void)
{
    int c, i, j;
    int alpha[ALPHA];
    
    for(i = 0; i < ALPHA; i++)
        alpha[i] = 0;


    while ((c = getchar()) != EOF) {
        if( c >= LCA || c <= LCA + ALPHA) {
            alpha[c-LCA]++;
        }
    }

    printf("Histogram of Characters\n");

    for(i = 0; i < ALPHA; i++)
    {
        printf("%c: ", LCA + alpha[i]);
        for(j = 0; j < alpha[i]; j++)
            printf("#");
        printf("\n");
    }
    
    return 0;
}
