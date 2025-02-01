#include<stdio.h>
int main(){

int num,i=1,fact=1;

printf("Enter the value:");
scanf("%d",&num);

if(num<0)
{
    printf("Factorial of negative number is not possible");
}
else if(num==0)
{
    printf("Factorial of 0 is 1");
}

else
{
    for(int i=1;i<=num;i++)
    {fact=fact*i;}
printf("Factorial=%d",fact);
}


return 0;
}
