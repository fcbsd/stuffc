/* Exercise 1-19
 * Write a program to reverse a string
 *
 * Copyright (c) Fred Crowson <fcbsd@crowsons.com>
 */

#include <stdio.h>
#include <string.h>

#define  MAX 512 /* maximum characters in string */

int main(void);
int reverse(char s[MAX]);

int 
main(void)
{
    char words[MAX] = "william";

    reverse(words);

    return 0;
}

int 
reverse(char s[MAX])
{
    int i = 0;
    char new[MAX];
    int j  = strlen(s);
    while ( i <= strlen(s))
    {
        new[i] = s[j-1];
        i++;
        j--;
        printf("s: %c n: %c \n", s[i], new[i]);
    }
    new[i++] = '\0';
    printf("%s is %s", s, new);
    return 0;
}
