#include<stdio.h>
#include<conio.h>

void main()

{
int si,p,n,r;
printf("enter the principal amount");
scanf("%d",&p);
printf("n=");
scanf("%d",&n);
printf("r=");
scanf("%d",&r);
si=p*n*r/100;
printf("the simple interest is %d",si);
getch();
}
