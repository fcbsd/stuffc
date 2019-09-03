/* Terminals
 * colors 
 * http://xn--rpa.cc/irl/term.html
 */
#include <unistd.h>

#define szstr(str) str,sizeof(str)

#define fg "3"
#define br_fg "9"
#define bg "4"
#define br_bg "10"
#define with ";"
#define plain ""
#define black "0"
#define red "1"
#define green "2"
#define yellow "3"
#define blue "4"
#define magenta "5"
#define cyan "6"
#define white "7"
#define ansi_esc "\x1b"
#define fmt(style) ansi_esc "[" style "m"

int 
main()
{
    write(1, szstr(
                "plain - "
                fmt(fg blue) "blue" fmt(plain) " - "
                fmt(br_fg blue) "bright blue" fmt(plain) " - "
                fmt(br_bg red) "bright red bg" fmt(plain) " - "
                fmt(fg red br_bg magenta) "urgh red" fmt(plain) "\n"
                )
         );
}
