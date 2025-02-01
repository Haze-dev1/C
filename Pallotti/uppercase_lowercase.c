#include<stdio.h>
main()
{
    char a;

    printf("Enter any character: ");
    scanf("%c",&a);

    if(a>=65 && a<=90)
    {
        printf("Uppercase");
    }
    
    if else(a>=97 && a<=122)
    {
        printf("lowercase");
    }
    
    if else(a>=48 && a<=57)
    {
        printf("Uppercase");
    }
    
    else
    {
        printf("Special character");
    };
}