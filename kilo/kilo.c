/* Editor Turorial
 * http://viewsourcecode.org/snaptoken/kilo/
 */
#include <termios.h>
#include <unistd.h>

int main(void);
void enableRawMode(void);

void 
enableRawMode()
{
	struct termios raw;
	tcgetattr(STDIN_FILENO, &raw);
	raw.c_lflag &= ~(ECHO);
	tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw);
}

int
main()
{
	char c;

	while (read(STDIN_FILENO, &c, 1) == 1 && c != 'q');

	return 0;
}
