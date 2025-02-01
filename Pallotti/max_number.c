#include<stdio.h>
main()
{
    int a,b,c,d,e,max;
    printf("enter any five numbers: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    max=a;
    if(max<b)
    {
        max=b;
    }
     if(max<c)
    {
        max=c;
    }
     if(max<d)
    {
        max=d;
    }
     if(max<e)
    {
        max=e;
    }

    printf("The largest number is %d",max);
    
}