/* String Functions
 * http://coypu.sdf.org/danger-strlcpy.html
 */
#include <stdio.h>
#include <string.h>

int 
main(void) 
{
    char chararray[6];
    strncpy(chararray, "abcdef", sizeof(chararray));
    strlcpy(chararray, "zyx", sizeof(chararray));

    printf("%c\n", chararray[5]);

    printf("%s\n", chararray);

    return 0;
}
