/* Exercise 1-13
 * K&R Page 24
 * Write a program to print the histogram of the length
 * of words in its input.  
 *
 * a vertical orientation: a lazy version build the 
 * histogram downwards :~)
 *
 * Copyright (c) 2018 Fred Crowson <fcbsd@crowsons.com>
 */
#include <stdio.h>

#define IN  1   /* inside word */
#define OUT 0   /* outside a word */
#define MAXWORDLEN 15 /* maximum characters in a word */

int main(void);

int
main(void)
{
    int c, cc, i, j, nw,  state;
    int wordlength[MAXWORDLEN];
    int wordlen;

    state = OUT;
    cc = nw = wordlen = 0;
    
    /* set array to 0 for wordlength */
    for(i = 0; i < MAXWORDLEN; i++)
        wordlength[i] = 0;

    while ((c = getchar()) != EOF) {
        cc++;
    	if (cc > wordlen)
		    wordlen = cc;
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
    
    printf("Vertical Histogram of Word Lengths\n");

    for(i = 1; i < wordlen; i++)
    {
	    for(j = 1; j < wordlen; j++)
	    {
		if (wordlength[j] >= i)
	            printf("#");
	    	else
	    	    printf(" ");
    	    }
	    printf("\n");
    }

    printf("Done\n");
    
    return 0;
}
