/*
    71. Write a program for the circular linked list dynamically
    (insertion, deletion, traversing, searching, sorting).
*/
#include <stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}
*head = NULL,
*tail = NULL,
*p = NULL;
// LENGTH
int length()
{
    int i = 0;
    for(p = head; p != tail; p = p->next) i++;
    return i+1;
}
// INSERTION
void insert(int data)
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
        p = tail;
        tail = node;
        tail->next = head;
        p->next = tail;
    }
    puts("\n _inserted");
}
// TRAVERSAL
void traversal()
{
    if(head == NULL)
    {
        puts("\n _empty");
        return;
    }
    for(p = head; p != tail; p = p->next)
        printf("\n %d",p->data);
    printf("\n %d",tail->data);
}
// DELETION
void deletion()
{
    if(head == NULL)
    {
        puts("\n _empty");
        return;
    }
    if(head == tail)
    {
        head = NULL;
        tail = NULL;
    }
    else
    {
        p = head->next;
        head->data = -1;
        head = p;
    }
}
// SEARCHING
int search(int value)
{
    if(tail->data == value) return;

	for(p = head; p != tail; p = p->next)
		if(p->data == value)
			return 1;
			
	return 0;
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

    for(p = head; p != tail; p = p->next)
        d[++i] = p->data;
    d[++i] = tail->data;
    
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
    while(i != -1)
    {
        printf("\n %d",d[i]);
        i--;
    }
	puts("\n _sorted");				
}
// MAIN
void main()
{
    insert(1);
    insert(4);
    insert(2);
    insert(5);
    insert(3);
    
    // traversal();

    // deletion();
    // deletion();
    // deletion();
    // deletion();

    puts("\n _deleted");

    sort();

    (search(1))? puts("_matched"):puts("_unmatched");

    (search(7))? puts("_matched"):puts("_unmatched");
}