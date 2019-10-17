#include <stdio.h>
int main()
{
    int a[50],flag,i,n,x;
    printf("Enter the number of elements to be added to array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter element to be found:");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
    if(a[i]==x)
    {
        flag=1;
        break;
    }
    }
    if(flag==0)
    {
        printf("element %d is not found",x);

    }
    else
    {
        printf("element %d is found in the location %d",x,i);
    }
}

    
    
