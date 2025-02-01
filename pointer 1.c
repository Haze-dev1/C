
#include<stdio.h>
int main()
{
int a=10,b=20,c;
int *p,*q;

p=&a;
q=&b;


printf("Address of a is :%x",&a);
printf("\n");
printf("Address of b is :%x",&b);
printf("\n");

c=*p+*q;
printf("Sum of a and b is %d",c);


return 0;
}
