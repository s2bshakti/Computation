#include<stdio.h>
void push(char);
void pop(char);
char stack[200];
int top=-1;
main()
{
	FILE *fp;
	char ch;
	fp=fopen("gh.c","r");
	while(fscanf(fp,"%c",&ch)!=EOF)
	{
		if(ch=='('||ch=='{'||ch=='[')
		{
			push(ch);
		}
		if(ch==')'||ch=='}'||ch==']')
		{
			pop(ch);
		}
	}
}
void push(char ch)
{
	top++;
	stack[top]=ch;
}

void pop(char ch)
{
	if(ch==')'&&stack[top]=='('||ch=='}'&&stack[top]=='{'||ch==']'&&stack[top]=='[')
	{
		top--;
	}
	if(top==-1)
	{
		printf("correct Input sequence of Brackets\n");
	}					
	else
	{
		printf("incorrect input sequence");	
	}				
}
