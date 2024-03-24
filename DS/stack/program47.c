/*
	47. Implementation of bracket matching using arrays.
*/
#include<stdio.h>

int stack47[5], index47 = -1;
// EMPTY
int isEmpty47()
{
	if(index47 == -1) return 1; else return 0;
}
// PUSH
void push47(int data)
{
	stack47[++index47] = data;
}
// POP
void pop47()
{
	index47--;	
}
// PEEK
int peek47()
{
	return stack47[index47];
}
// PRIORITY
int priority47(char data)
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
void main()
{
	char equation[] = "{1+2/[(2+4)-(2-1)]}";
		
	int i = 0;
	
	while(equation[i] != '\0')
	{
		if((equation[i] == '(') || (equation[i] == '[') || (equation[i] == '{'))
		{
			push47(priority47(equation[i]));
		}
		if(equation[i] == ')' || equation[i] == ']' || equation[i] == '}')
		{
			if(peek47() == priority47(equation[i])) pop47(); else break;
		}
		i++;
	}
	if(isEmpty47())
		puts("\n parenthesis is matched \n");
	else
		puts("\n parenthesis is not matched \n");
}
