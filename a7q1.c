#include<stdio.h>
void fcfs(int p[3][2]);
void sjf(int p[3][2]);

void main()
{
int p[3][2],ch,i;
   printf("Enter the next cpu burst time of the 3 processes one by one\n");
   for(i=0;i<3;i++)
	{
  	scanf("%d",&p[i][0]);
	}
printf("enter your choice\n");
printf("1.FCFS\n2.SJF\n3.Exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\nFCFS\n\n");
fcfs(p);
break;
case 2:
printf("\nSJF\n\n");
sjf(p);
break;
}
}


void fcfs(int p[3][2])
 {
int i,j,k,s=0;
 float a;

for(i=0;i<3;i++)
{
k=0;
for(j=0;j<i;j++)
 {
 k=k+p[j][0];
 }
p[i][1]=k;
s=s+k;
}
a=s/3.0;
printf("Process\tNCBT\tWT\n");
for(i=0;i<3;i++)
{
printf("%d\t%d\t%d\n",i,p[i][0],p[i][1]);
}

printf("Average waiting time = %f",(a));
}
	

void sjf(int p[3][2])
 {
int i,j,t;
for(i=1;i<3;i++)
{
for(j=0;j<i;j++)
{
if(p[i][0] < p[j][0])
{
t=p[i][0];
p[i][0]=p[j][0];
p[j][0]=t;
}
}
}
fcfs(p);
}


