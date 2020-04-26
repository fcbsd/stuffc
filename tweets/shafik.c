/* Tweet
 * https://twitter.com/shafikyaghmour/status/1254234295297642496
 * Clang generates a warning, and prints 135
 * gcc gives: error: 'for' loop initial declaration used outside C99 mode
 */

#include <stdio.h>

int
main(void) 
{
    for (size_t i=0; i < 6; ++i) {
        typedef int VLA[i++];
        printf("%zu", i);
    }
    
    return 0;
}
