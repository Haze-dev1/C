#include<stdio.h>
main()
{
    float bits,bytes,kb,mb;
    printf("\nEnter byte: ");
    scanf("%f",&bytes);

    bits=8*bytes;
    kb=bytes/1024;
    mb=kb/1024;

    printf("\n Equivalent bits= %.2f",bits);
    printf("\n Equivalent Kb=%.2f",kb);
    printf("\n Equivalent Mb= %.2f",mb);

}
