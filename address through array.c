#include<stdio.h>
int main()
{
    char a[5][15];

    printf("Enter your house number:");
    scanf("%s",&a[0]);

    printf("Enter your locality:");
    scanf("%s",&a[1]);

    printf("Enter your city:");
    scanf("%s",&a[2]);

    printf("Enter your state:");
    scanf("%s",&a[3]);

    printf("Enter your country:");
    scanf("%s",&a[4]);


    printf("So your address is %s,%s,%s,%s,%s.",a[0],a[1],a[2],a[3],a[4]);


    return 0;



}
