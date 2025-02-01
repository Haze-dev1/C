#include<stdio.h>

void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("\n");
    printf("So a=%d and b=%d after swapping",*p,*q);

}

int main()
{

printf("a=10 and b= 20");
    int a=10,b=20;N
    swap(&a,&b);
    return 0;


}
