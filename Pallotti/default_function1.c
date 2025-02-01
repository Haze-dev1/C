#include<stdio.h>

void maximum()
{
    int a,b,c,max;

    printf("\n Enter three numbers:");
    scanf("%d",&a,&b,&c);

    if(a>b &&a>c)
    {
        printf("%d is greatest.",a);
    }

    else
    {
        if(b>c)
        {
            printf("%d is greatest.",b);
        }

        else
        {
            printf("%d is greatest.",c);
        }
    }
    

}

int main()
{

    maximum();
}