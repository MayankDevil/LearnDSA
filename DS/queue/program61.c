/*
	61. Implementing the simple queue using dynamically.
*/
#include<stdio.h>
#include<stdlib.h>

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
	return (node == NULL)? 1 : 0;
}
/*
	PULL : return all data
*/
void all(struct dsNode *node)
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
int end(struct dsNode *node)
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
	INSERT : return node pointer as new header
*/
struct dsNode *insert(struct dsNode *node, int data)
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
	REMOVE : second last next set null
*/
struct dsNode *erase(struct dsNode *node)
{
	if(isEmpty(node))
	{
		return NULL;
	}
	struct dsNode *t = node->next;
	
	node->next = NULL;
	
	node = t;

	return node;
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
	
	header = insert(header,1);
	header = insert(header,2);
	header = insert(header,3);
	header = insert(header,4);
	header = insert(header,5);
	
	printf("\n\t _insert");
	
	if(end(header)) printf("\n\t end value is %d",end(header));
	
	if(header = erase(header)) printf("\n\t _remove");
	if(header = erase(header)) printf("\n\t _remove");
	if(header = erase(header)) printf("\n\t _remove");
	if(header = erase(header)) printf("\n\t _remove");
	if(header = erase(header)) printf("\n\t _remove");
	if(header = erase(header)) printf("\n\t _remove");
	
	all(header);
	
	printf("\n\t _all");
	
	return 0;
}
