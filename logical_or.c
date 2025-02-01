#include<stdio.h>
int main(){

int a,b,c;

printf("Enter first number:");
scanf("%d",&a);

printf("Enter second number:");
scanf("%d",&b);

printf("Enter third number:");
scanf("%d",&c);

if (a>b || a>c)
{
    printf("a is greater than any one number");
}
else if (b>a && b>c)
{
printf("b is greater than both a and c");
}
else if (c>a && c>b)
{
printf("c is greater than both a and b");
}
return 0;

}
