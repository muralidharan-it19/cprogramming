#include<stdio.h>
void main()
{
int a,b,c,d;
printf("enter values for a,b,c,d:");
scanf("%d %d %d %d",&a,&b,&c,&d);
if(a<b&&a<c&&a<d)
{
printf("%d is smaller",a);
}
else if(b<c&&b<d)
{
printf("%d is smaller",b);
}
else if(c<d)
{
printf("%d is smaller",c);
}
else 
{ 
printf("%d is smaller",d);
}
}
