#include<stdio.h>
#include<string.h>
char stack[100];
int top=-1;
void push(char x)
{
	if(top==99)
	printf("\n stack overflow");
	stack[++top]=x;
}
void pop()
{
	printf("%c",stack[top--]);
}
int main()
{
	char str[100];
	int len,i;
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		push(str[i]);
		
	}
	for(i=0;i<len;i++)
	{
	pop();
}
}
