#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev;
	struct node *next;
}*top=NULL;
struct node *getnode(int x)
{
		struct node *temp;
		temp=(struct node*)malloc(sizeof(struct node));
        temp->data=x;
		temp->next=NULL;
		temp->prev=NULL;
		return temp;	
}
void insert(int x,int n)
{
	int i;
	struct node *temp=getnode(x);
	if(top==NULL)
	{
	top=temp;
	return;
    }
    if(n==1)
    {
	temp->data=x;
	temp->prev=NULL;
	temp->next=top;
	top->prev=temp;
	top=temp;
	return;
}
	else
	{
		struct node *temp;
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=x;
		struct node *tempo;
		tempo=(struct node*)malloc(sizeof(struct node));
		tempo=top;
		for(i=0;i<n-2;i++)
		{
			tempo=tempo->next;
		}
		temp->prev=tempo;
		temp->next=tempo->next;
		tempo->next->prev=temp;
		tempo->next=temp;
		return;
	}
}
void del()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp=top;
	top->next->prev=NULL;
	top=temp->next;
	free(temp);
}
void dele()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp=top;
	struct node *tempo;
	tempo=(struct node*)malloc(sizeof(struct node));
	tempo=top;
	while(tempo!=NULL)
	{
		tempo=tempo->next;
	}
	temp->next=NULL;
	
	
	
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
	insert(4,1);display();printf("\n");
	insert(5,1);display();printf("\n");
	insert(6,2);display();printf("\n");
	del();display();printf("\n");
	dele();display();printf("\n");
	return 0;
}
