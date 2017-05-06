#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*top=NULL;
void push(int x)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=top;
	top=temp;
}
void pop()
{
	struct node *tempo;
	tempo=(struct node*)malloc(sizeof(struct node));
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp=top;
	top=top->next;
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
	push(5);display();printf("\n");
	push(3);display();printf("\n");
	pop();display();printf("\n");
	push(4);display();printf("\n");
	return 0;
}
