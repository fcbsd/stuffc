/* printf
 * what does it do?
 * according to ktrace this calls write(2)
 * on OpenBSD.
 * http://www.maizure.org/projects/printf/index.html
 */
#include <stdio.h>

int main(void);

int 
main(void)
{
    printf("h");
    return 0;
}
