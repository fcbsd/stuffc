/* Hexadecimal float with an exponent
 * https://multun.net/obscure-c-features.html
 */
#include <stdio.h>
#include <assert.h>

int
main(void)
{
    return assert(0xap-1 == 5.0);
}
