/*
	[ DOUBLE LIST ]------------------------------
	- Double List : end at last bond
	- Forward List : move only next
	- Free List : not limit bond depend to RAM
*/
#include <stdio.h>
#include <stdlib.h>
/*
	[data structure] :
*/
struct dsNode
{
	int data;
	struct Node *next;
}
*head = NULL,
*foot = NULL,
*node = NULL;

/*
	[listLength function] : return length of link list
*/
int listLength()
{
	int index = 0;
	
	for(node = head; node != NULL; node = node->next)
	{
		foot = node;
		
		index ++;	
	}
	return index;
}
/*
	[printList function] : traversal link list all data
*/
void printList()
{
	if(head == NULL && foot == NULL)
	{
		printf("\n\t _[LIST EMEPTY] preset to not any data here!\n");
		
		return;
	}
	node = head;
	
	while(node != NULL)
	{
		printf("\n %d",node->data);
		
		node = node->next;
	}
}
/*
	[printListHead function] : print link list first data and next address
*/
void printListHead()
{
	if(f_bond == NULL)
	{
		printf("\n\t _[LIST EMEPTY] not begin data here!\n");
		
		return;
	}
	printf("\n Link list first data is %d & next is %u\n",head->data,head->next);
}
/*
	[printListFoot function] : print link list last data and perivous address
*/
void printListFoot()
{
	if(l_bond == NULL)
	{
		printf("\n\t _[LIST EMEPTY] not end data here!\n");
		
		return;
	}
	printf("\n Link list last data is %d & perivous is %u\n",foot->data,foot->perivous);
}

/*
	[printReverse function] : traversal reverse link list all data
*/
void printReverse()
{
	if(head == NULL && foot == NULL)
	{
		printf("\n\t _[LIST EMEPTY] preset to not any data here!\n");
		
		return;
	}
	node = foot;
	
	while(node != NULL)
	{
		printf("\n %d",node->data);
		
		node = node->perivous;
	}
}
/*
	[insertAtFront function] : insert data in front
*/
void insertAtFront()
{
	struct dsNode *p;
	
	p = (struct dsNode *) malloc(sizeof(struct dsNode));
	
	printf("\n input data = ");
		
	scanf("%d",&(p->data));
	
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
	}
	printf("\n\t _[DATA INSERTED] in the begining at list\n");
}
/*
	[insertAtBack function] : insert data in back
*/
void insertAtBack()
{
	struct dsNode *p;
	
	p = (struct dsNode *) malloc(sizeof(struct dsNode));
	
	printf("\n input data = ");
		
	scanf("%d",&(p->data));
	
	p->next = NULL;
	
	p->perivous = NULL;
	
	if(head == NULL)
	{
		head = p;
		
		foot = p;
	}
	else
	{	
		foot = p;
		
		node = head;
		
		while(node->next != NULL) node = node->next;
		
		foot->perivous = node;
		
		node->next = foot;
	}
	printf("\n\t _[DATA INSERTED] in the ending at list\n");
}
/*
	[insertAtBetween function] : insert data bwteen in link list
*/
void insertAtBetween()
{
	if(head == NULL)
	{
		printf("\n\t _[LESS DATA] require head or foot not null\n");
		
		return;
	}
	int bond;
	
	struct dsNode *p, *t;
	
	p = (struct dsNode *) malloc(sizeof(struct dsNode));
	
	t = (struct dsNode *) malloc(sizeof(struct dsNode));
	
	printf("\n input data = ");
		
	scanf("%d",&(p->data));
	
	p->next = NULL;
	
	p->perivous = NULL;
	
	printf("\n enter bond between head and foot = ");
	
	scanf("%d",&bond);

	for(node = head; 0 != bond-1; bond--) node = node->next;
	
	t = node->next;
	
	node->next = p;
	
	p->perivous = node;
	
	p->next = t;
	
	t->perivous = p;
	
	printf("\n\t _[DATA INSERTED] in the begining at list\n");
}
/*
	[delAll function] : delete all link list data
*/
void delAll()
{
	if(head == NULL && foot == NULL)
	{
		printf("\n\t _[DATA DELETED] list already empty\n");
		
		return;
	}		
	while(head != NULL)
	{	
		node = head->next;
		
		head->data = NULL;
		head->next = NULL;
		head->perivous = NULL;
	
		head = node;
	}
	foot = NULL;
	head = NULL;
	
	printf("\n\t _[ALL DETLTED] list is empty\n");
}
/*
	[delAtFront function] : delete at link list first data
*/
void delAtFront()
{
	if(head == NULL)
	{
		printf("\n\t _[LIST EMEPTY] no any data present here!\n");
		
		return;
	}
	node = head->next;
	
	head = node;
	
	head->perivous = NULL;
	
	printf("\n\t _[DATA DELETED] in the begining at list\n");
}
/*
	[delAtBack function] : delete at link list last data
*/
void delAtBack()
{
	if(head == NULL)
	{
		printf("\n\t _[LIST EMEPTY] no any data present here!\n");
		
		return;
	}
	if(head == foot)
	{
		head = NULL;
		foot = NULL;
	}
	else
	{	
		for(node = head; node->next != NULL; node = node->next) foot = node;
		
		foot->next = NULL;
	}
	printf("\n\t _[DATA DELETED] in the ending at list\n");
}
/*
	[updateAtHead function] :
*/
void updateAtHead()
{
	if(head == NULL)
	{
		printf("\n\t _[LIST EMPTY] no any data here\n");
		
		return;
	}
	printf("\n update head = ");
		
	scanf("%d",&(head->data));
		
	printf("\n\t _[HEAD UPDATED] in the ending at list\n");
}
/*
	[updateAtFoot function] :
*/
void updateAtFoot()
{
	if(foot == NULL && head == NULL)
	{
		printf("\n\t _[LIST EMPTY] no any data here\n");
		
		return;
	}
	printf("\n update head = ");
		
	scanf("%d",&(foot->data));
		
	printf("\n\t _[FOOT UPDATED] in the ending at list\n");
}
/*
	[updateAtBetween function] : update data between link list
*/
void updateAtBetween()
{
	if(head == NULL || head == foot)
	{
		printf("\n\t _[LESS DATA] require more data to update list\n");
	}
	int bond;
	
	printf("\n enter bond between head and foot = ");
	
	scanf("%d",&bond);
	
	for(node = head; 0 != bond-1; bond--) node = node->next;
	
	printf("\n input data = ");
		
	scanf("%d",&(node->data));

	printf("\n\t _[DATA INSERTED] in the ending at list\n");
}
/*
	[listSearch] : serach index of the data
*/
void listSearch()
{
	if(head == NULL || head == foot)
	{
		printf("\n\t _[LESS DATA] require more data to update list\n");
	}
	int search_value, find = 0, index = 1;
	
	printf("\n input search value = ");
	
	scanf("%d",&search_value);
	
	for(node = head; node != NULL; node = node->next)
	{		
		if(search_value == node->data)
		{
			find = 1;
			
			break;
		}
		index ++;
	}
	if(find)
		printf("\n\t _[DATA MATCHED] in %d\n",index);
	else
		printf("\n\t _[DATA UNMATCHED]\n");
}
/*
	[main function] : link list control
*/
int main(int argc, char *argv[])
{
	int choice;
	
	printf("\n-----{ PROGRAM : DOUBLE LINK LIST }-----\n");
	
	while(1)
	{
		printf("\n --------------------------------"
			"\n PRESS 0 : Exit"
			"\n Press 1 : listLength"
			"\n Press 2 : printList"
			"\n Press 3 : printListHead"
			"\n Press 4 : printListFoot"
			"\n Press 5 : printReverse"
			"\n Press 6 : insertAtFront"
			"\n Press 7 : insertAtBack"
			"\n Press 8 : insertAtBetween"
			"\n Press 9 : delAtFront"
			"\n Press 10 : delAtBack"
			"\n Press 11 : delAll"
			"\n Press 12 : updateAtHead"
			"\n Press 13 : updateAtFoot"
			"\n Press 14 : updateAtBetween"
			"\n Press 15 : searchList"
			"\n\n"
			"\t ( Enter choice number )= "
		);
		
		scanf("%d",&choice);
			
		switch(choice)
		{
			case 15 : searchList();
			
				break;
				
			case 14 : updateAtBetween();
			
				break;
				
			case 13 : updateAtFoot();
			
				break;
			
			case 12 : updateAtHead();
			
				break;
				
			case 11 : delAll();
			
				break;
				
			case 10 : delAtBack();
			
				break;
				
			case 9 : delAtFront();
			
				break;
				
			case 8 : insertAtBetween();
			
				break;
			
			case 7 : insertAtBack();
				
				break;
			
			case 6 : insertAtFront();
				
				break;
			
			case 5 : printReverse();
				
				break;
			
			case 4 : printListFoot();
			
				break;
				
			case 3 : printListHead();
			
				break;
				
			case 2 : printList();
			
				break;
				
			case 1 : printf("\n length of link list is %d",listLength());
				
				break;
				
			case 0 : printf("\n\n\t [THE END] -----\n");
				
				return 0;
				
			default : printf("\n\t Error : choice is invalid! \n");
		}
	}
	return 0;
}
// -------------------------------------------------------------------------
