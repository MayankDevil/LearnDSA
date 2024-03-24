/*
	[ Static Queue ]-----
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
void remove()
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
		for(int i = front; i <= index; i++) printf("\n %d",data[i]);
	
		printf("\n\t _[DATA DISPLAY] 0 to %d index\n",index);
	}
}
/*
	MAIN : static queue menu operation 
*/
int main()
{
	printf("\n ---{ STATIC STACK }--- \n");
	
	int choice;
	
	while(1)
	{
		printf("\n --------------------"
			"\n press 6 insert"
			"\n press 5 remove"
			"\n press 4 end"
			"\n press 3 all"
			"\n press 2 isFull"
			"\n press 1 isEmpty"
			"\n press 0 exit"
			"\n\n enter chocie number = "
		);
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 6 : insert();
				break;
					
			case 5 : remove();
				break;
				
			case 4 : end();
				break;
			
			case 3 : all();
				break;
					
			case 2 : if(isFull()) printf("\n\t _[FULL]\n");
				break;
				
			case 1 : if(isEmpty()) printf("\n\t _[EMPTY]\n");
				break;
							
			case 0 : printf("\n\t [ THE END ]---\n");	
				return 0;
				
			default : printf("\n\t _ERROR : Wrong choice selection!\n");
		}
	}
	return 0;
}
// THE END }-----
