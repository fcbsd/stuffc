/* a a time program */
#include <stdio.h>
#include <time.h>

int main(void);

int main(void) {
	time_t now;
	time_t then;
	time_t diff;

	now = time(NULL); /* with the null pointer 
			   * time returns the current time
			   */
	then = 1488214716;

	printf("now: %ld\n", now);
	printf("then: %ld\n", then);

	diff = difftime(now, then);

	printf("diff: %ld\n", diff);
	 

	return 0;
}
