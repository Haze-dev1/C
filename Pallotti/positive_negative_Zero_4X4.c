#include<stdio.h>
int main()
{
    int arr[4][4];
    int i,j,pcount,ncount,zcount;


    printf("Enter a 4X4 matrix: \n");

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("The matrix was:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

       for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(arr[i][j]>0)
            {
                pcount++;
            }

            
            if(arr[i][j]>0)
            {
                ncount++;
            }

            
            if(arr[i][j]=0)
            {
                zcount++;
            }
        }
    }

printf("Positive numbers: %d\n",pcount);
printf("negative numbers: %d\n",ncount);
printf("Zero numbers: %d\n",zcount);

return 0;
}