#include<stdio.h>
int main()
{
int a,b;
int *p,*q;

p=&a;
q=&b;

printf("Enter the value of a: ");
scanf("%d",&a);

printf("\n");
printf("Enter the value of b: ");
scanf("%d",&b);
printf("\n");

printf("Address of a is :%x",&a);
printf("\n");
printf("Address of b is :%x",&b);
printf("\n");

return 0;

}
