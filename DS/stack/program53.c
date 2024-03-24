/*
	53. Convert infix to postfix using array.
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
	char n, *equat, express[20];
	
	puts("\n input infix express convert into postfix =\n");
	
	equat = gets(express);
	
	while(*equat != '\0')
	{
		if(isOprend(*equat))
		{
			printf("%c",*equat);
		}
		else if(*equat == '(')
		{
			push(*equat);
		}
		else if(*equat == ')')
		{
			while((n = pop()) != '(') printf("%c", n);
		}
		else
		{
			while(priority(peek()) >= priority(*equat)) printf("%c",pop());
			
			push(*equat);
		}
		equat++;
	}
	while(!(isEmpty())) printf("%c",pop());
	
	return 0;
}
// the end
