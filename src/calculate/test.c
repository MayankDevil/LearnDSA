/*
*	---------------------
*	| Testing |
*	---------------------
*/
#include<stdio.h>

/*
	IS NUMBER : if number return 1 else 0
*/
int isNumber(char n)
{
	return (n > 48 && n < 57)? 1 : 0;
}
/*
	PRIORITY : return set priorty number
*/
int priority(char o)
{
	switch(o)
	{
		case '(' : return 0;
		
		case '^' : return 1;
		
		case '/' :
		
		case '*' : return 2;
		
		case '-' :
		
		case '+' : return 3;
	}
}

void postFix()
{
	char expression[20], *equation;
	
	int i = 0;
	
	puts("\n enter infix expression to convertion postfix = \n");
	
	equation = gets(expression);
	
	while(*equation[i] != '\0')
	{
	puts(*equation[i]);		
		i++;
	}
	
	puts(expression);
}

int main()
{
	postFix();
	
	return 0;
}
