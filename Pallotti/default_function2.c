#include<stdio.h>

void is_pos_neg_zero()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    if(a>0)
    {
        printf("Positive");    
    }

    else
    {
        if(a<0)
        {
            printf("Negative");
        }

        if (a==0)
        {
            printf("Zero");    
        }
        
        else
        {
            printf("not valid");
        }
    }
}

int main()
{
    is_pos_neg_zero();

    return 0;
}