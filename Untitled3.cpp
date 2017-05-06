#include<stdio.h>
#include<ctype.h>
char stack[20];
int top=-1;
void push(char x)
{
stack[++top]=x;
}
char pop()
{
	if(top==-1)
	return -1;
	else
	return stack[top--];
}
int priority(char x)
{
	if(x=='(')
	return 0;
	else if(x=='+'||x=='-')
	return 1;
	else if(x=='*'||x=='/')
	return 2;
}
int main()
{
	char *e,x,exp[20];
	printf("\n enter the expression");
	scanf("%s",exp);
	e=exp;
	while(*e!='\0')
	{
		if(isalnum(*e))
		printf("%c",*e);
		else if(x=='(')
		push(*e);
		else if(x==')')
		{
			while(x = pop()!='(')
			printf("%c",x);
		}
		else
		{
			while(priority(stack[top])>=priority(*e))
			printf("%c",pop());
			push(*e);
		}
		e++;
	}
	while(top!=-1)
	{
		printf("%c",pop());
	}
	return 0;
}
