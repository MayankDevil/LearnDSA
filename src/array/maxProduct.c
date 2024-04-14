/*
	given an array of integers, find the maximum product of two integers in the array.

	input: 2,3,-4,5,-2

	output: 20
*/

#include <stdio.h>
#include <stdlib.h>

int maxProduct(int data[], int size)
{
	int o, i, max = data[0];

	for (o = 0; o < size; o++)
		for (i = o; i < size; i++)
			if (i!=o)
				if (max < abs(data[o] * data[i]))
					max = abs(data[o] * data[i]);

	return max;
}

int main()
{
	int data[] = {2,3,-4,5,-2};

	printf("max product is %d", maxProduct(data,(sizeof(data)/sizeof(data[0]))));

	return 0;
}
