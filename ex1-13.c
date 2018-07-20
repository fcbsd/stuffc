/* Exercise 1-13
 * K&R Page 24
 * Write a program to print the histogram of the length
 * of words in its input.  It is easy to draw the 
 * histogram with the bars horizontal; a vertical orientation 
 * is more challenging.
 *
 * Copyright (c) 2018 Fred Crowson <fred@crowsons.com>
 */
#include <stdio.h>

#define IN  1   /* inside word */
#define OUT 0   /* outside a word */
#define MAXWORDLEN 12 /* maximum characters in a word */

int main(void);

int
main(void)
{
    int c, cc, i, j, nw, state;
    int wordlength[MAXWORDLEN];

    state = OUT;
    cc = nw = 0;
    
    /* set array to 0 for wordlength */
    for(i = 0; i < MAXWORDLEN; i++)
        wordlength[i] = 0;

    while ((c = getchar()) != EOF) {
        cc++;
        if (c == ' ' || c == '\n' || c == '\t') {
            wordlength[cc - 1]++;
            state = OUT;
            cc = 0; /* reset word character count */
        }
        else if (state == OUT) {
            state = IN;
            ++nw; /* count words */
        }
    }

    printf("Histogram of word length\n");

    for(i = 1; i < MAXWORDLEN; i++)
    {
        printf("Words with %d characters: ", i);
        for(j = 1; j <= wordlength[i]; j++)
            printf("#");

        printf("\n");
    }
    
    return 0;
}
