/*
	program to find the largest element in an array of integer.

	input:  4,3,5,2,6,1

	output: 6
*/

#include <stdio.h>

int findLargest(int data[], int size)
{
	int i , max = data[0];

	for (i = 0; i < size; i++)
		if (max < data[i])
			max = data[i];

	return max;
}

int main()
{
	int data[] = {4,3,5,2,6,1};

	int size = sizeof(data) / sizeof(data[0]);

	printf("largest element is %d", findLargest(data, size));

	return 0;
}
