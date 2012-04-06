#include<stdio.h>
#include<string.h>
main()
{
	FILE *fp;
	char ch;
	int curbrakt_strt=0,curbrakt_end=0,sqrbrakt_strt=0,sqrbrakt_end=0,brakt_strt=0,brakt_end=0;
	fp=fopen("qw.c","r");
	while(fscanf(fp,"%c",&ch)!=EOF)
	{
		if(ch=='{')
		{
			curbrakt_strt++;
		}
		if(ch=='(')
		{
			brakt_strt++;
		}
		
		if(ch=='[')
		{
			sqrbrakt_strt++; 
		}
		if(ch=='}')
		{
			curbrakt_end++;
		}
		if(ch==')')
		{
			brakt_end++;
		}
		
		if(ch==']')
		{
			sqrbrakt_end++; 
		}
	}
		if(curbrakt_strt==curbrakt_end && brakt_strt==brakt_end && sqrbrakt_strt==sqrbrakt_end)
		printf("correct input");
		else
		{
				printf("incorrect input");
		}
}
