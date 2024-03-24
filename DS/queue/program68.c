/*
	68. Reversing a queue using stack.
*/
#include<stdio.h>

int STACK[5], QUEUE[5], size = 5, index = -1, front = -1, real = -1, i;

// stack
void push(int data)
{
	STACK[++index] = data;
}
int peek_pop()
{
	return STACK[index--];
}
// queue
void insert(int data)
{
	QUEUE[++real] = data;
}
int end()
{
	return QUEUE[++front];
}
int print()
{
	for(i = 0; i < size; i++) printf("\n %d",QUEUE[i]);
}
void reset()
{
	front = -1, real = -1;
}
// MAIN
void main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);

	print();
	
	for(i = 0; i < size; i++) push(end());
	
	puts("\n _reverse");
	
	reset();
	
	for(i = 0; i < size; i++) insert(peek_pop());
	
	print();
}
