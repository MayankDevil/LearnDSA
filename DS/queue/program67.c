/*
	67. Sort the simple queue implemented dynamically.
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
}
// TRAVERSAL
void traversal()
{
	p = head;
	
	while(p != NULL)
	{
		printf("\n %d",p->data);
		
		p = p->next;
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
}
// MAIN
void main()
{
	insertion(31);
	insertion(20);
	insertion(32);
	insertion(14);
	insertion(50);

	puts("\n _inserted");
	
	traversal();
	
	sort();

	puts("\n _sorted");

	traversal();
}
