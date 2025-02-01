#include<stdio.h>
main()
{
    char a;

    printf("Enter any character: ");
    scanf("%c",&a);

    if(a>=65 && a<=90)
    {
        a=a+32;
        printf("Equivalent lower case is %c",a);
    };
}