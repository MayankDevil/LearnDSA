/*
	Serial Short
*/

#include<stdio.h>

void printData(int data[], int size)
{
	int i;
	
	for(i = 0; i < size; i++) printf("\n [%d] = %d",i,data[i]);
}

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

int main()
{
	int data[] = { 45,85,95,15,23,12,65,75,18,24 };
	
	int size = sizeof(data) / sizeof(data[0]);
	
	printf("\n default data\n");
	
	printData(data, size); 	// print default data
	
	// call selection sort function
	selectionSort(data, size);  

	printf("\n selection sort :- \n");

	printData(data, size);
	// call bubble sort function
	

	printf("\n the end\n");
	
	return 0;
}
