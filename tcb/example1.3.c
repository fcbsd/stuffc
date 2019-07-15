/* Example 1.3
 * Page 15
 */
#include <stdio.h>
#include <stdlib.h>

int main(void);

int
main(void)
{
    int ch;

    ch = getchar();
    while (ch != 'a'){
        if(ch != '\n')
            printf("ch was %c, value %d\n", ch, ch);
        ch = getchar();
    }

    return(EXIT_SUCCESS);
}
