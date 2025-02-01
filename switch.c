#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int i,num,count,r,b,sum;
    int ch;
    while(1)
    {
        printf("Name:-Aishwarya Lala\n");
        printf("Roll No.:-F01\n");
        printf("\n 1) Check for even or odd number");
        printf("\n 2) Check for positive,negative or zero");
        printf("\n 3) Check for prime number or not");
        printf("\n 4) Check for palindrome number");
        printf("\n 5) Check for armstrong number");
        printf("\n 6) Exit");
        printf("\n 1) Enter your choice");
        scanf("%d",&ch);
        switch(ch)
    {
        case 1:printf("\n Enter any number");
               scanf("%d",&num);
               if(num%2==0)
               {
                   printf("\n %d is an even number");
               }
                  else
               {
                   printf("\n %d is an odd number");
               }
                   break;
        case 2:printf("\n Enter any number");
               scanf("%d",&num);
               if(num>0)
               {
                   printf("\n %d is a positive number");
               }
                  else
               {
                      if(num<0)
                    {
                       printf("\n %d is a negative number");
                    }
               }
                {
                    printf("\n %d is Zero");
                }
        
                   break;
        case 3:printf("\n Enter any number");
               scanf("%d",&num);
               for(i=1;i<=num;i++)
               {
                   if(num%i==0)
                 {
                    count++;
                 }
               }
                   if(count>=2)
                    printf("\n %d is not a prime number");
               
                  else
               {
                   printf("\n %d is a prime number");
               }
        case 4:printf("\n Enter any number");
               scanf("%d",&num);
               b=num;
               while(num>0)
               {
                  r=num%10;
                  sum=sum*10+r;
                  num=num/10;
               }
                  if(sum==b)
               {
                   printf("\n %d is a Palindrome number");
               }
                  else
            {
                    printf("\n %d is not a Palindrome number");
            }
        case 5:printf("\n Enter any number");
               scanf("%d",&num);
               b=num>0;
               while(num>0)
               {
                   r=num%10;
                   sum=sum+r*r*r;
                   num=num/10;
               }
                  if(sum==b)
               {
                   printf("\n %d is an Armstrong number");
               }
                   else
                {
                    printf("\n %d is not an Armstrong number");
                }
        case 6:printf("\n exit");
    }
    }

        return 0;

}
