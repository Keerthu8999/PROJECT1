#include<stdio.h>
#include<stdlib.h>
//Definition of Node for Binary search tree
struct BstNode {
	int data; 
	struct BstNode* left;
	struct BstNode* right;
};

// Function to create a new Node in heap

// To insert data in BST, returns address of root node 
struct BstNode* Insert(struct BstNode* root,int data) {
	if(root == NULL) { 
	struct Bstnode *newNode;
	newNode=(struct Bstnode*)malloc(sizeof(struct Bstnode));
// empty tree
		newNode->data = data;
	newNode->left = newNode->right = NULL;

	}
	// if data to be inserted is lesser, insert in left subtree. 
	else if(data <= root->data) {
		root->left = Insert(root->left,data);
	}
	// else, insert in right subtree. 
	else {
		root->right = Insert(root->right,data);
	}
	return root;
}
//To search an element in BST, returns true if element is found
/*bool Search(BstNode* root,int data) {
	if(root == NULL) {
		return false;
	}
	else if(root->data == data) {
		return true;
	}
	else if(data <= root->data) {
		return Search(root->left,data);
	}
	else {
		return Search(root->right,data);
	}
}*/
int main() {
	struct BstNode* root = NULL;  // Creating an empty tree
	/*Code to test the logic*/
	root = Insert(root,15);	
	root = Insert(root,10);	
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);
	// Ask user to enter a number.  
	
}
