#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
} *top=NULL,*rear=NULL;
void enqueue(int x)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;
	if(top==NULL&&rear==NULL)
	{
		top=rear=temp;
		return;
	}
	rear->next=temp;
	rear=temp;
}
void dequeue()
{
	struct node *temp=top;
	if(top==NULL)
	{
		printf("\n queue underflow");
	}
	
	if(top==rear)
	top=rear=NULL;
	else
	{
	top=top->next;
	free(temp);
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
	enqueue(5);display();printf("\n");
	enqueue(3);display();printf("\n");
	dequeue();display();printf("\n");
	enqueue(4);display();printf("\n");
	dequeue();display();printf("\n");
	return 0;
}
