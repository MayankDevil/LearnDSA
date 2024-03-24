/*
	60. Implementing the simple queue using arrays.
*/
#include <stdio.h>

int index = -1, front = 0, data[3], size = sizeof(data) / sizeof(data[0]);
// isFull :
int isFull()
{
	if(index == size) return 1; else return 0;
}
// isEmpty :
int isEmpty()
{
	if(index < 0 || front > size) return 1; else return 0;
}
// INSERT :
void insert()
{
	if(isFull())
	{
		printf("\n\t _[DATA FULL]\n");
	}
	else
	{
		printf("\n input data = ");
		scanf("%d",&data[++index]);
		
		printf("\n\t _[DATA INSERTED] in index %d\n",index);
	}
}
// REMOVE :
void erase()
{
	if(isEmpty())
	{
		printf("\n\t _[DATA EMPTY]\n");
	}
	else
	{
		front++;
		printf("\n\t _[DATA DELETED] in index %d\n",(front-1));
	}
}
// END :
void end()
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
// ALL :
void all()
{
	if(isEmpty())
	{
		printf("\n\t _[DATA EMPTY]\n");
	}
	else
	{
		int i;
		
		for(i = front; i <= index; i++) printf("\n %d",data[i]);
	
		printf("\n\t _[DATA DISPLAY] 0 to %d index\n",index);
	}
}
/*
	MAIN : static queue menu operation 
*/
void main()
{
	end();
	
	insert();
	insert();
	insert();
	insert();
	
	end();
	
	insert();
	
	all();
	
	erase();
	
	end();
	
}

