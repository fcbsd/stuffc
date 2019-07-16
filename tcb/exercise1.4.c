/* Exercise 1.4
 * Use the function that you just wrote to read a sequence of numbers.
 * Put them into an array declared in main, by repeatedly calling the
 * function. Sort them in into ascending order, then print the sorted 
 * list.
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
    int i, j, k;
    int number[ARSIZE] = { 0 };
    int numseq[ARSIZE] = { 0 };
    int temp =  0;
    int count = 0;
    int seqcount = 0;

    printf("Enter numbers followed by `Enter`, `Ctrl-D` to sort them.\n");

    ch = getchar();

    while(ch != EOF) {
        if(ch == '\n') {
            numseq[seqcount] = convert(number, count);
            printf("number is: %d\n", numseq[seqcount]);
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

    /* bubble sort numbers */
    j = 0;
    while(j < seqcount) {
        k = j + 1;
        while(k < seqcount) {
            /* debug printf:
             * printf("sc: %d  %d %d\n", seqcount, j, k);
             */
            if(numseq[j] > numseq[k]) {
            /* swap */
            temp = numseq[j];
            numseq[j] = numseq[k];
            numseq[k] = temp;
            }
            k += 1;
        }
        j += 1;
    }
    /* print number sequence */
    for(i = 0; i < seqcount; i++) {
        printf("%d \n", numseq[i]);
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
