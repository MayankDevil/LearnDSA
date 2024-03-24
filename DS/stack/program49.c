/*
	49. Reverse a string using dynamically.
*/
#include<stdio.h>
#include<stdlib.h>

struct Node49
{
	int data;
	struct Node49 *next;
};
// PUSH
struct Node49 *push49(struct Node49 *node, int data)
{
	struct Node49 *p;
	
	p = (struct Node49 *) malloc(sizeof(struct Node49));
	
	p->data = data;
	p->next = NULL;
	
	if(node == NULL)
	{
		node = p;
	}
	else
	{
		struct Node49 *t = node;
		
		while(t->next != NULL) t = t->next;
		
		t->next = p;
	}
	return node;
}
// PEEK
int peek49(struct Node49 *node)
{
	struct Node49 *p = node;
	
	while(p->next != NULL) p = p->next;
	
	return p->data;
}
// POP
void pop49(struct Node49 *node)
{
	struct Node49 *t = node;
	
	struct Node49 *c = node;
	
	while(t->next != NULL) t = t->next;
	
	node = t;
	
	while(c->next != node) c = c->next;
	
	c->next = NULL;
}
// MAIN 
void main()
{
	char string[10] = "oh! my god";
	
	int i;
	
	struct Node49 *header;
	
	header = (struct Node49 *) malloc(sizeof(struct Node49));
	

	header = NULL;
	
	for(i = 0; i < sizeof(string) - 1; i++) header = push49(header,string[i]);
	
	for(i = 0; i < sizeof(string) - 1; i++)
	{
		printf("%c",peek49(header));
		
		pop49(header);
	}
}
