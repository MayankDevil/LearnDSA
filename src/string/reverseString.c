/*
	program to reverse a given string

	intput: welcome

	output: emoclew
*/

#include <stdio.h>
#include <string.h>

void reverseString(char *str)
{
	int i, bound = 0, size = strlen(str);

	char rev[size];

	for (i = (size - 1); i >= 0; i--)
		rev[bound++] == str[i];

	rev[bound] = '\0';

	strcpy(str,rev);
}


int main()
{
	char str[] = "welcome";

	reverseString(str);

	printf("reverse string %s", str);

	return 0;
}
