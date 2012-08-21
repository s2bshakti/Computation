#include<stdio.h>
#include<string.h>
int no_operation(char*);
int main()
{
	int test,len_input,output[100],i,num;
	char input[1000];
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
	scanf("%s",input);
	len_input=strlen(input);
	num=no_operation(input);
	if((len_input*11)>=num)
		output[i]=0;
	else
		output[i]=1;
	}
	for(i=0;i<test;i++)
	{
		if(output[i]==0)
		printf("YES\n");
		else
		printf("NO\n");	
	}
	return 0;
}
int no_operation(char input[])
{
	int no_op=2,i=1,inc,temp0,temp1;
	while(input[i]!='\0')
	{
		temp1=input[i];
		temp0=input[i-1];
		if(temp1 < temp0)
		{
			inc=(('z'-temp0)+(temp1-'a')+1);
			no_op +=inc;
			no_op++;
		}		
		else
		{
			inc=(temp1-temp0);
			no_op+=inc;
			no_op++;
		}
		i++;	
	}
return no_op;
}

