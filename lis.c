/* life is short
 * a time conversion program
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SECOND 1
#define MIN (SECOND * 60)
#define HOUR (MIN * 60)
#define DAY (HOUR * 24)

int main(int argc, char *argv[]);
int diff(int, int);
int getdays(void);

int main(int argc, char *argv[]) 
{
	int i, j;
	int m, h, d, date;

	m = h = d = date = 0;

	if (argc > 4 || argc == 1) {
		printf("Too few or too many arguements!\n");
		return EXIT_FAILURE;
	} else 
		i = argc;

	for (j = 1; j < i; j++) {
		if (j == 1) 
			m = atoi(argv[j]) * MIN;
		if (j == 2)
			h = atoi(argv[j]) * HOUR;
		if (j == 3)
			d = atoi(argv[j]) * DAY;
	}

	printf("m: %d h: %d d: %d\n", m, h, d);
	printf("diff: %d\n", diff(h, d));

	date = getdays();

	printf("Date: %d \n", date);
	return EXIT_SUCCESS;
}

int diff(int stt, int endt) {
	/* return the difference */
	return endt - stt;
}

int getdays(void)
{
	int days, seconds;
	printf("Please enter number of days: ");
	scanf("%d", &days);
	seconds = days * DAY;
	return seconds;
}
