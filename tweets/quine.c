/* quine.c
 * https://www.youtube.com/watch?v=ar9WRwCiSr0
 * This coredumps on OpenBSD but on CentOS it generates:
 * main(a){printf(a="main(a){printf(a=%c%s%c,34,a,34);}",34,a,34);}
 * */
#include <stdio.h>

int
main(a)
{
    printf(a = "main(a){printf(a= %c%s%c,34,a,34);}",
            34,a,34);
}
