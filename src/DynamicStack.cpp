/*
	Dynamic Stack ---------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

struct dsNode
{
	int data;
	struct dsNode *next;
};
/*
	isEmpty : return true & false
*/
int isEmpty(struct dsNode *node)
{
	return (node == NULL)? TRUE : FALSE;
}
/*
	PULL : return all data
*/
void pull(struct dsNode *node)
{
	if(isEmpty(node))
	{
		printf("\n\t _empty\n");
	
		return;
	}
	struct dsNode *p;
	
	for(p = node; p != NULL; p = p->next) printf("\n %d",p->data);
}
/*
	PEEK : return end data
*/
int peek(struct dsNode *node)
{
	if(isEmpty(node))
	{
		return -1;
	}
	struct dsNode *p = node;
	
	while(p->next != NULL) p = p->next;
	
	return p->data;
}
/*
	PUSH : return node pointer as new header
*/
struct dsNode *push(struct dsNode *node, int data)
{
	struct dsNode *p;
	
	p = (struct dsNode *) malloc(sizeof(struct dsNode));
	
	p->data = data;
	p->next = NULL;
	
	if(isEmpty(node))
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
/*
	POP : second last next set null
*/
int pop(struct dsNode *node)
{
	if(isEmpty(node))
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
/*
	MAIN :
*/
int main()
{
	struct dsNode *header;
	
	header = (struct dsNode *) malloc(sizeof(struct dsNode));
	
	//	header->data = 10;
	//	header->next = NULL;
	
	header = NULL;
	
	printf("\n ---{ DYNAMIC QUEUE }--- \n");
	
	header = push(header,1);
	header = push(header,2);
	header = push(header,3);
	header = push(header,4);
	
	printf("\n\t _inserted\n");
	
	pull(header);
	
	if(pop(header)) printf("\n\t _deleted\n");
	
	if(peek(header) != -1)printf("\n peek data is %d",peek(header));
	
	return 0;
}
// THE END }-------
