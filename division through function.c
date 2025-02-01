#include<stdio.h>

void div(float a,float b)
{
    printf("Enter first value:");
    scanf("%f",&a);

    printf("Enter second value:");
    scanf("%f",&b);

    printf("%f/%f=%f",a,b,a/b);
}


int main()
{
    int a,b;
    div(a,b);

    return 0;
}
