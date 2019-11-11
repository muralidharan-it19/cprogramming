#include <stdio.h>
int fact(int a); int main() {
    int a;
    printf("Enter a positive integer: ");
    scanf("%d",&a);
    printf("Factorial of %d =%d", a,fact(a));
    return 0;
}
int fact(int a) {
    if (a>0)
        return a*fact(a-1);
    else
    
     return 1;
}
