/*
	given a number of rows, print a top bottom triangle with character

	input: 3
	output
	 +
	 + +
	 + + +
	 + +
	 +
*/

#include <stdio.h>

void topBottomTriangle(int n)
{
	int o, i, s = n;

	for (o = 0; o < ((n + n) - 1); o++)
	{
		s = (o >= n)? s-1: o;

		for (i = 0; i <= s; i++)
		{
			printf(" +");
		}
		printf("\n");
	}
}

int main()
{
	topBottomTriangle(3);

	return 0;
}
