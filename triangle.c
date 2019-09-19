#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter 3 angles of the triangle:");
scanf("%d %d %d",&a,&b,&c);
if(a+b+c==180)
{
printf("It is valid triangle");
}
else
{
printf("It is not a valid triangle");
}
}
