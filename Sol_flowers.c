#include<stdio.h>
int main()
{
	int i,j,no_flower,no_boys,boys[100],cost[1000000],output=0,temp,front,rear;
	scanf("%d %d",&no_flower,&no_boys);
	for(i=0;i<no_flower;i++)
	{
		scanf("%d",&cost[i]);
	}
	for(i=0;i<no_flower-1;i++)
	{
		for(j=i+1;j<no_flower;j++)
		{
			if(cost[i]<cost[j])
			{
				cost[i]=cost[i]+cost[j];
				cost[j]=cost[i]-cost[j];
				cost[i]=cost[i]-cost[j];		
			}		
		}	
	}
	for(i=0;i<no_boys;i++)
	boys[i]=0;
	if(no_boys<=no_flower)
	{
		for(i=0;i<no_flower;i++)
		output+=cost[i];	
	}	
	else
	{
		for(i=0;i<no_boys;i++)
		{
			output+=cost[i];
			boys[i]=1;
		}
		temp=no_boys;
		front=0;
		rear=no_boys-1;
		while(temp<no_flower)
		{
			output+=(cost[temp]*(boys[front]+1));
			front++;
			if(front==rear)
			front=0;
			temp++;	
		}
	}
	printf("%d",output);
	
return 0;
}
