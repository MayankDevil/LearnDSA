/*
	65. Implementing the priority queue dynamically.
*/
#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	int key;
	struct  Node *next;
}
*head = NULL,
*tail = NULL,
*p = NULL;

// INSERTION
void insertion(int data, int key)
{
	struct Node *node = (struct Node *) malloc(sizeof(struct Node));
	
	node->data = data;
	node->key = key;
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
	printf("\n _insertion");
}
// SORTING
void sort()
{
	int hold, key;
	
	struct Node *t;
	
	for(p = head; p != NULL; p = p->next)
	{
		for(t = head->next; t != NULL; t = t->next)
		{
			if(p->key < t->key)
			{
				hold = p->data;
				key = p->key;
				p->data = t->data;
				p->key = t->key;
				t->data = hold;
				t->key = key;
			}
		}
	}
	t = head;
	
	head = head->next;
	
	t->next = NULL;
	
	tail->next = t;
	
	puts("\n _sorted");				
}
// TRAVERSAL
void traversal()
{
	if(head == NULL && tail == NULL)
	{
		printf("\n _empty");
		
		return;
	}
	sort();

	p = head;
	
	while(p != NULL)
	{
		printf("\n %d \t %d",p->data,p->key);
		
		p = p->next;
	}
}
// DELETETION
void deletion()
{
	if(head == NULL)
	{
		printf("\n _empty");
		return;
	}
	struct Node *p = head->next;

	head->key = NULL;
	head->data = NULL;
	head->next = NULL;

	head = p;
}
void main()
{
	insertion(1,1);
	insertion(2,2);
	insertion(3,3);
	insertion(4,3);
	insertion(5,1);
	insertion(4,2);
	insertion(5,1);

	traversal();

	deletion();

	traversal();
}