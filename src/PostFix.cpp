/*
	[ POSTFIX ]------------------
*/
#include<stdio.h>

char STACK[20];

int index = -1;

// EMPTY
int isEmpty()
{
	return (index == -1)? 1: 0;
}
// PUSH
void push(char data)
{
	STACK[++index] = data;
}
// PEEK
char peek()
{
	return STACK[index];
}
// POP
char pop()
{
	return (index == -1)? -1 : STACK[index--];
}
// PRIORITY
int priority(char o)
{
	switch(o)
	{
		case '(' : return 0;
		case '+' : 
		case '-' : return 1;
		case '*' : 
		case '/' : return 2;
		case '^' : return 3;
	}
}
// OPREND
int isOprend(char o)
{
	return ((o > 48 && o < 57) || (o >= 65 && o <= 90) || (o >= 97 && o <= 122))? 1 : 0;
}
// MAIN
int main()
{
	char n, *equation, expression[20];
	
	puts("\n input infix expression convert into postfix =\n");
	
	equation = gets(expression);
	
	while(*equation != '\0')
	{
		if(isOprend(*equation))
		{
			printf("%c",*equation);
		}
		else if(*equation == '(')
		{
			push(*equation);
		}
		else if(*equation == ')')
		{
			while((n = pop()) != '(') printf("%c", n);
		}
		else
		{
			while(priority(peek()) >= priority(*equation)) printf("%c",pop());
			
			push(*equation);
		}
		equation++;
	}
	while(!(isEmpty())) printf("%c",pop());
	
	return 0;
}
// The end
