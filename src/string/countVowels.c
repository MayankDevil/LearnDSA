/*
	program to count the number of vowels (a,e,i,o,u) in a given string

	input: hello

	output: 2
*/

#include <stdio.h>

int countVowels(char *str)
{
	int i, vowel_num = 0;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] == 'a'||str[i] == 'A'||str[i] == 'e'||str[i] == 'E'||str[i] == 'i'||str[i] == 'I'||str[i] == 'o'||str[i] == 'O'||str[i] == 'u'||str[i] == 'U')
			vowel_num ++;
	return vowel_num;
}

int main()
{
	printf("number of vowels is %d", countVowels("hello"));

	return 0;
}
