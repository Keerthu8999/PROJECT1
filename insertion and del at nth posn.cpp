#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*top=NULL;
void insert(int x,int n)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;
	struct node *tempo;
	tempo=(struct node*)malloc(sizeof(struct node));
	int i;
	if(n==1)
	{
		temp->next=top;
		top=temp;
		return;
	}
	tempo=top;
	for(i=0;i<n-2;i++)
	{
		tempo=tempo->next;
	}
	temp->next=tempo->next;
	tempo->next=temp;

}
void delet(int n)
{
	
	struct node *tempo;
	tempo=(struct node*)malloc(sizeof(struct node));
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	int i;
	
	tempo=top;
	if(n==1)
	{
		top=tempo->next;
		free(tempo);
		return;
	}
	for(i=0;i<n-2;i++)
	{
		tempo=tempo->next;
	}
	temp=tempo->next;
	tempo->next=temp->next;
	free(temp);
	
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
	insert(2,1);display();printf("\n");
	insert(3,2);display();printf("\n");
	delet(1);display();printf("\n");
	insert(5,2);display();printf("\n");
	delet(2);display();printf("\n");
	return 0;
}

