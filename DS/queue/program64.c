/*
	64. Implementing the priority queue arrays.
*/
#include<stdio.h>

int index = -1, front = 0, data[5], size = sizeof(data) / sizeof(data[0]);

// isFull :
int isFull()
{
	if(index == size) return 1; else return 0;
}
// EMPTY
int isEmpty()
{
	if(index < 0 || front > size) return 1; else return 0;
}
// INSERT
void insert(int value)
{
	if(isFull())
	{
		puts("\n _datafull");
	}
	else
	{
		data[++index] = value;
		
		printf("\n _inserted %d",value);
	}
}
// DELETION
void erase()
{
	if(isEmpty())
	{
		puts("\n _emepty");
	}
	else
	{
		front++;
		puts("\n _deleted");
	}
}
// TRAVERSAL
void print()
{
	if(isEmpty())
	{
		printf("\n _empty");
	}
	else
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
		for(i = front; i <= index; i++) printf("\n %d",data[i]);
	}
}
// MAIN
void main()
{
	insert(3);
	insert(6);
	insert(4);
	insert(9);
	insert(0);
	
	print();
	
	erase();
	
	print();
}
