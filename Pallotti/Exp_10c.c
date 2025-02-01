//write a user defined function reverse which will return the reverse of any number passed from the function main
//program-

#include<stdio.h>
void reverse(int a)
{
    int remainder,rev,temp;

    temp=a;
    rev=0;
   while(a>0) 
   {
        remainder = a % 10; 
        rev = rev * 10 + remainder;
        a=a/10;
    }

    printf("The reverse of %d is %d",temp,rev);

}

int main()
{
    int num;

    printf("Name-Devansh Palsapure Roll no-34\n ");
    printf("Enter a number: ");
    scanf("%d",&num);

    reverse(num);
    
    return 0;

}