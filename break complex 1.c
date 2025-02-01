#include<stdio.h>
int main(){

for(int a=20;a>=1;a--)
{

if(a==5||a==10||a==15||a==20)
continue;

else
printf("%d,",a);
}
return 0;
}
