/*
	52. Convert infix to prefix dynamically.
*/
#include<stdio.h>

struct Node
{
	char data;
	struct Node *next;
}
*f_bond = NULL,
*l_bond = NULL,
*t_bond = NULL;

// EMPTY
int isEmpty()
{
	return (f_bond = NULL)? 1 : 0;
}
// PUSH
void push(char data)
{
	struct Node *node = (struct Node *) malloc(sizeof(struct Node));
		
	node->data = data;
	node->next = NULL;
	
	if(f_bond == NULL)
	{
		f_bond = node;
		
		l_bond = node;
	}
	else
	{	
		l_bond = node;
		
		t_bond = f_bond;
		
		while(t_bond->next != NULL) t_bond = t_bond->next;
		
		t_bond->next = l_bond;
	}
}
// PEEK
char peek()
{
	return l_bond->data;
}
// POP
char pop()
{
	if(f_bond->next == NULL)
	{
		free(f_bond);
	
		f_bond = NULL;
	
		l_bond = NULL;
		
		return -1;
	}
	else
	{	
		for(t_bond = f_bond; t_bond->next != NULL; t_bond = t_bond->next) l_bond = t_bond;
		
		l_bond->next = NULL;
		
		return l_bond->data;
	}
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
			while(peek() != '(')
			{
				printf("%c",peek());
				
				pop();
			}
		}
		else
		{
			while(priority(peek()) >= priority(*equat))
			{
				printf("%c",peek());
				pop();	
			}
			
			push(*equat);
		}
		equat++;
	}
	while(!(isEmpty())) printf("%c",pop());
	
	return 0;
}
// the end
