/* a a time program */
#include <stdio.h>
#include <time.h>

#define MINS 60 /* seconds in a minute */
#define HRS (MINS * 60) /* seconds in an hour */

int main(void);
time_t gettime(int);
int timediff(int);
int leftovers(int value);

/* Global variables */
int hours = 0;
int mins = 0;

int main(void) {
	time_t now;
	time_t then;
	time_t diff;

	now = gettime(0); 
	then = gettime(1); 

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
	int mins;
	int hours;

	remainder = time % HRS;
	hours = time / HRS;
	mins = leftovers(remainder);

	printf("r: %d\n", remainder);
	printf("hours: %d\n", hours);
	printf("mins: %d\n", mins);

	return 0;
}

int leftovers(int value) {
	int remainder;
	remainder = value % MINS;
	return remainder;
}

time_t gettime(int tval) {
	time_t current;

	if (tval == 0) { 
		/* with the null pointer 
		 * time returns the current time
		 */
		current = time(NULL);
	} else 
		current = 1488214716;

	return current;
}
