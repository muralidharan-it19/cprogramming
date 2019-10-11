#include<stdio.h>
void main() {
    char s[20];
    int i;
    printf("enter a string:");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
    printf("\n%c",s[i]);
     }
}
