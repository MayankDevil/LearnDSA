/*
	basic Tree Logic
*/
#include<stdio.h>
#include<stdlib.h>
/*	----------------------------------------------
	| how to create tree structre in c language? |
	----------------------------------------------
	struct_keyword Tree_name
	{
		primary key;
		
		forgein key;
		
		unique data;
		
		normal data;
		
		......data-
		
		struct_keyword Tree_name *left_child_pointer;
		struct_keyword Tree_name *right_child_pointer;
	};
	
*/
struct Tree
{ 
	int data;
	struct Tree *left;
	struct Tree *right;
};
/*
	IN ORDER TRAVERSAL TREE : is set binary tree data in assending order
*/
void printTree(struct Tree *node)
{
	if(node != NULL)
	{
		printTree(node->left);
		printf("\n %d",node->data);
		printTree(node->right);
	}	
}

struct Tree* in(int data)
{
	struct Tree* node = (struct Tree*) malloc(sizeof(struct Tree));

	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return(node);
}
int main()
{
/*	---------------------------------------
	flow char present that tree structure |
	---------------------------------------
	
	level(1)		   	100
 				  	   /   \
	level(2)	     90	    110
 			  	   	/ \	   /   \
	level(3)  	   80  95 105  120
				  / \	
	level(4)  	70  85
			   /
	level(5)  60
	
	========  100 90 110 80 95 105 120 70 85 60
	
	Bindary Tree Rules :-
	
	1. first data is root of tree
	
	2. if data == node : case is duplicate
	
	3. if data > node : go left else: go Right
	
	4. while node is not leave else once side is null
		
	5. if node->left || node->right != NULL that called left
	
	[ Binary Tree Traversal ] :-
	
	1. PREORDER TRAVERSAL
	
		{ PARENT > LEFT > RIGHT }
	
	2. INORDER TRAVERSAL
	
		{ LEFT > PARENT > RIGHT }
	
	3. POSTORDER TRAVERSAL
	
		{ LEFT > RIGHT > PARENT }
*/
	struct Tree *root;
	
	root = (struct Tree *) malloc(sizeof(struct Tree));
	
	// level 1
	root = in(100); 	// root
	
	// level 2
	root->left = in(90);
	root->right = in(110);
	
	// level 2
	root->left->left = in(80);
	root->left->right = in(95);
	
	// level 3
	root->right->left = in(105);
	root->right->right = in(120);
	
	// level 4
	root->left->left->left = in(70);
	root->left->left->right = in(85);
	
	// level 5
	root->left->left->left->left = in(60);
	
	// ------------------------------------ 
	
	printf("\n\t traversal binary tree\n");
	
	printTree(root);
	
	return 0;
}
