/*
	program to check if a given year is leap year or not

	intput : 2024

	output :

	return 1 if is leap year
	return 0 otherwise
*/

#include <stdio.h>

int isLeapYear(int year)
{
	if ((year%4) == 0)
		return 1;
	else
		return 0;

	// return ((year%4) == 0) 1: 0;
}

int main()
{
	printf("2023,2024 is leep %d %d", isLeapYear(2023), isLeapYear(2024));

	return 0;
}
