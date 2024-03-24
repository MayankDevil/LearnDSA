/*
	48. Implements the operations, push, pop, peek on integer values using dynamically.
*/
#include <stdio.h>
#include <stdlib.h>

struct dsNode
{
	int data;
	struct dsNode *next;
};
// EMPTY
int isEmpty48(struct dsNode *node)
{
	return (node == NULL)? 1 : 0;
}
// PULL
void pull48(struct dsNode *node)
{
	if(isEmpty48(node))
	{
		printf("\n\t _empty\n");
	
		return;
	}
	struct dsNode *p;
	
	for(p = node; p != NULL; p = p->next) printf("\n %d",p->data);
}
// PEEK
int peek48(struct dsNode *node)
{
	if(isEmpty48(node))
	{
		return -1;
	}
	struct dsNode *p = node;
	
	while(p->next != NULL) p = p->next;
	
	return p->data;
}
// PUSH
struct dsNode *push48(struct dsNode *node, int data)
{
	struct dsNode *p;
	
	p = (struct dsNode *) malloc(sizeof(struct dsNode));
	
	p->data = data;
	p->next = NULL;
	
	if(isEmpty48(node))
	{
		node = p;
	}
	else
	{
		struct dsNode *t = node;
		
		while(t->next != NULL) t = t->next;
		
		t->next = p;
	}
	return node;
}
// POP
int pop48(struct dsNode *node)
{
	if(isEmpty48(node))
	{
		return 0;
	}
	struct dsNode *t = node;
	
	struct dsNode *c = node;
	
	while(t->next != NULL) t = t->next;
	
	node = t;
	
	while(c->next != node) c = c->next;
	
	c->next = NULL;
	
	return 1;
}
// MAIN 
void main()
{
	struct dsNode *header;
	
	header = (struct dsNode *) malloc(sizeof(struct dsNode));

	header = NULL;
	
	pull48(header);
	
	header = push48(header,1);
	header = push48(header,2);
	header = push48(header,3);
	header = push48(header,4);
	
	printf("\n\t _inserted\n");
	
	pull48(header);
	
	if(pop48(header)) printf("\n\t _deleted\n");
	
	if(peek48(header) != -1)printf("\n peek data is %d",peek48(header));
}
