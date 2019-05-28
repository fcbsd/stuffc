/* Exercise 1-22
 * Write a program to "fold" long input lines into two or more
 * shorter lines after the last non-blank character that occurs
 * before the n-th column of input.  Make sure that your program 
 * does something intelligent with very long lines, and if there
 * are no blanks or tabs before the specified column.
 */

#include <err.h>
#include <stdio.h>
#include <stdlib.h>

#define FOLD 40     /* fold point */
#define MAX 1024    /* max line length */

int main(void);
void usage(void);
void fold(char *,  int);

int 
main (void)
{
    FILE *fp;
    char *line = NULL; /* current input line */
    size_t linesize = 0;
    ssize_t linelength;

    fp = fopen("test.txt", "r"); /* file with content */
    if (fp == NULL)
        usage();

    while ((linelength = getline(&line, &linesize, fp)) != EOF) {
        printf("LL: %ld \n", linelength);
        if(linelength >= FOLD) {
            fold(line, linelength);
            }
    }
    free(line);
    if(ferror(fp))
        err(1, "getline error");

    return 0;
}

/* fold lines */
void 
fold(char line[], int ll)
{
    int i, j = 0;
    for(i = 0; i <= ll; ++i)
    {
        if(j == FOLD) {
            printf("%c", line[i]);
            putchar('\n');
            j = 1;
        } else {
            j++;
            printf("%c", line[i]);
        }
    }
}

/* program usage */
void
usage(void)
{
    extern char *__progname;

    fprintf(stderr,
            "usage: %s \n"
            "check test.txt exists\n",
            __progname);
    exit(1);
}
