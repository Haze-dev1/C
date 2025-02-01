#include<stdio.h>
void add(int a,int b)
{

    printf("Enter the first value:");
    scanf("%d",&a);

    printf("Enter the second value:");
    scanf("%d",&b);

    printf("sum is equal to %d",a+b);
}



int main()
{
    int a,b;
       add(a,b);

    return 0;
}
