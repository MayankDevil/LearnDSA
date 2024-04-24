/*
	given a number of rows, print a mirror trinagle pattern using character
	input: 5
	output:
	        .
	      . .
	    . . .
	  . . . .
	. . . . .
*/

#include <stdio.h>

void mirrorTriangle(int n)
{
	int o, i;

	for (o = n; o >= 0; o--)
	{
		for (i = 0; i < n; i++)

			if (i < o)
				printf("  ");
			else
				printf(" .");

		printf("\n");
	}
}

int main()
{
	mirrorTriangle(5);

	return 0;
}
