/* Exercise 1.5
 * Use the function from exercise 1.3 to read a sequence of numbers.
 * then print output in binary, decimal, and hexadecimal.
 * Do not use the features of printf that not been introduced so far 
 * in The C Book.
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
void binary(int);
void hexadecimal(int);

int
main(void)
{
    int ch;
    int i;
    int number[ARSIZE] = { 0 };
    int numseq[ARSIZE] = { 0 };
    int count = 0;
    int seqcount = 0;

    printf("Enter numbers followed by `Enter`, `Ctrl-D` to sort them.\n");

    ch = getchar();

    while(ch != EOF) {
        if(ch == '\n') {
            numseq[seqcount] = convert(number, count);
            seqcount += 1;
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

    /* print number sequence */
    for(i = 0; i < seqcount; i++) {
        binary(numseq[i]);
        hexadecimal(numseq[i]);
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

/* function to print binary from integer passed */
void
binary(int number)
{
    printf("%d is decimal", number);
    printf("need to write binary conversion :~)\n");
}

/* function to print hexadecimal from integer passed */
void
hexadecimal(int number)
{
    printf("%d is decimal", number);
    printf("need to write hex conversion :~)\n");
}
