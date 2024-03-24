/*
	76. Find the middle element of the linked list.
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
// LENGTH
int length()
{
	int size = 0;
	
	for(p = head; p != NULL; p = p->next) size++;
	
	return size;
}
// MIDDLE ELEMENTS
int middleElement(int size)
{
	int i, middle = size / 2;
	
	p = head;
	
	for(i = 0; i < middle; i++) p = p->next;
	
	return p->data;
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
	
	printf("\n inserted data");
	
	traversal();
	
	printf("\n middle element is %d",middleElement(length()));
}

