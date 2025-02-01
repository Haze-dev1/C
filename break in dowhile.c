#include<stdio.h>
int main(){
int a=0;

do{
a++;
if(a==5)
//break;
continue;
else if(a==11)
break;

printf("%d,",a);


}while(a<=10);



return 0;
}
