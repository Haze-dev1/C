#include<stdio.h>
int main()
{
    int a,b,*p,*q;


    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);

    p=&a;
    q=&b;

    printf("Before swap : a=%d and b=%d",*p,*q);
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;

    printf("\n");

    printf("After swap : a=%d and b=%d",*p,*q);

    return 0;
}
