#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev;
	struct node *next;
}*top=NULL;
void insert(int x,int n)
{
	struct node *temp,*tempo;
	temp=(struct node*)malloc(sizeof(struct node));
	tempo=(struct node*)malloc(sizeof(struct node));
	
	tempo=top;
	if(top==NULL)
	{
		tempo->data=x;
		tempo->prev=NULL;
		tempo->next=NULL;
	}
	int i;
	if(n==1)
	{
		temp->data=x;
		temp->next=top;
		top->prev=temp;
		temp->prev=NULL;
		top=temp;
	}
	
	
		temp->data=x;
		for(i=0;i<n-2;i++)
		{
			tempo=tempo->next;
		}
		
		temp->next=tempo->next;
		temp->prev=tempo;
		tempo->next=temp;
		tempo->next->prev=temp;
	
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
	insert(5,2);display();printf("\n");
	insert(3,3);display();printf("\n");
	insert(4,4);display();printf("\n");
	return 0;

}

