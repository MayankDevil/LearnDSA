/*
	57. Evaluate postfix expression statically.
*/
#include<stdio.h>

int STACK[20], index = -1;
// PUSH
void push(int data)
{
	STACK[++index] = data;
}
// POP
int pop()
{
	return STACK[index--];
}
// MAIN
void main()
{
	char *equat, express[20];

	int n1, n2, n3, number;

	puts("\n enter express to evaluate = ");

	equat = gets(express);
	
	while(*equat != '\0')
	{
		if(isdigit(*equat))
		{
			number = *equat - 48;
			push(number);
		}
		else
		{
			n1 = pop();
			n2 = pop();
		
			switch(*equat)
			{
				case '+': n3 = n1 + n2; break;
	
				case '-': n3 = n2 - n1; break;
	
				case '*': n3 = n1 * n2; break;
	
				case '/': n3 = n2 / n1; break;
				
				case '^': n3 = n2 ^ n1; break;
			}
			push(n3);
		}
		equat++;
	}
	printf("\n %s express to evaluate is %d \n",express,pop());
}
// the end
