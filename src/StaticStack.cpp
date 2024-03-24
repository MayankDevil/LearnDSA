/*
	[ Static Stack ]-----
*/
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

int index = -1;
/*
	isEmpty : check stack is empty or not
*/
int isEmpty()
{
	if(index < 0) return TRUE else return FALSE;	
}
/*
	PULL : visit all data from stack 
*/
void pull(int data[])
{
	if(isEmpty())
	{
		printf("\n\t _[DATA EMPTY]\n");
			
		return;
	}
	for(int i = 0; i <= index; i++) printf("\n %d",data[i]);
	
	printf("\n\t _[DATA DISPLAY] 0 to %d index\n",index);
}
/*
	PEEK : visit last data from stack
*/
void peek(int data[])
{
	if(isEmpty())
	{
		printf("\n\t _[DATA EMPTY]\n");
	}
	else
	{
		printf("\n\t _[LAST DATA] is %d at %d index\n",data[index],index);
	}
}
/*
	PUSH : enter data from stack at last 
*/
void push(int data[], int size)
{
	if(index < size)
	{
		int value;
		
		printf("\n enter data = ");
		scanf("%d",&value);
		
		data[++index] = value;
		
		printf("\n\t _[DATA INSERTED] in index %d\n",index);
	}
	else
	{
		printf("\n\t _[DATA FULL]\n");
	}
}
/*
	POP : erase data from stack at last
*/
void pop()
{
	if(isEmpty())
	{
		printf("\n\t _[DATA EMPTY]\n");
			
		return;
	}
	index--;
		
	printf("\n\t _[DATA DELETED] in index %d\n",(index+1));
}
/*
	MAIN : static stack menu operation 
*/
int main()
{
	printf("\n ---{ STATIC STACK }--- \n");
	
	int choice, data[10], size = sizeof(data) / sizeof(data[0]);
	
	while(1)
	{
		printf("\n --------------------"
			"\n press 5 pop"
			"\n press 4 push"
			"\n press 3 peek"
			"\n press 2 pull"
			"\n press 1 isEmpty"
			"\n press 0 exit"
			"\n\n enter chocie number = "
		);
		scanf("%d",&choice);
		
		switch(choice)
		{		
			case 5 : pop();
				break;
				
			case 4 : push(data,size);
				break;
			
			case 3 : peek(data);
				break;
					
			case 2 : pull(data);
				break;
				
			case 1 : (isEmpty())? printf("\n\t _[EMPTY]\n") : printf("\n\t _[DATA]\n");
				break;
							
			case 0 : printf("\n\t [ THE END ]---\n");	
				return 0;
				
			default : printf("\n\t _ERROR : Wrong choice selection!\n");
		}
	}
	return 0;
}
// THE END }-----
