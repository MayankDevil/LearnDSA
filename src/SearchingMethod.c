

#include<stdio.h>

#define TRUE 1
#define FALSE 0

/*	-----------------
	| Linear Search |
	-----------------
*/

/*
	isLinearSearch function return int 1|0 mean true and false
*/
int isLinearSearch(int data[], int size, int value)
{
	int i;
	
	for(i = 0; i < size; i++)
		if(data[i] == value)
			return TRUE;
		
	return FALSE;
}
/*
	linearSearch function input search_value and return index number if matched
*/
void linearSearch()
{
	int data[] = { 9,2,11,42,0,53,66,17,80,95 };
	
	int i, value, size = sizeof(data) / sizeof(data[0]);
	
	int match = FALSE;
	
	for(i = 0; i < size; i++) printf("\n %d",data[i]);
	
	printf("\n enter search number = ");
	scanf("%d",&value);
	
	for(i = 0; i < size; i++)
	{
		if(data[i] == value)
		{
			match = TRUE;
			
			break;
		}
	}
	if(match)
		printf("\n data matched in index %d",i);
	else
		printf("\n data unmatched");
}

/*	-----------------
	| Binary Search |
	-----------------
*/

/*
	isBinarySearch function return int 1|0 mean true and false
*/
int isBinarySearch(int data[], int value)
{
	int last_index = sizeof(data) / sizeof(data[0]) - 1;
	
	int middle_index, first_index = 0; 
	
	while(first_index <= last_index)
	{
		middle_index = (first_index + last_index) / 2;
		
		if(value == data[middle_index])
			return TRUE;
		if(value > data[middle_index])
			first_index = middle_index + 1;
		else
			last_index = middle_index - 1;
	}
	return FALSE;
}
/*
	binarySearch function input search_value and return index number if matched
*/
void binarySearch()
{
	int data[] = { 0,1,10,34,40,55,66,70,90,99 };
	
	int i, value;
	
	int middle_index, first_index = 0, last_index = sizeof(data) / sizeof(data[0]) - 1;
	
	for(i = 0; i < last_index; i++) printf("\n %d",data[i]);
	
	printf("\n enter search number = ");
	scanf("%d",&value);
	
	while(first_index <= last_index)
	{
		middle_index = (first_index + last_index) / 2;
		
		if(value == data[middle_index])
		{
			printf("\n data matched in index %d",middle_index);
			return;
		}
		if(value > data[middle_index]) first_index = middle_index + 1;
		
		if(value < data[middle_index]) last_index = middle_index - 1;
	}
	printf("\n data unmatched");
}

int main()
{
	linearSearch();
	
//	int data[] = { 9,2,11,42,0,53,66,17,80,95 };
	
//	int value = 5, size = sizeof(data) / sizeof(data[0]);
	
//	(isLinearSearch(data,size,value))? printf("matched") : printf("unmatched");

	binarySearch();
	
//	int value = 3, data[] = { 0,1,2,3,4,5,6,7,8,9 };
	
//	(isBinarySearch(data,value))? printf("matched") : printf("unmatched");

	
	
	printf("\n the end \n");
	
	return 0;
}
