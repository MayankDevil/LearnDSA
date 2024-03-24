/*
	[ EVALUATE ]---
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
	char *equation, expression[20];

	int n1, n2, n3, number;

	puts("\n enter expression to evaluate = ");

	equation = gets(expression);
	
	while(*equation != '\0')
	{
		if(isdigit(*equation))
		{
			number = *equation - 48;
			push(number);
		}
		else
		{
			n1 = pop();
			n2 = pop();
		
			switch(*equation)
			{
				case '+': n3 = n1 + n2; break;
	
				case '-': n3 = n2 - n1; break;
	
				case '*': n3 = n1 * n2; break;
	
				case '/': n3 = n2 / n1; break;
				
				case '^': n3 = n2 ^ n1; break;
			}
			push(n3);
		}
		equation++;
	}
	printf("\n %s expression to evaluate is %d \n",expression,pop());
}
// the end
