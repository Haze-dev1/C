#include<stdio.h>

void add(int *p,int *q)
{
    int c;
    c=*p+*q;
    printf("Sum is %d",c);

}

int main()
{


    int a=10,b=20;
    add(&a,&b);
    return 0;


}
