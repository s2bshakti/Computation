#include<stdio.h>
void main()
 {
 int max[3][3],allocation[3][3],need[3][3],work[3],available[3],finish[3]={0,0,0};
int i,j,c,k,check; 
printf("Enter the maximum requirment of the processes\n");
for(i=0;i<3;i++)
{
printf("PROCESS %d\n",i);
for(j=0;j<3;j++)
{
printf("Resource %d\n",j);
scanf("%d",&max[i][j]);
}
}

printf("Enter the allocation of the processes");
for(i=0;i<3;i++)
{
printf("PROCESS %d\n",i);
for(j=0;j<3;j++)
{
printf("Resource %d\n",j);
scanf("%d",&allocation[i][j]);
}
}

printf("Enter the available resources\n");
for(i=0;i<3;i++)
{
printf("Resource %d\n",i);
scanf("%d",&available[i]);
}

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
need[i][j]=max[i][j]-allocation[i][j];
}
}

for(i=0;i<3;i++)
{
work[i]=available[i];
}

//SAfety Algo.
for(i=0;i<3;i++)
{
if (finish[i]==0)
{
c=0;    
for(j=0;j<3;j++)
	{
if(need[i][j]<=work[j])
 {
c++;		
}
}
if(c==3)
{
for(k=0;k<3;k++)
{
work[k]=work[k]+allocation[i][k];
}
finish[i]=1;
}
}
}

check=0;
printf("The finish matrix\n");
for(i=0;i<3;i++)
{
printf("%d\n",finish[i]);
if(finish[i]==1)
check++;
}
if(check==3)
printf("The state is safe \n");
else
printf("The state is unsafe\n");
}




