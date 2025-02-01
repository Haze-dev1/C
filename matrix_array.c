#include<stdio.h>
void main()
{
    int a[4][4];
    int i,j,r,c,max;

    printf("\n Enter a 4X4 matrix:");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    max=a[0][0];
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
                r=i;
                c=j;
            }
        }
    }
    printf("\n the max number us %d at %d,%d",max,r,c);


}
