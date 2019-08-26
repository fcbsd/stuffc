/* Terminals
 * http://xn--rpa.cc/irl/term.html
 * by Lexi Summer Hale
 */
#include <unistd.h>
#define szstr(str) str,sizeof(str) - 1

#define     plain "0" /* or "" */
#define        no "2"
#define    bright "1"
#define       dim "2"
#define    italic "3"
#define underline "4"
#define   reverse "7"
#define      with ";"
#define  ansi_esc "\x1b"
#define fmt(style) ansi_esc "[" style "m"

int
main()
{
    write(1, szstr( "plain text" fmt(plain) " - "
                fmt(bright) "bright text" fmt(no bright) " - "
                fmt(dim)    "dim text"  fmt(no dim) " - "
                fmt(italic) "italic text" fmt(no italic) " - "
                fmt(reverse)    "reverse video" fmt(plain) " - "
                fmt(underline)  "underlined text\n" fmt(no underline)
                )
         );

    write(1, szstr( fmt(underline with bright) "some text\n" fmt(plain)));

    return 0;
}
