/* printf()
 * what does it do?
 * according to ktrace this calls write(2)
 * on OpenBSD.
 * http://www.maizure.org/projects/printf/index.html
 * printf() returns the character count as demonstrated 
 * by this version.
 */
#include <stdio.h>

int main(void);

int 
main(void)
{   int ret;
    ret = printf("hello");
    printf("ret: %d \n", ret);
    return 0;
}
