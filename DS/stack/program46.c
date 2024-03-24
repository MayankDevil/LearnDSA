/*
	46. Reverse a string using arrays.
*/
#include<stdio.h>

int stack46[10], index46 = -1;

void push46(int data)
{
	stack46[++index46] = data;
}
int peek_and_pop46()
{
	return stack46[index46--];
}
void main()
{
	char string[10] = "OH MY GOD ";
	
	int i;
	
	for(i = 0; i < sizeof(string) - 1; i++) push46(string[i]);
	
	for(i = 0; i < sizeof(string) - 1; i++) printf("%c",peek_and_pop46());
}
