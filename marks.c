#include<stdio.h>
#include<conio..h>
void main()
{
int a,b,c,d,e,total;
printf("enter marks for the subjects");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
total=a+b+c+d+e;
if(a>=50&&b>=50&&c>=50&&d>=50&&e>=50)
{
printf("The student has passed the exam and the total is %d",total);
}
else
{
printf("the student has failed the exam and the total is %d",total);
}
getch();
}




