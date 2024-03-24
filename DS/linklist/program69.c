/*
	69. Write a program for the linked list using arrays (insertion, deletion, traversing, searching, sorting).
*/
#include<stdio.h>

int index = -1;
// EMPTY
int isEmpty()
{
	return (0 > index)? 1 : 0;
}
// TRAVERSAL
void traversal(int data[])
{
	if(isEmpty())
	{
		printf("\n\t _empty\n");
			
		return;
	}
	int i;
	
	for(i = 0; i <= index; i++) printf("\n %d",data[i]);
	
	printf("\n\t _traversal 0 to %d index\n",index);
}
// INSERTION
void insertion(int data[], int size, int value)
{
	if(index < size)
	{
		data[++index] = value;
		
		printf("\n\t _insertion in index %d\n",index);
	}
	else
	{
		printf("\n\t _overflow\n");
	}
}
// DELETETION
void deletion()
{
	if(isEmpty())
	{
		printf("\n\t _empty\n");
			
		return;
	}
	index--;
		
	printf("\n\t _deletion in index %d\n",(index+1));
}
// SORTING
void sort(int data[], int size)
{
	int i, o, t;
		
	for(i = 0; i < size; i++)
	{
		for(o = i; o < size;o ++)
		{
			if(data[i] > data[o])
			{
				t = data[o];
				
				data[o] = data[i];
				
				data[i] = t;
			}
		}
	}
}
// SEARCHING
int search(int data[], int size, int value)
{
	int i;
	
	for(i = 0; i < size; i++)
		if(data[i] == value)
			return 1;
			
	return 0;
}
// main
void main()
{
	int data[5], size = sizeof(data) / sizeof(data[0]);
	
	insertion(data,size,5);
	insertion(data,size,3);
	insertion(data,size,2);
	insertion(data,size,1);
	insertion(data,size,4);	
	
	traversal(data);
	
	sort(data,size);
	
	traversal(data);
	
	deletion();
	
	(search(data,size,3))? puts("matched") : puts("unmatched");

	(search(data,size,7))? puts("matched") : puts("unmatched");
}
