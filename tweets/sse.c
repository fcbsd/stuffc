/* Sizeof may have side effects
 * https://multun.net/obscure-c-features.html
 */
#include <stdio.h>

int
main(void)
{
    return sizeof(int[printf("oops\n")]);
}
