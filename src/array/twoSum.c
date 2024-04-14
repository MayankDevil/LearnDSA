/*
	given an array of integers 'nums' and an integer 'target', write a function in c to return the indices of the two numbers suc that they add up to 'target'.

	input:

	nums = an aray of integer.
	size = the number of element the arry nums
	target = the target sum
	returnsize = a pointer to an integer to store the sise of the returned array

	input : 2,7,11,15

	explanation : a[0] + a[1] = 9 = target

	output : 0,1
*/

#include <stdio.h>

int *twoSum(int *nums, int size, int target, int *return_size)
{
	int o,i;

	for (o = 0; o < size; o++)
		for (i = o; i < size; i++)
			if ((nums[o] + nums[i]) == target)
			{
				return_size[0] = o;
				return_size[1] = i;
			}
	return return_size;
}

int main()
{
	int data[] = {2,7,11,15}, size = sizeof(data) / sizeof(data[0]);

	int *result;

	twoSum(data, size, 13, result);

	printf("%d %d", result[0],result[1]);

	return 0;
}

