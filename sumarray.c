

#include<stdio.h>
void main()
{
int a[5],i,sum=0;
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
sum+=a[i];
}
printf("\n the sum of array is %d",sum);
}
