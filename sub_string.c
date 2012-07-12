#include<stdio.h>
#include<string.h>
main()
{
	int a,len_sub,len_main;
	char main[100];
	char sub[100];
	scanf("%s",main);
	scanf("%s",sub);
	len_sub=strlen(sub);
	//len_main=strlen(main);
	//printf("%d",len_main);
	a=check_present(main,sub);	
	if(a==len_sub)
	{
		printf("substring is present \n");
	}
	else
	{
		printf("substring is not present \n");
	}
}
int check_present(char* main,char* sub)
{
	int count=0;
	char sub_sim='1',main_sim='2';
	//printf("%c %c",sub_sim,main_sim);
	while(*sub!='\0')
	{
		while(*main!='\0')
		{	
			if(*sub==*main)
			{
				main++;
				count++;
				printf("%d",count);
				break;
			}
			else
			main++;
		}
		sub++;
		if(*main!=*sub&&*sub!='\0')
		return 0;	
	}	
printf(" outside while %d",count);
return count;
}
