#include<stdio.h>

int main()
{
    int d1,d2,d3,num,rev,temp;

    printf("Enter any three digit number:");
    scanf("%d",&num);


    temp=num;
    d1=num%10;
    num=num/10;
    d2=num%10;
    num=num/10;
    d3=num%10;


    rev=d1*100 + d2*10 + d3;

    printf("\n The original number was %d and after reversing the number is %d",temp,rev);

    return 0;
}
