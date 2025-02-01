#include<stdio.h>
int main(){

int a,r,sub=10;

printf("enter the value of a:");
scanf("%d",&a);
 while(a<=10)
    {
        r=a%10;

        sub=r-sub;

        a=a/10;

    }

printf("%d",sub);
return 0;
}
