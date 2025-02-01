#include<stdio.h>

float div()
{
float a,b;

printf("Enter first value:");
scanf("%f",&a);


printf("Enter second value:");
scanf("%f",&b);

return a/b;

}



int main(){
printf("%f",div());
return 0;

}


