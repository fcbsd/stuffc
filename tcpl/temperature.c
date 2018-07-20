/* 
 * K&R
 * Tutorial Introduction
 * Temperature conversions
 */
#include <stdio.h>

#define UPPER	64
#define LOWER	-64
#define STEP	16

int main(void);
float celsius(float);
float fahrenheit(float);
int header(void);

int main(void) {
	int i;
	header();
	for (i = LOWER; i <= UPPER; i = i + STEP) {
		printf("%3d\t %6.1f\t %6.1f\n", 
			i, celsius((float) i), fahrenheit((float) i)
		);
	}

	return 0;
}

float celsius(float fahr) {
	return ((5.0 / 9.0) * (fahr - 32));
}

float fahrenheit(float cels) {
	return ((9.0 * cels) / 5.0 + 32);
}

int header(void) {
	printf("No\tCelcius\tFahrenheit\n");
	return 0;
}
