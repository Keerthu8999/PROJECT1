#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*top=NULL;
void inserte(int x)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;
	struct node *tempo;
	tempo=(struct node*)malloc(sizeof(struct node));
	tempo=top;
	while(tempo->next!=NULL)
	{
		tempo=tempo->next;
	}
	tempo->next=temp;
}
void insertb(int x)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL)
	printf("\n failed to allocate memory");
	else
{
	temp->data=x;
	temp->next=top;
	top=temp;
}
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
		int i,e;
		
	
		
		insertb(5);display();printf("\n");
		insertb(3);display();printf("\n");
		inserte(6);display();printf("\n");
		insertb(2);display();printf("\n");
		inserte(4);display();printf("\n");
		
	
		return 0;

}

