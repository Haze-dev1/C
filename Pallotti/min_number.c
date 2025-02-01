#include<stdio.h>
main()
{
    int a,b,c,d,e,min;
    printf("enter any five numbers: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    min=a;
    if(b<min)
    {
        min=b;
    }
     if(c<min)
    {
        min=c;
    }
     if(d<min)
    {
        min=d;
    }
     if(e<min)
    {
        min=e;
    }

    printf("The smallest number is %d",min);
    
}