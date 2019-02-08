/* 1.9 Character Arrays
 * P 29 
 */
#include <stdio.h>

#define MAXLINE 512 /* maximum input line size */

int getlocalline(char line[], int maxline);
void copy(char to[], char from[]);
int main(void);

/* print longest input line */
int
main(void)
{
	int len; /* current line length */
	int max; /* maximum length seen so far */
	char line[MAXLINE]; /* current input line */
	char longest[MAXLINE]; /* longest line saved here */

	max = 0;

	while ((len = getlocalline(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	if (max > 0) /* there was a line */
		printf("%s", longest);
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
	while ((to[i] = from[i]) != '\0')
		++i;
}
