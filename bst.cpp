#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *getnode(int x)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
struct node* insert(struct node *root,int x)
{
	if(root==NULL)
	root = getnode(x);
	else if(x<=root->data)
	root->left = insert(root->left,x);
	else if(x>=root->data)
	root->right = insert(root->right,x);
return root;	
}
void preorder(struct node *root)
{
	if(root==NULL)return;
	printf("%d ",root->data);
	preorder(root->left);
	preorder(root->right);
}
void inorder(struct node *root)
{
	if(root==NULL)return;
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
}
void postorder(struct node *root)
{
	if(root==NULL)return;
	postorder(root->left);
	
	postorder(root->right);
	printf("%d ",root->data);
}



int main()
{
	struct node *root=NULL;
	root=insert(root,15);
	root=insert(root,10);
	root=insert(root,20);
	root=insert(root,25);
	root=insert(root,8);
	root=insert(root,12);
	root=insert(root,17);
	printf("preorder\n\n");preorder(root);
	printf("inorder\n\n");inorder(root);
	printf("postorder\n\n");postorder(root);
	return 0;
}
