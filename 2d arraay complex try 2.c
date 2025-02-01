#include<stdio.h>
int main()
{
 int a[3][3],i,j,sum[3],pro[3],b,c,d,e;

 pro[0]=1;
pro[1]=1;
pro[2]=1;

    for(i=0;i<3;i++)

    {
        for(j=0;j<3;j++)

        {
            printf("Enter the elements:");
            scanf("%d",&a[i][j]);
            }

    }


//row 1
    for(i=0;i<1;i++)

    {
        for(j=0;j<3;j++)

        {
            printf("%d      ",a[i][j]);

            sum[0]=sum[0]+a[i][j];
            }
printf("                    Sum is %d",sum[0]);
printf("\n");
    }

//row 2
    for(i=1;i<2;i++)

    {
        for(j=0;j<3;j++)

        {
            printf("%d      ",a[i][j]);

            e=e+a[i][j];
            }

printf("                    Sum is %d",e);
printf("\n");
    }


//row 3
    for(i=2;i<3;i++)

    {
        for(j=0;j<3;j++)

        {
            printf("%d      ",a[i][j]);

            sum[2]=sum[2]+a[i][j];
            }
printf("                    Sum is %d",sum[2]);
printf("\n");
    }

    b=e+sum[2]+sum[0];
    printf("SUM OF ROWS IS %d",b);
    printf("\n");

//column1
   for(i=0;i<=2;i++)

    {
        for(j=0;j<1;j++)

        {

            pro[0]=pro[0]*a[i][j];
            }

    }
printf("Product of 1st column is %d",pro[0]);
printf("\n");
//column 2
    pro[1]==1;
   for(i=0;i<=2;i++)

    {
        for(j=1;j<2;j++)

        {

            pro[1]=pro[1]*a[i][j];
            }

    }
printf("Product of 2nd column is %d",pro[1]);
printf("\n");
    //column 3
    pro[2]==1;
     for(i=0;i<3;i++)

    {
        for(j=2;j<3;j++)

        {

            pro[2]=pro[2]*a[i][j];
            }

    }



    printf("Product of 3rd column is %d",pro[2]);
printf("\n");

c=pro[0]+pro[1]+pro[2];
printf("Sum of product of columns is %d",c);
printf("\n");

d=b+c;

printf("Sum of sum of rows and product of columns is %d",d);

 return 0;

}

