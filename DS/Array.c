/*
	---------
	| ARRAY |
	---------
*/	
#include<stdio.h>
/*
	1. enter an array and search the maximum value.
*/
void program1()
{
	int i, max, array[7]; //= { 1,3,5,2,7,4,6 };
	
	for(i = 0; i < 7; i++)
	{
		printf("\n enter array[%d] = ",i);
		scanf("%d",&array[i]);
	}
	max = array[0];
	
	for(i = 1; i < 7; i++)
		if(array[i] > max)
			max = array[i];
				
	printf("\n maximun value is  %d",max);
}
/*
	2. enter an array and search the minimun value.
*/
void program2()
{
	int i, min, array[7]; //= { 1,3,5,2,7,4,6 };
	
	for(i = 0; i < 7; i++)
	{
		printf("\n enter array[%d] = ",i);
		scanf("%d",&array[i]);
	}
	min = array[0];
	
	for(i = 1; i < 7; i++)
		if(array[i] < min)
			min = array[i];
				
	printf("\n minimun value is  %d",min);
}
/*
	3. find the index of the value present in the array.
*/
void program3()
{
	int i, array[7] = { 1,3,5,2,7,4,6 };
	
	for(i = 0; i < 7; i++)
	{
		printf("\n index[%d] = %d",i,array[i]);
	}
}
/*
	4. copy the arrray into another array.
*/
void program4()
{
	int i, copy[7], array[7] = { 1,3,5,2,7,4,6 };
	
	for(i = 0; i < 7; i++)
		printf("\n %d is copy at index %d",
			(copy[i] = array[i]),i);
}
/*
	5. print the array in sorted order but do not sort the array.
*/
void program5()
{
	int i, o, t, copy[7], array[7] = { 14,15,13,16,12,17,11 };
	
	for(i = 0; i < 7; i++) copy[6-i] = array[i];
	
	for(i = 0; i < 7; i++)
		for(o = i; o < 7;o ++)
			if(copy[i] > copy[o])
			{
				t = copy[o];
				copy[o] = copy[i];
				copy[i] = t;
			}
	puts("\n sorting array is = \n");
			
	for(i = 0; i < 7; i++) printf(" %d ",copy[i]);
	
	puts("\n real array is = \n");
	
	for(i = 0; i < 7; i++) printf(" %d ",array[i]);
}
/*
	6. wrtie a program for linear search.
*/
void program6()
{
	int data[] = { 9,2,11,42,0,53,66,17,80,95 };
	
	int i, value, size = sizeof(data) / sizeof(data[0]);
	
	int match = 0;
	
	for(i = 0; i < size; i++) printf("\n %d",data[i]);
	
	printf("\n enter search number = ");
	scanf("%d",&value);
	
	for(i = 0; i < size; i++)
	{
		if(data[i] == value)
		{
			match = 1;
			
			break;
		}
	}
	if(match)
		printf("\n data matched in index %d",i);
	else
		printf("\n data unmatched");
}
/*
	7. write a program for binary search.
*/
void program7()
{
	int data[] = { 0,1,10,34,40,55,66,70,90,99 };
	
	int i, value;
	
	int m, f = 0, l = sizeof(data) / sizeof(data[0]) - 1;
	
	for(i = 0; i < l; i++) printf("\n %d",data[i]);
	
	printf("\n enter search number = ");
	scanf("%d",&value);
	
	while(f <= l)
	{
		m = (f + l) / 2;
		
		if(value == data[m])
		{
			printf("\n data matched in index %d",m);
			return;
		}
		if(value > data[m]) f = m + 1;
		
		if(value < data[m]) l = m - 1;
	}
	printf("\n data unmatched");
}
/*
	8. print number of iterations using binary search.
*/
void program8()
{
	int data[] = { 0,1,10,34,40,55,66,70,90,99 };
	
	int i, value;
	
	int m, f = 0, l = sizeof(data) / sizeof(data[0]) - 1;
	
	for(i = 0; i < l; i++) printf("\n %d",data[i]);
	
	printf("\n enter search number = ");
	scanf("%d",&value);
	
	i = 0;
	
	while(f <= l)
	{
		m = (f + l) / 2;
		
		if(value == data[m])
		{
			printf("\n index %d data matched at %d iterations",m,i);
			return;
		}
		if(value > data[m]) f = m + 1;
		
		if(value < data[m]) l = m - 1;
		
		i++;
	}
	printf("\n data unmatched at %d iterations",i);
}
/*
	9. compare two arrays and merge them in single array.
*/
void program9()
{
	int i, m = 0, a[9],  b[] = { 1,2,3,4 }, c[] = { 5,6,7,8,9 };
	
	for(i = 0; i < 9; i++)
	{
		if(i < 4) a[i] = b[i]; else a[i] = c[i-4];
	}
	for(i = 0; i < 9; i++) printf("\n vlaue of a[%d] is %d",i,a[i]);
}
/*
	10. compare two arrays are some or not.
*/
void program10()
{
	int i, m = 0, a[] = { 1,2,3,4,5 }, b[] = { 1,2,3,4,5 };
	
	for(i = 0; i < 5; i++)
	{
		if(a[i] != b[i])
		{
			m = 1;
			break;
		}
	}
	if(m)
		printf("\n array is not same");
	else
		printf("\n array is same");
}
/*
	11. copy the array in reverse order.
*/
void program11()
{
	int i, n, copy[7], array[7] = { 1,3,5,2,7,4,6 };
	
	for(i = 0; i < 7; i++)
	{
		printf("\n %d is copy at index %d",(copy[6-i] = array[i]),(6-i));
	}
}
/*
	main function
*/
void main()
{
//	program1();
//	program2();
//	program3();
//	program4();
//	program5();
//	program6();
//	program7();
//	program8();
//	program9();
//	program10();
//	program11();

}
// THE END 
