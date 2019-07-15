/* Exercise 1.3
 * Write a function that returns an integer: the decimal value of a string
 * of digitsthat it reads using getchar().
 * For example if it reads 1 followed by 4 followed by 6 it will return
 * 146. You may assusme that the digits 0-9 are consecutive in the 
 * computers representation  (the Standard says so) and that the function
 * will only have to deal with valid digits are newlines.
 */
#include <stdio.h>
#include <stdlib.h>

#define ASCIIZERO 48 /* integer value of zero */ 
#define ASCIININE 57 /* integer value of nine */
#define ARSIZE 5 /* size of array */

const int powers[ARSIZE] = { 1, 10, 100, 1000, 10000 };

int main(void);
int c2d(char);
int convert(int *, int);

int
main(void)
{
    int ch;
    int i;
    int number[ARSIZE] = { 0 };
    int count = 0;

    ch = getchar();

    while(ch != EOF) {
        if(ch == '\n') {
            printf("number is: %d\n", convert(number, count));
            /* reset integer array and counter */
            for(i = 0; i < ARSIZE; i++) {
                number[i] = 0;
                count = 0;
            }
        }
        number[count] = c2d(ch);
        count += 1;
        ch = getchar();
    }

    exit(EXIT_SUCCESS);
}

/* function to return integer from numbers entered */
int
convert(int num[ARSIZE], int count)
{
    int sum = 0;
    int i = 0;
    count--;
    while(count >= 0) {
        sum += (num[count] * powers[i]);
        count--;
        i++;
    }
    return(sum);
}

/* function to return the integer of the character passed */
int
c2d(char letter)
{
    int number = ASCIIZERO;

    if(letter > ASCIININE || letter < number) 
        return(0); /* not a number */

    return(letter - number);
}
