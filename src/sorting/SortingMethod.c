/*
	[ SORTING METHODS ]-------------------------
*/

#include<stdio.h>
/*
	print Data :
*/
void printData(int data[], int size)
{
	int i;
	
	for(i = 0; i < size; i++) printf("\n [%d] = %d",i,data[i]);
}
/*
	------------------
	| SELECTION SORT |
	------------------
*/
void selectionSort(int data[], int size)
{
	int i, o, t;
		
	for(i = 0; i < size; i++)
	{
		for(o = 0; o < size;o ++)
		{
			if(data[i] < data[o])
			{
				t = data[o];
				
				data[o] = data[i];
				
				data[i] = t;
			}
		}
	}
}
/*
	---------------
	| BUBBLE SORT |
	---------------
*/
void bubbleSort(int data[], int size)
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
/*
	------------------
	| INSERTION SORT |
	------------------
*/
void insertionSort(int data[], int size)
{
	int i, o, t, s;
	
	for(i = 0; i < size; i++)
	{
		for(o = 0; o < i; o++)
		{		
			if(data[i] < data[o])
			{
				t = data[i];
				
				s = i;
				
				while(s > o)
				{
					data[s] = data[s-1];
					
					s--;
				}
				data[s] = t;
			}
		}
	}
}
/*
	--------------
	| QUICK SORT |
	--------------
*/
void quickSort(int data[], int size)
{
	int t, l = 0, r = size-1, pivot = l;
	
	int btn = 0;
	
	while(!(l >= r))
	{
		if(btn)
		{
			if(data[pivot] > data[l])
			{
				t = data[pivot];
				
				data[pivot] = data[l];
				
				data[l] = t;
				
				btn = 0;
			}
			else
			{
				l--;
			}
		}
		else
		{
			if(data[pivot] > data[r])
			{
				t = data[pivot];
				
				data[pivot] = data[r];
				
				data[r] = t;
				
				btn = 1;
			}
			else
			{
				r--;
			}
		}
	}	
}
/*
	--------------
	| MERGE SORT |
	--------------
*/
void mergeSort(int data[], int size)
{
}
/*
	main function }--------------------------------
*/
int main()
{
	int data[] = { 45,85,95,15,23,12,65,75,18,24 };
	
	int size = sizeof(data) / sizeof(data[0]);
	
	printData(data, size);
	
	printf("\n After sorting by "
//		"Selection Sort"
//		"Bubble Sort"
//		"Insertion Sort"
		"Quick Sort"
//		"Merge Sort"
	);

//	selectionSort(data, size);
	
//	bubbleSort(data, size);
	
//	insertionSort(data, size);
	
	quickSort(data, size);
	
//	mergeSort(data, size);

	printData(data, size);
	
	printf("\n\n THE END }---\n");
	
	return 0;
}
/*
	The End }-----
*/
