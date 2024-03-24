/*
	66. Print reverse of an array without actually reversing it.
*/
#include<stdio.h>

int i, index = -1, QUEUE[7], size = 7;
// INSERT
void in(int data)
{
	QUEUE[++index] = data;
}
// PRINT
void out()
{	
	for(i = index; i >= 0; i--) printf("\n %d",QUEUE[i]);
}
// MAIN
void main()
{
	int size = 7, data[] = { 1,5,2,6,3,7,4 };
	
	for(i = 0; i < size; i++) printf("\n %d",data[i]);
	
	for(i = 0; i < size; i++) in(data[i]);
	
	puts("\n _reverse");
	
	out();
	
	puts("\n _data");
	
	for(i = 0; i < size; i++) printf("\n %d",data[i]);
}
