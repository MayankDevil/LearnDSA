/*
	given a number of rows, print a  right angle tringle patter using any symbol
	input:5
	output:
	 .
	 . .
	 . . .
	 . . . .
	 . . . . .
*/

#include <stdio.h>

void rightAngleTriangle(int n)
{
	int o, i;

	for (o = 0; o < n; o++)
	{
		for(i = 0; i < (o + 1); i++) printf(" .");

		printf("\n");
	}
}

int main()
{
	rightAngleTriangle(5);

	return 0;
}
