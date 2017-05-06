#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
}*top=NULL;
void insb(int x)
{
	struct node *temp;
	temp=(struct node*)malloc (sizeof(struct node));
	temp->data=x;
	temp->next=top;
	top=temp;
}
void insm(int x,int n)
{
	int i;
	struct node *temp,*temp1;
	temp=(struct node*)malloc(sizeof(struct node));
	temp1=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp1=top;
	for(i=0;i<n-2;i++)
	{
			temp1=temp1->next;
	}
	temp->next=temp1->next;
	temp1->next=temp;
}
void inse(int x)
{
	struct node *temp;
	temp=(struct node*)malloc (sizeof(struct node));
	struct node *temp1;
	temp1=(struct node*)malloc (sizeof(struct node));
	temp1=top;
	temp->data=x;
	temp->next=NULL;
	while(temp1->next!=NULL)
	{
		temp1=temp1->next;
	}
	temp1->next=temp;
}
void del(int n)
{
	int i;
	struct node *temp;
	temp=(struct node*)malloc (sizeof(struct node));
	struct node *tempo;
	tempo=(struct node*)malloc (sizeof(struct node));
	temp=top;
	if(n==1)
	{

	top=temp->next;
	free(temp);	
	return;
	}	
	tempo=top;
	
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
	insb(3);printf(" ");
	insm(4,2);
	insb(5);display();printf("\n");
	inse(6);display();printf("\n");
	del(2);display();printf("\n");
	return 0;
	
}
