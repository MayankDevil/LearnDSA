/*
	45. Implements the operations, push, pop,peek on integer values using arrays
*/
#include <stdio.h>

int index45 = -1;
// isEmpty
int isEmpty45()
{
	if(index45 < 0) return 1; else return 0;	
}
// PULL
void pull45(int data[])
{
	if(isEmpty45())
	{
		printf("\n\t _[DATA EMPTY]\n");
			
		return;
	}
	int i;
	
	for(i = 0; i <= index45; i++) printf("\n %d",data[i]);
	
	printf("\n\t _[DATA DISPLAY] 0 to %d index\n",index45);
}
// PEEK
void peek45(int data[])
{
	if(isEmpty45())
	{
		printf("\n\t _[DATA EMPTY]\n");
	}
	else
	{
		printf("\n\t _[LAST DATA] is %d at %d index\n",data[index45],index45);
	}
}
// PUSH
void push45(int data[], int size)
{
	if(index45 < size)
	{
		int value;
		
		printf("\n enter data = ");
		scanf("%d",&value);
		
		data[++index45] = value;
		
		printf("\n\t _[DATA INSERTED] in index %d\n",index45);
	}
	else
	{
		printf("\n\t _[DATA FULL]\n");
	}
}
// POP
void pop45()
{
	if(isEmpty45())
	{
		printf("\n\t _[DATA EMPTY]\n");
			
		return;
	}
	index45--;
		
	printf("\n\t _[DATA DELETED] in index %d\n",(index45+1));
}
// MAIN
void main()
{
	int data[4], size = 3;
		
	pull45(data);
	peek45(data);
	
	push45(data,size);
	push45(data,size);
	push45(data,size);
	push45(data,size);
	push45(data,size);
	
	pull45(data);
	peek45(data);

	pop45();
	pop45();
	pop45();
	pop45();
	pop45();
			
	pull45(data);
}
