/*
	Bsic link list
*/
#include <stdio.h>
#include <stdlib.h>
/*	--------------------------------------------------
	| how to create linklist structre in c language? |
	--------------------------------------------------
	struct_keyword Node_name
	{
		primary key;
		
		forgein key;
		
		unique data;
		
		normal data;
		
		......data-
		
		struct_keyword Node_name *preivous_pointer;
		struct_keyword Node_name *next_pointer;
	};
*/
struct Node
{
	int data;
	struct Node *preivous;
	struct Node *next;
};
/*
	LINK LIST TRAVERSAL 
*/
void printList(struct Node *node)
{
	struct Node *p = node;
	
	while(p != NULL)
	{
		printf("\n %d",node->data);
		p = p->next;
	} 
}

int main()
{
	/*	-------------------------------------------
		flow char present that linklist structure |
		-------------------------------------------
		
		node number address 	memory
		
						-------------------
		node(1)  100	| NULL | 6 |  300 | 
						-------------------
							
						-------------------
		node(2)  300	| 100  | 3 |  400 | 
						-------------------
		
						-------------------
		node(3)  400	| 300  | 9 |  700 | 
						-------------------
		
						-------------------
		node(4)  700	| 400  | 1 |  900 | 
						-------------------
		
						-------------------
		node(5)  900	| 700  | 5 | NULL | 
						-------------------
						
		============	6 3 9 1 5
		
		Link list Rules :-
		
		1. first node call header
		
		2. node->next point after node address else NULL
		
		3. node->perivous point before node address else NULL
		
		4. link list cantinue while node next | perivous != NULL 
		
		[ link list Traversal ] :-
		
		1. FORWARD TRAVERSAL :
		
			{ continue while node next != NULL }
		
		2. BACKWARD TRAVERSAL :
		
			{ continue while node perivous != NULL }
		
	*/
	struct Node *header;
	
	header = (struct Node *) malloc(sizeof(struct Node));
	
	header->data = 10;
	header->next = two;
	header->preivous = NULL;
	
	
	struct Node *two;
	
	second = (struct Node *) malloc(sizeof(struct Node));
	
	two->data = 10;
	two->next = three;
	two->preivous = header;
	
	struct Node *three;
	
	three = (struct Node *) malloc(sizeof(struct Node));
	
	three->data = 10;
	three->next = four;
	three->preivous = two;
	
	struct Node *four;
	
	four = (struct Node *) malloc(sizeof(struct Node));
	
	four->data = 10;
	four->next = five;
	four->preivous = three;
	
	
	struct Node *five;
	
	five = (struct Node *) malloc(sizeof(struct Node));
	
	five->data = 10;
	five->next = NULL;
	five->preivous = four;
	
	printf("\n Traversal link list --- \n");
	
	printList(header);
	
	return 0;
}
