#include<stdio.h>

int main()
{


    //1234=10

    int a,sum=0,r;

    printf("Enter the value of a:");
    scanf("%d",&a);

    while(a>0)
    {               //a=121//r=r=1
        r=a%10;

        sum=sum+r; //sum=0+1=1 //a=12 //r=2 //sum=1+2=3

        a=a/10;   //a=1 //r=1 //sum=3+1=4 //a=0

    }

    printf("sum=%d",sum);

    return 0;


}
