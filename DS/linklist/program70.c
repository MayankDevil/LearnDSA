/*
	70. Write a program for the linked list dynamically (insertion, deletion, traversing, searching, sorting).
*/
#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *next;
}
*head = NULL,
*tail = NULL,
*p = NULL;

// INSERTION
void insertion(int data)
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
	printf("\n\t _insertion\n");
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
		printf("\n %d",p->data);
		
		p = p->next;
	}
}
// DELETETION
void deletion()
{
	if(head == NULL)
	{
		printf("\n\t _empty\n");
		
		return;
	}
	if(head == tail)
	{
		head = NULL;
		tail = NULL;
	}
	else
	{	
		for(p = head; p->next != NULL; p = p->next) tail = p;
		
		tail->next = NULL;
				
		printf("\n\t _deletion\n");
	}
}
// SORTING
void sort()
{
	int hold;
	
	struct Node *t;
	
	for(p = head; p != NULL; p = p->next)
	{
		for(t = head->next; t != NULL; t = t->next)
		{
			if(p->data < t->data)
			{
				hold = p->data;
				p->data = t->data;
				t->data = hold;
			}
		}
	}
	
	t = head;
	
	head = head->next;
	
	t->next = NULL;
	
	tail->next = t;
	
	puts("\n _sorted");				
}
// SEARCHING
int search(int value)
{
	for(p = head; p != NULL; p = p->next)
		if(p->data == value)
			return 1;
			
	return 0;
}
// MAIN
void main()
{
	insertion(10);
	insertion(11);
	insertion(12);
	insertion(53);
	insertion(41);
	
	traversal();
	
	sort();
	
	traversal();
	
	deletion();
	
	(search(1))? puts("\n_matched") : puts("\n_unmatched");
	(search(1))? puts("\n_matched") : puts("\n_unmatched");
}
