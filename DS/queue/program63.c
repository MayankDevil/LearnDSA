/*
    63. Implementing the circular queue using dynamically.
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
// MAIN
void main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    
    traversal();

    deletion();
    deletion();
    deletion();
    deletion();


    puts("\n _deleted");

    traversal();
}