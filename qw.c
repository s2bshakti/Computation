#include<stdio.h>
int main()
{
int i,n;
int arr[10];
printf("enter the no of elements");
scanf("%d",&n);
for(i=0;i<n-1;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
return 0;
}
