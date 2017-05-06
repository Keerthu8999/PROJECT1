#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*top=NULL;
void insert(int x)

/*	if(top==NULL)
	{
		struct node *temp;
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=x;
		top=temp;
		temp->next=top;
		
	
	printf("\n success");
	}*/
	

	{
		printf("\n start");
		struct node *temp;
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=x;
		printf("\n start123");
		struct node *tempo;
		tempo=(struct node*)malloc(sizeof(struct node));
		tempo=top;
		printf("\n start123456");
		top=temp;
		temp->next=top;
		printf("\n jhhjghstart");
		while(tempo->next!=top)
		tempo=tempo->next;
		printf("\n jhhjghstartdfs");
	
}
void display()
{
	struct node *temp;    
               if (top == NULL)
               {
               	top=temp;
                 printf("list is empty");
               }        
             top->next=top;
               while(temp!=top)
               {
                 printf("%d\n",temp->data);
                 temp = temp->next;     
               }
              // printf("%d\n",temp->data);   
             }
int main()
{
		insert(5);display();printf("\n");
		insert(3);display();printf("\n");
		insert(6);display();printf("\n");
		insert(2);display();printf("\n");
		insert(4);display();printf("\n");
		return 0;
}
