/* Generate six letter random strings
 * in the form constant vowel repear
 * from:
 * https://pastebin.com/01ifuBDg 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    printf("Random? \n");
    /* srand called to initialize system */
    /* this a deterministic version rather that the openBSD
     * random version.
     */
    srand_deterministic(time(NULL));
    char consonants[]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
    char vowels[]={'a','e','i','o','u'};
    
    for (int i = 0; i < 10; i++) {
        for (int i = 0; i < 3; i++) {
            //3 * 2 = duljina rijeci
            int r = (rand () % 5) ;
            int r2 =(rand () % 21);
            printf("%c%c", consonants[r2], vowels[r]);
        }
        printf("\n");
        
    }
    return 0;
}
