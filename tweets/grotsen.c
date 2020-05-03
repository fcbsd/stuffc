/*
 * https://twitter.com/gro_tsen/status/1256343089465171968/photo/1
 */
#include <stdio.h>

int 
main(void)
{
    int i = 0;
    l: ;

    static int x0 = 42;
    static int x1; x1 = 42;

    int y0 = 42;
    int y1; y1 = 42;

    printf("i=%d, x0=%d, x1=%d y0=%d, y1=%d\n", i, x0, x1, y0, y1);

    x0 = 1729; x1 =1729;
    y0 = 1729; y1 =1729;

    i++;
    if ( i <= 1 )
        goto l;
    return 0;
}
