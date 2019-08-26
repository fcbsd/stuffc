/* trigraphs
 * need to use -trigraphs with clang for this to compile:
 *  e.g. make flags ARGS=trigraph FLAGS=-trigraphs
 * in general trigraphs will not be needed.
 */
??=include <stdio.h>
??=define MX 327

int
main(void)
{
    int i = 0;

    printf("%d %d\n", i, MX);

    return 0;
}
