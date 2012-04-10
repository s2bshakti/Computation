#include<stdio.h>
void push(char);
void pop(char);
char stack[200];
int top=0;
main()
{
	FILE *fp;
	stack[0]='\0';
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
	if(top==0)
	{
		printf("Incorrect sequence of Brackets");			
	}
	if(ch==stack[top])
	{
		top--;
	}
	if(stack[top]=='\0')
	{
		printf("correct input sequence");
	}					
	else
	{
		printf("Incorrect Input sequence of Brackets\n");
	}				
}
