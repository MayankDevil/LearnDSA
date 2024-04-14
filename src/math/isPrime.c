/*
	given a integer 'num' write a function to determine if it is prime number

	input:

	num (1<=num<=INT_MAX)

	output:

	return 1 if num is a prime number.
	return 0 otherwise.
*/

#include <stdio.h>

int isPrime(int num)
{
	int i;

	for (i = 2; i < num; i++)
		if ((num%i) == 0)
			return 0;

	return 1;
}

int main()
{
	printf("5,6 is prime %d %d", isPrime(5), isPrime(4));

	return 0;
}
