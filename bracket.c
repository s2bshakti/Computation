#include<stdio.h>
#include<string.h>
main()
{
//checking
	FILE *fp;
	char ch;
	int a=0,a1=0,b=0,b1=0,c=0,c1=0;
	fp=fopen("qw.c","r");//input is taken here in qw.c so create one and give input through it.
	while(fscanf(fp,"%c",&ch)!=EOF)
	{
		if(ch=='{')
		{
			a++;
		}
		if(ch=='(')
		{
			b++;
		}
		
		if(ch=='[')
		{
			c++; 
		}
		if(ch=='}')
		{
			a1++;
		}
		if(ch=='(')
		{
			b1++;
		}
		
		if(ch==']')
		{
			c1++; 
		}
	}
		if(a==a1 && b==b1 && c==c1)
		printf("correct input");
		else
		{
				printf("incorrect input");
		}
}
