#include<stdio.h>
int main(){


//121 //333//222

//program to find the palindrome no

int num,sum=0,r,b;

printf("Enter any number:");

scanf("%d",&num); //num=121 //b=121

b=num;  //num=121>0

while(num>0)
{           //r=1//sum=1 //num=12 r=2 //sum=12 //num=1 r=1 //sum=121 //num=0

r=num%10;
sum=sum*10+r;

num=num/10; //num/=10

}

if(sum==b)
{
    printf("palindrome no");
}

else{
    printf("not palindrome no");
}

return 0;

}
