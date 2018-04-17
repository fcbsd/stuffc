/* yes.c iteration 4
 * https://www.reddit.com/r/unix/comments/6gxduc/how_is_gnu_yes_so_fast/
 */
#include <stdlib.h>
#include <string.h>

#define LEN 2
#define TOTAL 8192

int 
main(void)
{
	char yes[LEN] = {'y', '\n'};
	char *buf = malloc(TOTAL);
	int bufused = 0;
	while (bufused < TOTAL) {
		memcpy(buf+bufused, yes, LEN);
		bufused += LEN;
	}
	while(write(1, buf, TOTAL));
	return 1;
}
