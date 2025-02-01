#include<stdio.h>

void sub(int a,int b)
{
    printf("Enter first value:");
    scanf("%d",&a);

    printf("Enter second value:");
    scanf("%d",&b);

    printf("%d-%d=%d",a,b,a-b);
}


int main()
{
    int a,b;
    sub(a,b);

    return 0;
}
