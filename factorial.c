
#include<stdio.h>

int main()
{
 //4!=4*3*2*1
    int num,i=1,fact=1;

    printf("Enter any number:");
    scanf("%d",&num);

    if(num<0)
    {

        printf("factorial of -ve no is not possible");
    }

    else if(num==0)
    {
        printf("factorial of 0 is 1");
    }

    else{

        while(i<=num)
        {
            fact=fact*i;
            i++;
        }
        printf("factorial=%d",fact);
    }

    return 0;
}
