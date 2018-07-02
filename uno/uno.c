/* Computerised Version of UNO
 * Add info about the card game that this based on
 * Copyright (c) 2017-2018 Fred Crowson <fred@crowsons.com>
 */

#include <stdio.h>
#include <stdlib.h>

/* Include deck.h */
#include "deck.h"

int main(void);
int shuffle(int); /* shuffle deck function */
int deal(int); /* deal cards to players */

int main(void)
{
    int i;
    int deck[PACKSIZE];
        
    shuffle(&deck);

    for(i = 0; i < PACKSIZE; i++)
    {
        printf("%d card %d", i, deck[i]);
    }
    return EXIT_SUCCESS;
}

int shuffle(int emptydeck)
{
    int i;
    int save;
    int shuffled[PACKSIZE];

    for(i = 0; i < PACKSIZE; i++)
    {
	int r = arc4random_uniform(i);
        save = shuffled[i];
	shuffled[i] = shuffled[r];
	shuffled[r] = save;
    }

    return 0; 
}
