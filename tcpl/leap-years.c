/* Leap Years
 * 2.4 Declarations
 * 2.5 Arithmetic Operators
 * 2.6 Relational and Logical
 * K&R pages 40 and 41
 */
#include <stdio.h>
#include <stdlib.h>

const char msg[] = "Please Enter a year: ";
int checkyear(int);
int main(void);

int
main(void)
{
	int year;
	printf("%s", msg);
	year = atoi(getchar());
	checkyear(year);
	return 0;
}


int 
checkyear(int year)
{
	int leap = 0;
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		leap = 1;
		printf("%d is a leap year\n", year);
	}
	else
		printf("%d is not a leap year\n", year);
	return leap;
}
