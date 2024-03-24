/*
	74. Write a program to store a polynomial equation in linked list dynamically.
*/
#include <stdio.h>
#include <stdlib.h>

struct Node
{
	char data;
	struct Node *next;
}
*head = NULL,
*tail = NULL,
*p = NULL;

// INSERTION
void insertion(char data)
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
// TRAVERSAL
void traversal()
{
	if(head == NULL && tail == NULL)
	{
		printf("\n\t _empty\n");
		
		return;
	}
	p = head;
	
	while(p != NULL)
	{
		printf("%c",p->data);
		
		p = p->next;
	}
}
// MAIN
void main()
{	
	char polynomial[20];
	
	puts("\n enter the polynomial = ");
	gets(polynomial);
	
	int i = 0;
	
	while(polynomial[i] != NULL)
	{
		insertion(polynomial[i]);
		
		i++;	
	}
	traversal(); 
}
