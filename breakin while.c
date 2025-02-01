#include<stdio.h>
int main(){

int a=1;
while(a<=10){
if(a==5)
break;
printf("%d,",a);
a++;
}
return 0;
}
//break - destroys the loop
//continue - omits the number specified
