#include<stdio.h>
int main(){
int num,b,sum=0,r;
printf("Enter the value of a:");
scanf("%d",&num);
b==num;
while (num>0)
{
r=num%10;
sum=sum+r*r*r;
}
if (sum==b)
{
printf("a is an armstrong number");
}
else
{
printf("a is not an armstrong number");
}
return 0;
}
