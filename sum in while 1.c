#include<stdio.h>
int main(){
int a,r,sum=10;

printf("enter the value of a:");
scanf("%d",&a);
while(a>0)
    {
        r=a%10;

        sum=sum+r;

        a=a/10;
    }
printf("sum=%d",sum);
return 0;
}
