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
	fp=fopen("qw.c","r");
	while(fscanf(fp,"%c",&ch)!=EOF)
	{
		if(ch=='('||ch=='{'||ch=='[')
		{
			top++;
			stack[top]=ch;
		}
		if(ch==')'||ch=='}'||ch==']')
		{
			if(top==0)
			{
		
				printf("Incorrect Input sequence of Brackets");
						
			}
			if(ch==')'&&stack[top]=='('||ch=='}'&&stack[top]=='{'||ch==']'&&stack[top]=='[')
			{
				top--;
				//return 0;
			}
			if(stack[top]=='\0')
			{
				printf("Correct Input\n");
			}
			else
			{
				printf("last");
				printf("Incorrect Input sequence of Brackets\n");
			}
		}
	}
}
/*void push(char ch)
{
	
}

void pop(char ch)
{
	
}*/
