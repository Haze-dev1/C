#include<stdio.h>
int main()
{
float a,b,c;


printf("Enter the first number:");
scanf("%f",&a);

printf("Enter the second number:");
scanf("%f",&b);

c=a*b;

printf("%f X %f =%f",a,b,c);

printf("\n");

if(c>0)
{printf("Both numbers are positive or Both numbers are negative");}

else if(c==0)
{printf("One of the number is zero");}

else
{printf("One of the number is negative");}

return 0;



}
