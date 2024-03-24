/*
	54. Convert infix to postfix dynamically.
*/
#include<stdio.h>
#include<stdlib.h>

struct Node
{
	char data;
	struct Node *next;
}
*head = NULL,
*tail = NULL,
*p = NULL;

// EMPTY
int isEmpty()
{
	return (head == NULL)? 1 : 0;
}
// PUSH
void push(char data)
{
	struct Node *node = (struct Node *) malloc(sizeof(struct Node));
	
	node->data = data;
	
	node->next = NULL;
	
	if(head == NULL)
	{
		head = node;
		
		tail = node;
	}
	else
	{	
		tail = node;
		
		p = head;
		
		while(p->next != NULL) p = p->next;
		
		p->next = tail;
	}
}
// POP
char pop()
{
	if(isEmpty()) return ' ';
	
	if(head == tail)
	{
		head = NULL;
		tail = NULL;
	}
	else
	{	
		for(p = head; p->next != NULL; p = p->next) tail = p;
		
		tail->next = NULL;
	}
	return tail->data;
}
// PEEK
char peek()
{
	return tail->data;
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
	
//	push('a');
//	push('b');
//	push('c');
//	push('d');
//	printf("%c",peek());
//	pop();
//	printf("%c",peek());
//	pop();
//	printf("%c",peek());
//	pop();
//	printf("%c",peek());
	
	return 0;
}
// the end
