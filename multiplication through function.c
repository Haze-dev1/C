#include<stdio.h>

void multi(float a,float b)
{
    printf("Enter the first value:");
    scanf("%f",&a);

    printf("Enter the second value:");
    scanf("%f",&b);

    printf("%fX%f=%f",a,b,a*b);


}

int main()
{
    float a,b;

    multi(a,b);

    return 0;
}
