/*
	-------------
	[ 2-D ARRAY ]
	-------------	
*/
/*
	12. add the matrix, two 2-D array [4x4] [4x4]
*/
void program12()
{
	int i, o, a[4][4], b[4][4], sum[4][4];
	
	printf("\n enter the elements of first matrix = \n");
	
	for(i = 0; i < 4; i++)
	{
		for(o = 0; o < 4; o++)
		{
			printf("\n input a[%d][%d] value = ",i,o);
			scanf("%d",&a[i][o]);
		}
	}
	printf("\n enter the elements of first matrix = \n");
	
	for(i = 0; i < 4; i++)
	{
		for(o = 0; o < 4; o++)
		{
			printf("\n input a[%d][%d] value = ",i,o);
			scanf("%d",&b[i][o]);
		}
	}
	printf("\n sum of the matrix is \n");
	
	for(i = 0; i < 4; i++)
	{
		for(o = 0; o < 4; o++)
		{
			printf("\n %d ",(sum[i][o] = a[i][o] + b[i][o]));
		}
	}
}
/*
	13. multiply the matrix, two 2-D array [4x4] [4x4]
*/
void program13()
{
	int i, o, a[4][4], b[4][4], product[4][4];
	
	printf("\n enter the elements of first matrix = \n");
	
	for(i = 0; i < 4; i++)
	{
		for(o = 0; o < 4; o++)
		{
			printf("\n input a[%d][%d] value = ",i,o);
			scanf("%d",&a[i][o]);
		}
	}
	printf("\n enter the elements of first matrix = \n");
	
	for(i = 0; i < 4; i++)
	{
		for(o = 0; o < 4; o++)
		{
			printf("\n input a[%d][%d] value = ",i,o);
			scanf("%d",&b[i][o]);
		}
	}
	printf("\n sum of the matrix is \n");
	
	for(i = 0; i < 4; i++)
	{
		for(o = 0; o < 4; o++)
		{
			printf("\n %d ",(product[i][o] = a[i][o] * b[i][o]));
		}
	}
}
/*
	14. print transpose [2x3]
*/
void program14()
{
	int i, o, a[2][3];
	
	puts("\n enter the array for transpose [2X3] matrix = \n");
	
	for(i = 0; i < 2; i++)
	{
		for(o = 0; o < 3; o++)
		{
			printf("\n input a[%d][%d] = ",i,o);
			scanf("%d",&a[i][o]);
		}	
	}
	puts("\n Before transpose [2X3] matrix output is = \n");
	
	for(i = 0; i < 2; i++)
	{
		for(o = 0; o < 3; o++)
		{
			printf("\t %d",a[i][o]);
		}
		printf("\n");
	}
	
	puts("\n After transpose [2X3] matrix output is = \n");
	
	for(i = 0; i < 3; i++)
	{
		for(o = 0; o < 2; o++)
		{
			printf("\t %d",a[o][i]);
		}
		printf("\n");
	}
}
/*
	15. subtract two matrices.
*/
void program15()
{
	int i, o, a[3][3], b[3][3], product[3][3];
	
	printf("\n enter the elements of first matrix = \n");
	
	for(i = 0; i < 3; i++)
	{
		for(o = 0; o < 3; o++)
		{
			printf("\n input a[%d][%d] value = ",i,o);
			scanf("%d",&a[i][o]);
		}
	}
	printf("\n enter the elements of first matrix = \n");
	
	for(i = 0; i < 3; i++)
	{
		for(o = 0; o < 3; o++)
		{
			printf("\n input a[%d][%d] value = ",i,o);
			scanf("%d",&b[i][o]);
		}
	}
	printf("\n sum of the matrix is \n");
	
	for(i = 0; i < 3; i++)
	{
		for(o = 0; o < 3; o++)
		{
			printf("\n %d ",(product[i][o] = a[i][o] - b[i][o]));
		}
	}
}
/*
	16. copy one matrix into another [4x4]
*/
void program16()
{
	int i, o, a[3][3], b[3][3];
	
	printf("\n enter the elements of matrix = \n");
	
	for(i = 0; i < 3; i++)
	{
		for(o = 0; o < 3; o++)
		{
			printf("\n input a[%d][%d] value = ",i,o);
			scanf("%d",&a[i][o]);
		}
	}
	printf("\n copy matrix is = \n");
	
	for(i = 0; i < 3; i++)
	{
		for(o = 0; o < 3; o++)
		{
			b[i][o] = a[i][o];
			printf("\n b[%d][%d] is %d",i,o,b[i][o]);
		}
	}
}
/*
	main function
*/
#include <stdio.h>

void main()
{
//	program12();
//	program13();
	program14();
//	program15();
//	program16();
}
