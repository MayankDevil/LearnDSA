/*
	77. Remove the duplictes from a sorted linked list.
*/
#include<stdio.h>

int index = -1, i, o, t, d;

// TRAVERSAL
void traversal(int data[])
{	
	for(i = 0; i <= index; i++) printf("\n %d",data[i]);
}
// INSERTION
void insertion(int data[], int size, int value)
{
	data[++index] = value;	
}
// DUPLICATE
void sortDuplicate(int data[], int size)
{
	for(i = 0; i < size; i++)
		for(o = i; o < size;o ++)
			if(data[i] > data[o])
			{
				t = data[o];
				data[o] = data[i];
				data[i] = t;
			}			
	t = data[0]; d = 0;
	
	for(i = 0; i < size; i++)
		if(data[i] == t && i != 0)
		{
			d = 1;
			o = i;
			
			while(o < size)
			{
				data[o] = data[o+1];	
				o++;
			}
			i = t;
			
			index --;
		}
		else
		{
			t = data[i];
		}
	if(d) index++;
}
// main
void main()
{
	int data[7], size = sizeof(data) / sizeof(data[0]);
	
	insertion(data,size,1);
	insertion(data,size,7);
	insertion(data,size,2);
	insertion(data,size,1);
	insertion(data,size,3);
	insertion(data,size,4);
	insertion(data,size,4);
	
	puts("\n _inserted");
	
	traversal(data);
	
	puts("\n _duplicate");
	
	sortDuplicate(data,size);
	
	traversal(data);
}
