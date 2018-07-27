/* Exercise 1-15 K&R
 * Re-write section 1.2 using functions
 *
 * Copyright (c) 2018 Fred Crowson <fcbsd@crowsons.com>
 */
#include <stdio.h>

int main(void);
int convertf(int);

int 
main(void)
{
    int fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        printf("%d\t%d\n", fahr, convertf(fahr));
        fahr = fahr + step;
    }
    return 0;
}

int
convertf(int fahr)
{
    int celsius = 0;

    celsius = 5 * (fahr-32) / 9;

    return celsius;
}
