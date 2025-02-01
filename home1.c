#include<stdio.h>
int main(){

int a,b,c,d,e;
float s;

printf("enter the value of a:");
scanf("%d",&a);

printf("enter the value of b:");
scanf("%d",&b);

printf("enter the value of c:");
scanf("%d",&c);

printf("enter the value of d:");
scanf("%d",&d);

printf("enter the value of e:");
scanf("%d",&e);

s=a+b+c+d+e;

printf("%d+%d+%d+%d+%d=%f",a,b,c,d,e,s);

return 0;
}
