/* Undefined behaviour
 * https://blog.regehr.org/archives/213
 */
#include <limits.h>
#include <stdio.h>

int 
main (void)
{
    printf("%d\n", (INT_MAX+1) < 0);
    return 0;
}
