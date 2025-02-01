#include<stdio.h>
int main(){
int a=0,sum=0,r;
for(int a=0;a<=10;a+2){
while(a>0)
{
r=a%10;
sum=sum+r;
a=a/10;
}
printf("sum=%d",sum);
return 0;}
}



