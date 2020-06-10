/*
 * Not What It Seems
 * https://bowero.nl/blog/2020/06/09/how-the-most-upvoted-c-question-was-another-question/
 *
 */
#include <stdio.h>

int
main(void)
{
    int x = 10;
    /* this should be x-- > 0 
     * --> is not an operator whitespace is not significant
     */
    while (x --> 0) /* x goes to 0 */
    {
        printf("%d ", x);
    }

return 0;
}
