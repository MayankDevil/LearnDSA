/*
	50. Implementation of bracket matching using dynamically.
*/
#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
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
void push(int data)
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
void pop()
{
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
}
// PEEK
int peek()
{
	return tail->data;
}
// PRIORITY
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
// MAIN
void main()
{
	char equation[] = "{[(1+2)+(3*3)}+4}";
		
	int i = 0;

	for(i = 0; equation[i] != '\0'; i++)
	{
		if((equation[i] == '(') || (equation[i] == '[') || (equation[i] == '{'))
		{
			push(priority(equation[i]));
		}
		if((equation[i] == ')') || (equation[i] == ']') || (equation[i] == '}'))
		{
			if(peek() == priority(equation[i])) pop(); else break;
		}
	}
	if(isEmpty())
		puts("\n parenthesis is matched \n");
	else
		puts("\n parenthesis is not matched \n");
}
