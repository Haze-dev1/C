#include<stdio.h>
int main()
{
int a=1;
printf("even numbers:\n");
{
for(int a=0;a<=10;a=a+2){
    printf("%d,\n",a);}
}
printf("odd numbers:\n");
{
do{

printf("%d\n",a);
a=a+2;
}
while(a<=10);
}
//return 0;
return 0;
}
