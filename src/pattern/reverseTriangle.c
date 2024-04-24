/*
	given a number of rows, print reverse triangle pattern
	input: 5
	output :
	- - - - -
	- - - -
	- - -
	- -
	-
*/

#include <stdio.h>

void reverseTriangle(int n)
{
	int o,i;

	for (o = n; o != 0; o--)
	{
		for (i = o; i != 0; i--) printf(" -");

		printf("\n");
	}
}

int main()
{
	reverseTriangle(5);

	return 0;
}
