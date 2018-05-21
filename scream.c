/* @dmofengineering
 * https://twitter.com/dmofengineering/status/991142856835334144
 * Install in /usr/bin/scream
 * UTF-8 (hex) 0xF0, 0x9F, 0x98, 0xB1 is the unicode character:
 *      'face screaming in fear' U+1F631
 */
#include <stdio.h>

int 
main(int argc, char * argv[])
{
    while (1) {
        printf("%c%c%c%c\n", 0xF0, 0x9F, 0x98, 0xB1);
    }
    return 1;
}
