#include <stdio.h>
int main(void);
int mystrlen(char []);

int
main(void)
{
	char s[100] = "hello, " "world";

	printf("%s \n", s);
	printf("length of string: %d \n", mystrlen(s));
	printf("length of string: %d \n", mystrlen("X"));

	return 0;
}

int 
mystrlen(char s[100])
{
	int i = 0;
	while ( s[i] != '\0')
		i++;
	return i;
}

