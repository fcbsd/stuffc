/* a a time program */
#include <stdio.h>
#include <time.h>

<<<<<<< HEAD
#define TD 60	/*  time delta */
#define MINS TD /* seconds in a minute */
#define HRS (MINS * TD) /* seconds in an hour */

int main(void);
int timediff(int time);
=======
int main(void);
>>>>>>> cfde616cf4c93cfad3e2d1f55764dfb6ab52180f

int main(void) {
	time_t now;
	time_t then;
	time_t diff;
<<<<<<< HEAD
	int mins;
	int hours;
=======
>>>>>>> cfde616cf4c93cfad3e2d1f55764dfb6ab52180f

	now = time(NULL); /* with the null pointer 
			   * time returns the current time
			   */
	then = 1488214716;

	printf("now: %ld\n", now);
	printf("then: %ld\n", then);
<<<<<<< HEAD
	printf("In secs h: %d m: %d\n", HRS, MINS);
=======
>>>>>>> cfde616cf4c93cfad3e2d1f55764dfb6ab52180f

	diff = difftime(now, then);

	printf("diff: %ld\n", diff);
<<<<<<< HEAD
	hours, mins = timediff(diff); 
	printf("h: %d m: %d\n", hours, mins);

	return 0;
}

int timediff(int time) {
	int hours = 0;
	int mins = 0;
	int remainder;

	remainder = time % HRS;
	hours = time / HRS;
	mins = remainder % MINS;

	printf("hours: %d\n", hours);
	printf("mins: %d\n", mins);

	return hours, mins;
}
=======
	 

	return 0;
}
>>>>>>> cfde616cf4c93cfad3e2d1f55764dfb6ab52180f
