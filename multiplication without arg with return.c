#include<stdio.h>

float multi(){

float a,b;
printf("enter the first value:");
scanf("%f",&a);

printf("enter the second value:");
scanf("%f",&b);

return a*b;

}

int main(){

printf("%f\n",multi());


return 0;
}
