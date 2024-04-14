/*
	[ PARENTHESIS MATCHING ]---
*/
#include <stdio.h>

int stack[10], index = -1;
/*
	isEmpty
*/
int isEmpty()
{
	if(index < 0) return 1; else return 0;
}
/*
	Push
*/
void push(int data)
{
	stack[++index] = data;
}
/*
	Pop
*/
void pop()
{
	index--;
}
/*
	Peek
*/
int peek()
{
	return stack[index];
}
/*
	Priority
*/
int priority(char data)
{
	switch(data)
	{
		case '(':
		case ')': return 1;	
		case '[':
		case ']': return 2;	
		case '{':
		case '}': return 3;	
	}
}
/*
	Main
*/
int main()
{
	char equation[] = "{1+2/[(2+4)-(2-1)]}";
	
	int i = 0;
	
	while(equation[i] != '\0')
	{
		if((equation[i] == '(') || (equation[i] == '[') || (equation[i] == '{'))
		{
			push(priority(equation[i]));
		}
		if(equation[i] == ')' || equation[i] == ']' || equation[i] == '}')
		{
			if(peek() == priority(equation[i])) pop(); else break;
		}
		i++;
	}
	if(isEmpty())
		puts("\n parenthesis is matched \n");
	else
		puts("\n parenthesis is not matched \n");
	
	return 0;
}
