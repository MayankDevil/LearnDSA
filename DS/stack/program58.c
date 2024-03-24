/*
	58. Evaluate postfix expression dynamically.
*/
#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
}
*head = NULL,
*tail = NULL,
*p = NULL;

// PUSH
void push(int data)
{
	struct Node *node = (struct Node *) malloc(sizeof(struct Node));
	
	node->data = data;
	
	node->next = NULL;
	
	if(head == NULL)
	{
		head = node;
		
		tail = node;
	}
	else
	{	
		tail = node;
		
		p = head;
		
		while(p->next != NULL) p = p->next;
		
		p->next = tail;
	}
}
// POP
int pop()
{
	p = head;
	
	while(p->next != NULL) p = p->next;
	
	int data = tail->data;
	
	tail = p;
	
	
	return data;
}

/*
int STACK[20], index = -1;
	// PUSH
void push(int data) { STACK[++index] = data; }
	// POP
int pop() { return STACK[index--]; }
*/


// MAIN
void main()
{
//	char *equat, express[20];
//
//	int n1, n2, n3, number;
//
//	puts("\n enter express to evaluate = ");
//
//	equat = gets(express);
//	
//	while(*equat != '\0')
//	{
//		if(isdigit(*equat))
//		{
//			number = *equat - 48;
//			push(number);
//		}
//		else
//		{
//			n1 = pop();
//			n2 = pop();
//		
//			switch(*equat)
//			{
//				case '+': n3 = n1 + n2; break;
//	
//				case '-': n3 = n2 - n1; break;
//	
//				case '*': n3 = n1 * n2; break;
//	
//				case '/': n3 = n2 / n1; break;
//				
//				case '^': n3 = n2 ^ n1; break;
//			}
//			push(n3);
//		}
//		equat++;
//	}
//	printf("\n %s express to evaluate is %d \n",express,pop());

	push(1);
	push(2);
	push(3);
	push(4);
	printf("%d%d%d%d"
	,pop()
	,pop()
	,pop()
	,pop());
}
// the end
