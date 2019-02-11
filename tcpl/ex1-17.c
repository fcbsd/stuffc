/* Exercise 1-17
 * Write a program to print all input lines that are longer than
 * 80 characters
 * test.txt as input lines.
 *
 * Based on the example in getdelim(3)
 *
 * Copyright (c) 2019 Fred Crowson <fcbsd@crowsons.com>
 */
#include <err.h>
#include <stdio.h>
#include <stdlib.h>

#define LINE 80 /* line length */

int main (void);

int
main (void)
{
    FILE *fp;
    char *line = NULL; /* current input line */
    size_t linesize = 0;
    ssize_t linelen;
    fp = fopen("test.txt", "r"); /* file with content */

    while ((linelen = getline(&line, &linesize, fp)) != EOF) {
        printf(" %ld ", linelen);
        if(linelen >= LINE)
            fwrite(line, linelen, 1, stdout);
        else
            printf("line too short \n");
    }
    free(line);
    if (ferror(fp))
        err(1, "getline");
    return 0;
}
