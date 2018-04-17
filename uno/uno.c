/* Computerised Version of UNO
 * Copyright (c) 2017 Fred Crowson <fred@crowsons.com>
 */

#include <stdio.h>
#include <stdlib.h>

/* Define Pack Size */
#define PACKSIZE 108

/* Define Colours */
#define RED ff0000
#define BLUE 0000ff
#define GREEN 00ff00
#define YELLOW ffff00

/* Define cards
 * possible cards:
 *  80: 0-9 number
 *  12: pick up 2 - specific colour
 *  4:  pick up 4 - choose colour
 *  4:  switch direction
 *  4:  change colour
 *  4:  swap hands 
 */

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
    int shuffled[PACKSIZE];
    int rd[27] = { 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5,
                    6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 10, 11, 12, 13, 14 };

    for(i = 0; i < PACKSIZE; i++)
    {
        shuffled[i] = 1;
    }

    return 0; 
}
