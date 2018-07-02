/* jumble - a shuffling routine
 * from: https://twitter.com/colmmacc/status/1012719876706840578
 */
#include <stdio.h>
#include <stdlib.h>

int main(void);

int
main(void)
{
    int i, save;
    int jumble[6] = { 1, 2, 3, 4, 5, 6 };

    for (i=0; i < 6; i++) {
        printf("%d ", jumble[i]);
    }
    printf("\n orginal jumble ^\n");
    
    for (i=0; i < 6; i++) {
        int r = arc4random_uniform(i);
        save = jumble[i];
        jumble[i] = jumble[r];
        jumble[r] = save;
    }

    for (i=0; i < 6; i++) {
        printf("%d ", jumble[i]);
    }
    printf("\n arc jumble ^\n");

    return 0;
}
