/* K&R
 * 1.5.4 Word Counting
 *
 */
#include <stdio.h>

#define IN  1   /* inside word */
#define OUT 0   /* outside a word */

int main(void);

/* count lines, words, and characters in input */
int main(void)
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF) {
        ++nc; /* count characters */
        if (c == '\n')
            ++nl; /* count newlines */
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw; /* count words */
        }
    }
    printf("nl:%d nw:%d nc:%d\n", nl, nw, nc);
    return 0;
}
