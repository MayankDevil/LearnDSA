/*
	Given a number of rows, print a square patter using asterisks(*) or any other character
	Input: 5
	Output:
	* * * * *
	* * * * *
	* * * * *
	* * * * *
	* * * * *
*/

#include <stdio.h>

void squareStart(int n)
{
	int o, i;

	for (o = 0; o < n; o++)
	{
		for (i = 0; i < n; i++)
		{
			printf(" *");
		}
		printf("\n");
	}

}

int main()
{
	squareStart(5);

	return 0;
}
