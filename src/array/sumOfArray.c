/*
	program get data as array or size of array to return sum of array element

	input :

	1,2,3,4,5

	output:

	15
*/

#include <stdio.h>

int sumOfArray(int data[], int size);

int sumOfArray(int data[], int size)
{
	int i, sum = 0;

	for (i = 0; i < size; i++)
		sum += data[i];

	return sum;
}

int main()
{
	int data[] = {1,2,3,4,5};

	int size = sizeof(data) / sizeof(data[0]);

	printf("sum or array is %d", sumOfArray(data, size));

	return 0;
}
