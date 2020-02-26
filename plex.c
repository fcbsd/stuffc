/* googolplex 
 *
 * http://www.fpx.de/fp/Fun/Googolplex/
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int 
main (int argc, char *argv[])
{
    int *vals, *ptr, max;
    if (argc == 2)
        max = atoi (argv[1]);
    else
        max = 100;

    printf("1");

    if ((vals = malloc (( max + 1) * sizeof(int))) == NULL ) {
        fprintf(stderr, "Error allocating memory.\n");
        return 1;
    }

    memset (vals, '\0', (max + 1) * sizeof(int));

    while (!vals[max]) {
        *(ptr = vals) += 1;
        while (*ptr == 10) {
            *ptr++ = 0;
            *ptr += 1;
        }

        printf("0");
    }
    printf("\n");
    free (vals);
    return 0;
}
