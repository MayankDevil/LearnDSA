/*
	Tree
*/

#include <stdio.h>
#include <stdlib.h>

struct Tree
{
	int data;
	struct Tree *left;
	struct Tree *right;
}
*root = NULL,
*node = NULL,
*leave = NULL;
/*
	binaryTreeInsert --------------------------------
*/
void binaryTreeInsert()
{
	struct Tree *p;
	p = (struct Tree *) malloc(sizeof(struct Tree));

	do
	{
		printf("\n input data = ");
		scanf("%d",&(p->data));
	}
	while(p->data < 0);
	
	p->left = NULL;
	p->right = NULL;	

	if(root == NULL)
	{	
		root = p;
	}
	else
	{	
		printf("\n root is not null \n");
		/*
		node = root;
		
		while(node != NULL)
		{
			if(node->data == p->data)
			{
				printf("\n\t _data duplicated\n");
				return;	
			}
			printf("\n %d != %d",node->data,p->data);
			
			node = (p->data > node->data)? node->right : node->left;
		}
		node = p;
		*/
		for(node = root; node != NULL; node = (p->data > node->data)? node->right : node->left)
		{
			if(node->data == p->data)
			{
				printf("\n\t _data duplicated\n");
				return;	
			}
		}
		node = p;
		
	}
	printf("\n\t _data inserted\n");
}
/*
	preOrderTraversal function --------------------
*/
void preOrderTraversal(struct Tree *node)
{	
	if(node != NULL)
	{
		printf("\n %d",node->data);
		preOrderTraversal(node->left);
		preOrderTraversal(node->right);
	}
}
/*
	inOrderTraversal function ---------------------
*/
void inOrderTraversal(struct Tree *node)
{	
	if(node != NULL)
	{
		inOrderTraversal(node->left);
		printf("\n %d",node->data);
		inOrderTraversal(node->right);
	}
}
/*
	postOrderTraversal function -------------------
*/
void postOrderTraversal(struct Tree *node)
{	
	if(node != NULL)
	{
		postOrderTraversal(node->left);
		postOrderTraversal(node->right);
		printf("\n %d",node->data);
	}
}
/*
	main function
*/
int main()
{
	int choice;
	
	while(1)
	{
		printf("\n enter choice number = ");
		
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 4 : postOrderTraversal(root); break;
			case 3 : inOrderTraversal(root); break;
			case 2 : preOrderTraversal(root); break;
			case 1 : binaryTreeInsert(); break;
			case 0 : return 0;
			
			default : printf("\n wrong choice \n");
		}
	}
	return 0;
}
