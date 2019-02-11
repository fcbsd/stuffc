/* Exercise 1-18
 * Write a program to remove trailing blanks and tabs from each
 * line of input.
 *
 * Copyright (c) 2019 Fred Crowson <fcbsd@crowsons.com>
 */
#include <stdio.h>

#define MAXLINE 512 	/* maximum input line size */

int getlocalline(char line[], int maxline);
void copy(char to[], char from[]);
int main(void);

/* print input lines without trailing blanks or spaces */
int
main(void)
{
	int len; /* line length */
	int max = 0; /* longest line */
	char line[MAXLINE]; /* current input line */
	char modified[MAXLINE]; /* modified line saved here */

	while ((len = getlocalline(line, MAXLINE)) > 0) {
		copy(modified, line);
		printf("%s", modified);
	}
	return 0;

}

/* getlocalline: read a line into s, return length
 * getline is a predefined function so in this version
 * it is called getlocalline
 */
int 
getlocalline(char s[], int lim)
{
	int c, i;
	for(i = 0; i < lim - 1 && (c=getchar()) != EOF && c !='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void 
copy(char to[], char from[])
{
	int i;
	i = 0;
	while (from[i] != '\0') {
		if( from[i] != '\t')
			to[i] = from[i];
		++i;
	}
}
