#include<stdio.h>
main()
{
    int a,b;

    printf("Enter any two number: ");
    scanf("%d%d",&a,&b);

    printf("\nThe sum of %d and %d is %d",a,b,a+b);
    printf("\nThe subtraction of %d and %d is %d",a,b,a-b);
    printf("\nThe Multiplication of %d and %d is %d",a,b,a*b);
    printf("\nThe division of %d and %d is %d",a,b,a/b);
    

    return 0;
}