#include<stdio.h>

int sum(int a,int b)
{
        printf("Enter first number:");
        scanf("%d",&a);

        printf("Enter second number:");
        scanf("%d",&b);

int total=a+b;

return total;
}

int per(int sum(),int c)
{
        printf("Enter maximum numbers:");
        scanf("%d",&c);


    int percent=sum()*100/c;

    return per;
}

int main()
{

    printf("So percentage is %d",per());


    return 0;
}
