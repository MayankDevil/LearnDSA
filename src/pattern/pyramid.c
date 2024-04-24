/*
	given a number of rows, print a pyramid pattern using slash(/) or any other character
	input: 5
	output:
	         /
	       / / /
	     / / / / /
	   / / / / / / /
	 / / / / / / / / /
*/

#include <stdio.h>

void pyramid(int n)
{
	int out, in, size = (n-1);

	for (out = n; out >= 0; out--)
	{
		for (in = 0; in < ((n+n)-out); in++)
		{
			if (0 <= size) size--;

			if (in <= out)
				printf("  ");
			else
				printf(" /");
		}
		printf("\n");
	}
}

int main()
{
	pyramid(5);

	return 0;
}
