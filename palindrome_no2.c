#include<stdio.h>
int main(){

int num,sum=0,b,r;
printf("Enter the value of a:");
scanf("%d",&num);
b=num;
while(num>0)
{
r=num%10;
sum=sum*10+r;
num=num/10;
}
if (sum==b)
{
printf("This is a Palindrome number");
}
else {
printf("This is not a Palindrome number");
}
return 0;
}
