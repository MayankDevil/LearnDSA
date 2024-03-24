/*
	78. Remove all the nodes after the middle node of a sorted linked lsit.
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
// ERASE MIDDLE HALF
void eraseMiddleHalf()
{
	int i, middle, size = 0;
	
	for(p = head; p != NULL; p = p->next) size++;
	
	middle = size / 2;
	
	p = head;
	
	for(i = 0; i < middle; i++) p = p->next;
	
	p->next = NULL;
}
// MAIN
void main()
{
	insertion(1);
	insertion(2);
	insertion(3);
	insertion(4);
	insertion(5);
	insertion(6);
	insertion(7);
	
	puts("\n inserted data");
	
	traversal();
	
	eraseMiddleHalf();
	
	puts("\n after erase middle half");
	
	traversal();
}
