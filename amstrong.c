#include<stdio.h>
void main()
{
int a,b,c,sum=0;
printf("enter the number:");
scanf("%d",&a);
c=a;
while(a>0)
{
b=a%10;
sum=sum+(b*b*b);
a=a/10;
}
if(c==sum)
{
    printf("it is an amstrong number");
}
else
{
    printf("not an amstrong number");
    }
   
}

