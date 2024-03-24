/*
    73. Write a program for the doubly cirular linked list dynamically
    (insertion, deletion, traversing, searching, sorting).
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
    if(head == NULL)
    {
        puts("\n _empty");
        return;
    }
    for(p = head; p != foot; p = p->next)
        printf("\n %d",p->data);
    printf("\n %d",foot->data);
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
        
        head->perivous = foot;

        foot->next = head;
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

    foot->next = head;
	
	printf("\n\t _deletion\n");
}
// LENGTH
int length()
{
    int i = 0;
    for(p = head; p != foot; p = p->next) i++;
    return i+1;
}
// SORTING
void sort()
{
	if(head == NULL)
    {
        puts("\n _empty");
        return;
    }
    int d[length()], i = -1, out, in, hold;

    for(p = head; p != foot; p = p->next)
        d[++i] = p->data;
    d[++i] = foot->data;
    
    for(out = 0; out < length(); out++)
    {
        for(in = out; in < length(); in++)
        {
            // printf("\n %d %d",d[out],d[in]);
            if(d[out] > d[in])
            {
                hold  = d[out];
                d[out] = d[in];
                d[in] = hold;
            }
        }
    }
    while(i != -1) printf("\n %d",d[i--]);
	puts("\n _sorted");		
}
// SEARCHING
int search(int value)
{
    if(foot->data == value) return 1;

	for(p = head; p != foot; p = p->next)
		if(p->data == value)
			return 1;
			
	return 0;
}
// MAIN
void main()
{
	insertion(1);
	insertion(5);
	insertion(2);
	insertion(4);
	insertion(3);
	
	traversal();
	
	deletion();
	
    sort();

	(search(1))? puts("\n_matched") : puts("\n_unmatched");
	(search(7))? puts("\n_matched") : puts("\n_unmatched");
}
