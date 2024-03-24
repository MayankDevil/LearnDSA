/*
	75. Write a program to add two polynomial equation using linked lists.
*/
#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int coefficent;
	int power;
	struct Node *next;	
};

void insert(struct Node **node, int coefficent, int power)
{
	struct Node *r, *z = *node;
	
	r =(struct Node*)malloc(sizeof(struct Node));
	
	r->coefficent = coefficent;
	r->power = power; 
	
	if(z == NULL)
	{	
		*node = r;
		
		r->next = (struct Node*)malloc(sizeof(struct Node));
		r = r->next;
		r->next = NULL;
	}
	else
	{
		r->next = (struct Node*)malloc(sizeof(struct Node));
		r = r->next;
		r->next = NULL;
	}
}

void plus(struct Node *p1, struct Node *p2, struct Node *p)
{
	while(p1->next && p2->next)
	{
		if(p1->power > p2->power)
		{
			p->power = p1->power;
			p->coefficent = p1->coefficent;
			p1 = p1->next;
		}
		else if(p1->power < p2->power)
		{
			p->power = p2->power;
			p->coefficent = p2->coefficent;
			p2 = p2->next;
		}
		else
		{
			p->power = p1->power;
			p->coefficent = p1->coefficent + p2->coefficent;
			
			p1 = p1->next;
			p2 = p2->next;
		}
		p->next = (struct Node *)malloc(sizeof(struct Node));
		p = p->next;
		p->next = NULL;
	}
	while(p1->next || p2->next)
	{
		if(p1->next)
		{
			p->power = p1->power;
			p->coefficent = p1->coefficent;
			p1 = p1->next;
		}
		if(p2->next)
		{
			p->power = p2->power;
			p->coefficent = p2->coefficent;
			p2 = p2->next;
		}
		p->next = (struct Node *)malloc(sizeof(struct Node));
		p = p->next;
		p->next = NULL;
	}
}

void print(struct Node *node)
{
	while(node->next != NULL)
	{
		printf("%dX(%d)", node->coefficent, node->power);
		
		node = node->next;
		
		if(node->next != NULL) printf("+");
	}
}
// MAIN
void main()
{
	struct Node *p1 = NULL, *p2 = NULL, *p = NULL;
	
	// Create first list of 5x^2 + 4x^1 + 2x^0
	insert(&p1,3,2);
	insert(&p1,2,1);
	insert(&p2,1,0);

	// Create second list of 5x^1 + 5x^0
	insert(&p2,5,2);
	insert(&p2,4,1);
	insert(&p2,5,0);
	
	puts("\n polynomial 1 is = \n"); 
	print(p1);
	
	puts("\n polynomial 2 is = \n"); 
	print(p2);
	
	p = (struct Node *)malloc(sizeof(struct Node));
	
	// Function add two polynomial numbers
	
	plus(p1, p2, p);
	
	// Display resultant List
	puts("\n sum of polynomial is \n");
	
	print(p);
}
