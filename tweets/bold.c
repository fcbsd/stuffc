/* Terminals
 * http://xn--rpa.cc/irl/term.html
 */
#include <unistd.h>

#define szstr(str) str,sizeof(str)

int
main()
{
    write(1, szstr("plain text - \x1b[1mbold text\x1b[0m - plain text\n"));

    return 0;
}
