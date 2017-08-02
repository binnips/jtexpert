#include <iostream>
#include <queue>

using namespace std;

struct tree
{
	int data;
	struct tree *left;
	struct tree *right;
};

void preorder(tree *x)
{
	if(x == NULL)
	{
		return;
	}
	cout<<x->data;
	preorder(x->left);
	preorder(x->right);
}
void insert(tree **root ,int data)
{

	if(*root == NULL)
	{
		*root = (tree*)malloc(sizeof(tree));
		(*root) -> data = data;
		(*root)->left = (*root)->right = NULL;
	}
}

int main()
{
	tree *root = NULL;
	insert(&root,10);
	preorder(root);
	cout<<endl;
	return 0;
}
