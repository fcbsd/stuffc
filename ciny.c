/* Learn c in Y minutes */
/* this program currently generates one warning about
 * embedded comments.
 * And segfaults...
 */
#include <stdio.h>
#include <string.h>

/* defines allow the definition of constants */
#define DAYS_IN_YEAR 365
#define DAYSHORT 4
/* enumerations also declare constants */
enum days {SUN = 1, MON, TUE, WED, THU, FRI, SAT};

int main(void)
{
    int i; /* iterator */
    char day[DAYSHORT] = "day";

    /* beware of multi-line comments
     * especially with /* embedded */ printf("ah!\n"); /*
     * comments - luckily clang catches it */

    for(i=0; i < 7; i++)
    {
        printf("loop started\n");
        if(i > 0) {
            printf("in if: %d\n", i);
            switch(i) {
                case 1:
                    strlcpy("Sun", day, DAYSHORT);
                case 2:
                    strlcpy("Mon", day, DAYSHORT);
                case 3:
                    strlcpy("Tue", day, DAYSHORT);
                case 4: 
                    strlcpy("Wed", day, DAYSHORT);
                case 5:
                    strlcpy("Thu", day, DAYSHORT);
                case 6:
                    strlcpy("Fri", day, DAYSHORT);
                case 7:
                    strlcpy("Sat", day, DAYSHORT);
                    break;
                default:
                    break;
            }
            printf("%d %s \n", i, day);
        }
    }

    return 0;
}
