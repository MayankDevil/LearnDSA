/*
	given a positive integer 'num', write a function to check if it's a perfect square

	input: 14 and 16

	explanation: a number that can be expressed as the product of an integer with itself (a*b & a=b)

	output:

	return 1 if is perfect square
	return 0 otherwise
*/

#include <stdio.h>

int isPerfectSquare(int num)
{
	int i;

	for (i = 2; i <= (num/2); i++)
		if ((i*i) == num)
			return 1;
	return 0;
}

int main()
{
	printf("16 12 is perfect square %d %d", isPerfectSquare(16), isPerfectSquare(12));

	return 0;
}
