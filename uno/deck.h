/* Definitions for the Deck of Cards 
 * Copyrght (c) 2017-2018 fred@crowsons.com
 */

/* Define cards
 * possible cards:
 *  80: 0-9 number
 *  12: pick up 2 - specific colour
 *  4:  pick up 4 - choose colour
 *  4:  switch direction
 *  4:  change colour
 *  4:  swap hands 
 */

#define PACKSIZE 108 /* number of cards in pack */
#define COLOURS  4   /* suits in an uno pack */
#define RANKS    27  /*  */

#define ZERO    0 /* card values */
#define ONE     1 
#define TWO     2 
#define THREE   3
#define FOUR    4
#define FIVE    5
#define SIX     6
#define SEVEN   7
#define EIGHT   8
#define NINE    9

#define BLUE    0
#define GREEN   1
#define RED     2
#define YELLOW  3

#define FULLHAND    8   /* Size of dealt hand */

/* Define Colours */
#define CRED ff0000
#define CBLUE 0000ff
#define CGREEN 00ff00
#define CYELLOW ffff00


typedef     struct {
            int     rank;
            int     colour;
            }   CARD;   
