#include<stdio.h>
main()
{
    int num,j;

    printf("Enter any number: ");
    scanf("%d",&num);

    for(j=1;j<=10;j++)
    {
        printf("%d\n",num*j);

    }
}