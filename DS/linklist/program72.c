/*
	72. Write a program for the doubly linked list dynamically (insertion, deletion, traversing, searching, sorting).
*/
#include <stdio.h>
#include <stdlib.h>

struct dsNode
{
	int data;
	struct Node *next;
	struct Node *perivous;
}
*head = NULL,
*foot = NULL,
*node = NULL,
*p = NULL,
*t = NULL;

// TRAVERSAL
void traversal()
{
	if(head == NULL && foot == NULL)
	{
		printf("\n\t _empty\n");
		
		return;
	}
	node = foot;
	
	while(node != NULL)
	{
		printf("\n %d",node->data);
		
		node = node->perivous;
	}
	printf("\n\t _traversal\n");
}
// INSERTION
void insertion(int data)
{
	struct dsNode *p;
	
	p = (struct dsNode *) malloc(sizeof(struct dsNode));
	
	p->data = data;
	
	p->next = NULL;
	
	p->perivous = NULL;
	
	if(foot == NULL)
	{
		head = p;
		
		foot = p;
	}
	else
	{	
		node = head;
		
		node->perivous = p;
		
		head = p;
		
		head->next = node;
	}
	printf("\n\t _insertion\n");
}
// DELETION
void deletion()
{
	if(head == NULL)
	{
		printf("\n\t _empty\n");
		
		return;
	}
	node = head->next;
	
	head = node;
	
	head->perivous = NULL;
	
	printf("\n\t _deletion\n");
}
// SORTING
void sort()
{
	int hold;
	
	for(p = foot; p != NULL; p = p->perivous)
	{
		for(t = foot->perivous; t != NULL; t = t->perivous)
		{
			if(p->data < t->data)
			{
				hold = p->data;
				p->data = t->data;
				t->data = hold;
			}
		}
	}
	t = foot->perivous;
	
	t->next = NULL;
	
	p = head;
	
	head->perivous = foot;
	
	foot->next = head;
	
	foot->perivous = NULL;
	
	head = foot;
	
	foot = t;
	
	puts("\n _sorted");			
}
// SEARCHING
int search(int value)
{
	for(node = head; node != NULL; node = node->next)
		if(node->data == value)
			return 1;
			
	return 0;
}
// MAIN
void main()
{
	insertion(5);
	insertion(6);
	insertion(7);
	insertion(10);
	insertion(0);
	
	traversal();
	
	sort();

	deletion();
	
	traversal();
	
	(search(1))? puts("\n_matched") : puts("\n_unmatched");
	(search(1))? puts("\n_matched") : puts("\n_unmatched");
}

