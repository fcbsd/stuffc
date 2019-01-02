/* K&R
 * Exercise 1-14: write a program to print a histogram of the
 * letter frequencies of different characters in it's input.
 *
 * Copyright (c) 2018 Fred Crowson <fcbsd@crowsons.com>
 */
#include <stdio.h>

#define ALPHA 26    /* Letters in Alphabet */
#define LCa 97      /* ASCII char code for a */
#define LCz 97      /* ASCII char code for z */

int main(void);

int
main(void)
{
    int c, i, j;
    int alpha[ALPHA];
    /* find value of a and z */
    printf("a: %d ", 'a');
    printf("z: %d\n ", 'z');
    
    for(i = 0; i <= ALPHA; i++)
        alpha[i] = 0;


    while ((c = getchar()) != EOF) {
        if( c >= LCa || c <= LCz) {
            alpha[c - LCa]++;
        }
    }

    printf("Histogram of Characters\n");

    for(i = 0; i < ALPHA; i++)
    {
        printf("%c: ", LCa + i);
        for(j = 0; j < alpha[i]; j++)
            printf("#");
        printf("\n");
    }
    
    return 0;
}
