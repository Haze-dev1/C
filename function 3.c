#include<stdio.h>
void sum(){
int a,b,c;

printf("Enter the value of a:");
scanf("%d",&a);

printf("Enter the value of b:");
scanf("%d",&b);

c=a+b;

printf("Sum=%d",c);

}


int main(){

sum();
printf("\n");
sum();

return 0;
}
