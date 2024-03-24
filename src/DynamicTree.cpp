/*
	[ Dynamic Tree ]-----
*/
#include<stdio.h>
#include<stdlib.h>

struct Tree
{
	int data;
	struct Tree *left;
	struct Tree *right;
}
*root = NULL,
*branch = NULL,
*leaf = NULL;
/*
	Pre Order Traversal
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
	In Order Traversal
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
	Post Order Traversal
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
	Insertation Function
*/
// ---------------------------------------------
//struct Tree *
//void treeInsertation(int data)
//{
//	//	struct Tree *leaf;
//	leaf = (struct Tree *) malloc(sizeof(struct Tree));
//	
//	leaf->data = data;
//	leaf->left = NULL;
//	leaf->right = NULL;
//	
//	if(root == NULL)
//	{
//		root = leaf;
//	}
//	else
//	{
//		// struct Tree *branch;
//		// branch = (struct Tree *) malloc(sizeof(struct Tree));
//		
//		branch = root;
//		
//		while(branch != NULL)
//		{
//			if(branch->data == leaf->data)
//			{
//				printf("\n\t _[data duplicated]\n");
//				return;
//			}
//			else
//			{
//				branch = (branch->data > leaf->data)? branch->left : branch->right;
//			}
//		}
//		branch = leaf;
//		
//		root = branch;
//	}
//	// return node;
//}
// -----------------------------------------------
void treeInsertation(int data)
{
	leaf = (struct Tree *) malloc(sizeof(struct Tree));
	
	leaf->data = data;
	leaf->left = NULL;
	leaf->right = NULL;
	
	//if tree is empty
	if(root == NULL)
	{
		root = leaf;
	}
	else
	{
		struct Tree *node = root;
		struct Tree *branch = NULL;
		
		while(1)
		{ 
			branch = node;
			
			if(leaf->data == branch->data)
			{
				printf("\n\t _[DATA DUPLICATED]\n");
				return;
			}
			if(leaf->data < branch->data)
			{
				node = node->left;
				 
				if(node == NULL)
				{
					branch->left = leaf;
					return;
				}
			}
			else
			{
				node = node->right;
				
				if(node == NULL)
				{
					branch->right = leaf;
					return;
				}
			}
		} 
	}
} 

/*
	Main Function
*/
int main()
{
//	struct Tree *root;
//	root = (struct Tree *) malloc(sizeof(struct Tree));
//	root = NULL;
	
	treeInsertation(10);
	treeInsertation(8);
	treeInsertation(12);
	treeInsertation(9);
	treeInsertation(7);
	treeInsertation(11);
	treeInsertation(13);
	treeInsertation(6);
	
	
	inOrderTraversal(root);
	
	printf("\n _[ THE END ] \n");
	
	return 0;
}
// the end
