/* Terminals
 * 256-color palette
 * http://xn--rpa.cc/irl/term.html
 */
#include <unistd.h>

#define szstr(str) str,sizeof(str)

#define with ";"
#define plain ";"
#define wfg(color) "38;5;" #color
#define wbg(color) "48;5;" #color
#define ansi_esc "\x1b"
#define fmt(style) ansi_esc "[" style "m"

int
main()
{
    write(1, szstr("plain - " 
                fmt(wfg(198) with wbg(232)) 
                "rose text on dark grey" 
                fmt(plain) " - " 
                fmt(wfg(232) with wbg(248)) 
                "dark grey on light grey" 
                fmt(plain) " - " 
                fmt(wfg(248) with wbg(232)) 
                "light grey on dark grey" 
                fmt(plain)
                )
            );
    write(1, szstr("\n"));
}
