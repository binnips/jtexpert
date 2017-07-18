#include <stdio.h>
#include <malloc.h>

struct node 
{
	int x;
	struct node *left, *right;
};

struct node *newNode(int y)
{
	struct node * root = malloc(sizeof(struct node));
	root -> x = y;
	root -> left = root -> right = NULL;
	return root;
}	

int max(int x, int y)
{
	return x > y ? x:y;
}
int size(struct node *root)
{
	if(!root)
		return 0;
	int left = size(root->left);
	int right = size(root->right);
	return left+right + 1;
}

int identical(struct node *a, struct node *b)
{
	if(a == NULL && b==NULL)
		return 1;
	if( a!=NULL && b!=NULL)
	{
		return	(a->x == b -> x && identical(a->left,b->left) && identical(a->right,b->right));
	}
	return 0;
}
int height(struct node *a)
{
	if(!a)
		return 0;
	int rlen = height(a->right);
	int llen = height(a->left);
	if(rlen > llen)
		return rlen+1;
	return llen+1;
}

int main()
{
  struct node *root = newNode(1);
  struct node *new = newNode(1);
  root->left        = newNode(2);
  root->right       = newNode(3);
  root->left->left  = newNode(4);
  root->left->right = newNode(5);   
  struct node *id = root;
 
  printf("Size of the tree is %d\n", size(root));  
  int isId = identical(root,new);
  printf("%p and %p are %s\n",root,new,isId?"Identical":"Not Identical");
  printf("Height of the tree is %d\n", height(root));  
  return 0;
}
