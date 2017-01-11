/* C Primer Plus 5th Edition
 * Programming Exercies 7
 *
 * Copyright (c) 2017 Fred Crowson <fcbsd@crowsons.com>
 */
#include <stdio.h>

#define TAXRATE 0.15	/* Starting Tax Rate */
#define TAXSTEP 0.05	/* Taxes go up in 5% intervals */
#define TAXBANDA 300	/* First Tax Band */
#define TAXBANDB 450	/* Second Tax Band */
#define BASICPAY 10.00	/* Basic Pay Rate */

int main(void);
float taxes(float);

int main(void) {
	int hours;
	float gross; /* Gross Pay */
	float tax; /* Taxes owed */

	printf("Please enter hours worked in week: ");

	scanf("%d", &hours);

	gross = (float) hours * BASICPAY;

	tax = taxes(gross);

	printf("Hours worked: %d\n", hours);
	printf("Gross Pay: %0.2f\n", gross);
	printf("Tax Owed: %0.2f\n", tax);
	printf("Net Pay: %0.2f\n", gross - tax); /* no need for netpay var */

	return 0;
}

float taxes(float gp) {
	float totaltax = 0.0;
	if (gp > TAXBANDB) {
		totaltax = (TAXBANDA * TAXRATE) + 
			((TAXBANDB - TAXBANDA) * (TAXRATE + TAXSTEP)) +
			(gp - TAXBANDB) * (TAXRATE + (TAXSTEP * 2));
	}
	if (gp <= TAXBANDB && gp > TAXBANDA) {
		totaltax = (TAXBANDA * TAXRATE) + 
			((gp - TAXBANDA) * (TAXRATE + TAXSTEP));
	}
	if (gp <= TAXBANDA) {
		totaltax = (gp * TAXRATE);
	}
	return totaltax;
}
