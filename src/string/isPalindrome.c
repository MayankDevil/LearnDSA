/*
	give a string determine if it is palindrome, considering only aplhanumeric characters and ignoring cases.

	input: "a man, a plan, a canal: panama."

	output: true
*/

#include <stdio.h>
#include <string.h>

int isPalindrome(char *str)
{
	int i, size = 0;
	char s[strlen(str)];

	// set alphanumeric characters in 's'

	for (i = 0; str[i] != '\0'; i++)
		if ((str[i] >= '0' && str[i] <= '9')||(str[i] >= 'a' && str[i] <= 'z')||(str[i] >= 'A' && str[i] == 'Z'))
			s[i] == str[i];

	size = strlen(s);
	i = 0;

	// check palindrome

	for (i = 0; i < (size/2); i++)
		if (s[size--] != s[i])
			return 0;

	return 1;
}

int main()
{
	char *str = "a man, a plan, a canal: panama.";

	printf(" is plindrome %d", isPalindrome(str));

	return 0;
}
