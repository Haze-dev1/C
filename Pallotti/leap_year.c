#include<stdio.h>
main()
{
    int year;

    printf("Enter any year: ");
    scanf("%d",&year);

    if(year%100==0)
    {
        printf("\nCentury year");
        if(year%400==0)
        {
            printf("\nLeap year");
        }

        else
        {
            printf("\nNon-Leap year");
        };
    }

    else
    {
        printf("\nNon-Century year");
        
        if(year%4==0)
        {
            printf("\nLeap year");
        }

        else
        {
            printf("\nNon-Leap year");
        };
    }
}