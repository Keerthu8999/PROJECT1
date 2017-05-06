#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev;
	struct node *next;
}*top=NULL;
void insert(int x)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	
	temp->data=x;
	temp->prev=NULL;
	temp->next=top;
	top->prev=temp;	
	top=temp;
	return;

	
}
void display()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp=top;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
}
int main()
{
	insert(3);display();printf("\n");
//	insert(4);display();printf("\n");
//	insert(5);display();printf("\n");
//	insert(6);display();printf("\n");
	return 0;
}
