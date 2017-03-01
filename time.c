/* a a time program */
#include <stdio.h>
#include <time.h>

#define MINS 60 /* seconds in a minute */
#define HRS (MINS * 60) /* seconds in an hour */

int main(void);
int timediff(int time);
/* Global variables */
int hours = 0;
int mins = 0;

int main(void) {
	time_t now;
	time_t then;
	time_t diff;

	now = time(NULL); /* with the null pointer 
			   * time returns the current time
			   */
	then = 1488214716;

	printf("now: %lld\n", now);
	printf("then: %lld\n", then);
	printf("In secs h: %d m: %d\n", HRS, MINS);

	diff = difftime(now, then);

	printf("diff: %lld\n", diff);

	timediff(diff); 
	printf("h: %d m: %d\n", hours, mins);

	return 0;
}

int timediff(int time) {
	int remainder;

	remainder = time % HRS;
	hours = time / HRS;
	mins = remainder % MINS;

	printf("hours: %d\n", hours);
	printf("mins: %d\n", mins);

	return 0;
}
