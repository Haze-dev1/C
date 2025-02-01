#include<stdio.h>
int main(){

//Arm strong no: 370 =>The sum of cube of individual digit is called as Arm strong no

// 3 digits arm strong no

int num,sum=0,r,b;

printf("Enter any number:");
scanf("%d",&num);

b=num;

while(num>0)

{
    r=num%10;

    sum=sum+r*r*r;

    num=num/10;

}


if(sum==b)
{
    printf("Arm strong number");
}

else{

        printf("Not Arm strong number");

}
return 0;
}
