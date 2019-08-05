/* https://twitter.com/mjg59/status/1144339626691158016 
 * On OpenBSD this core dumps, 
 * on Centos it:
 *      prints (null) will gcc
 *      does nothing obvious with clang
 */

#include <stdio.h>

int 
main()
{
    char *s;
    return printf("%s", s); 
}
