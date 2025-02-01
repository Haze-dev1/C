#include<stdio.h>
int main()

{
int a,b,temp;

printf("Enter two numbers:");
scanf("%d%d",&a,&b);

printf("Numbers before swapping are %d and %d respectively",a,b);

temp=a;
a=b;
b=temp;

printf("\n");
printf("So a=%d and b=%d after swapping",a,b);

return 0;
}
