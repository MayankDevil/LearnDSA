
/*
	[ LINK LIST ]------------------------------
	- Single List : end at last bond
	- Forward List : move only next
	- Free List : not limit bond depend to RAM
*/
#include <stdio.h>
#include <stdlib.h>
/*
	DATA STRUCTURE }----------------------
*/
struct Node
{
	int data;
	struct Node *next;
}
*f_bond = NULL,
*l_bond = NULL,
*t_bond = NULL;

int list_length()
{
	int index = 0;
	
	for(t_bond = f_bond; t_bond != NULL; t_bond = t_bond->next)
	{
		l_bond = t_bond;
		
		index ++;	
	}
	return index;
}

/*
	DELETE ALL FUNCTION }----------------------
*/
void del_list()
{
	if(f_bond == NULL)
	{
		printf("\n\t _[DATA DELETED] list already empty\n");
		
		return;
	}
	free(f_bond);
	
	f_bond = NULL;
	
	l_bond = NULL;
	
	printf("\n\t _[ALL DETLTED] list is empty\n");
}
/*
	DELETE FIRST FUNCTION }----------------------
*/
void f_del_list()
{
	if(f_bond == NULL)
	{
		printf("\n\t _[LIST EMEPTY] no any data present here!\n");
		
		return;
	}
	t_bond = f_bond->next;
	
	f_bond = t_bond;
	
	printf("\n\t _[DATA DELETED] in the begining at list\n");
}
/*
	DELETE LAST FUNCTION }----------------------
*/
void l_del_list()
{
	if(f_bond == NULL)
	{
		printf("\n\t _[LIST EMEPTY] no any data present here!\n");
		
		return;
	}
	if(f_bond == l_bond)
	{
		del_list();
	}
	else
	{	
		for(t_bond = f_bond; t_bond->next != NULL; t_bond = t_bond->next) l_bond = t_bond;
		
		l_bond->next = NULL;
				
		printf("\n\t _[DATA DELETED] in the ending at list\n");
	}
}
/*
	INSERT FIRST FUNCTION }----------------------
*/
void f_in_list()
{
	struct Node *node;
	
	node = (struct Node *) malloc(sizeof(struct Node));
	
	printf("\n input data = ");
		
	scanf("%d",&(node->data));
	
	node->next = NULL;
	
	if(l_bond == NULL)
	{
		f_bond = node;
		
		l_bond = node;
	}
	else
	{	
		t_bond = f_bond;
		
		f_bond = node;
		
		f_bond->next = t_bond;
	}
	printf("\n\t _[DATA INSERTED] in the begining at list\n");
}
/*
	INSERT LAST FUNCTION }----------------------
*/
void l_in_list()
{
	struct Node *node;
	
	node = (struct Node *) malloc(sizeof(struct Node));
	
	printf("\n enter = ");
		
	scanf("%d",&(node->data));
	
	node->next = NULL;
	
	if(f_bond == NULL)
	{
		f_bond = node;
		
		l_bond = node;
	}
	else
	{	
		l_bond = node;
		
		t_bond = f_bond;
		
		while(t_bond->next != NULL) t_bond = t_bond->next;
		
		t_bond->next = l_bond;
	}
	printf("\n\t _[DATA INSERTED] in the ending at list\n");
}
/*
	INSERT BETWEEN FUNCTION }----------------------
*/
void b_in_list()
{
	int bond;
	
	struct Node *node;
	
	node = (struct Node *) malloc(sizeof(struct Node));
	
	printf("\n input data = ");
		
	scanf("%d",&(node->data));
	
	do
	{
		printf("\n enter bond = ");
	
		scanf("%d",&bond);	
	}
	while(bond >= 1 || list_length() < bond);
	
	t_bond = f_bond;

	while(0 != bond)
	{	
		t_bond = t_bond->next;
		
		bond --;
	}
	node->next = t_bond;
	
	while(1 != bond)
	{
		t_bond = t_bond->next;
		
		bond --;
	}
	t_bond->next = node;
	
	printf("\n\t _[DATA INSERTED] in the begining at list\n");
}
/*
	PRINT FIRST FUNCTION }----------------------
*/
void f_print_list()
{
	if(f_bond == NULL)
	{
		printf("\n\t _[LIST EMEPTY] not begin data here!\n");
		
		return;
	}
	printf("\n Link list first data is %d\n",f_bond->data);
}
/*
	PRINT LAST FUNCTION }----------------------
*/
void l_print_list()
{
	if(l_bond == NULL)
	{
		printf("\n\t _[LIST EMEPTY] not end data here!\n");
		
		return;
	}
	printf("\n Link list last data is %d\n",l_bond->data);
}
/*
	PRINT ALL FUNCTION }----------------------
*/
void print_list()
{
	if(f_bond == NULL && l_bond == NULL)
	{
		printf("\n\t _[LIST EMEPTY] preset to not any data here!\n");
		
		return;
	}
	t_bond = f_bond;
	
	while(t_bond != NULL)
	{
		printf("\n %d",t_bond->data);
		
		t_bond = t_bond->next;
	}
}
/*
	MAIN FUNCTION }----------------------
*/
int main(int argc, char *argv[])
{
	int choice;
	
	printf("\n-----{ PROGRAM : SINGLE LINK LIST }-----\n");
	
	while(1)
	{
		printf("\n --------------------------------"
			"\n PRESS 0 : Exit"
			"\n PRESS 1 : print all"
			"\n PRESS 2 : print first"
			"\n PRESS 3 : print last"
			"\n PRESS 4 : insert first"
			"\n PRESS 5 : insert last"
			"\n PRESS 6 : insert b"
			"\n PRESS 7 : delete first"
			"\n PRESS 8 : delete last"
			"\n PRESS 9 : delete all"
			"\n\n"
			"\t ( Enter choice number )= "
		);
		
		scanf("%d",&choice);
			
		switch(choice)
		{
			case 10 : printf("\n length of link list is %d",list_length());
			
				break;
				
			case 9 : del_list();
				
				break;
			
			case 8 : l_del_list();
				
				break;
			
			case 7 : f_del_list();
				
				break;
			
			case 6 : b_in_list();
				
				break;
			
			case 5 : l_in_list();
				
				break;
			
			case 4 : f_in_list();
				
				break;
			
			case 3 : print_list();
				
				break;
			
			case 2 : l_print_list();
				
				break;
			
			case 1 : f_print_list();
				
				break;
				
			case 0 : printf("\n\n\t [THE END] -----\n");
				
				return 0;
				
			default : printf("\n\t Error : choice is invalid! \n");
		}
	}
	return 0;
}
