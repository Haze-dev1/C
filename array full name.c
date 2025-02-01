#include<stdio.h>

int main()
{

    char a[3][10];
    //int i;

   printf("Enter your first name:");
   scanf("%s",&a[0]);

   printf("Enter your middle name:");
   scanf("%s",&a[1]);

   printf("Enter your last name:");
   scanf("%s",&a[2]);




   printf("So your full name is %s %s %s",a[0],a[1],a[2]);

   return 0;
}
