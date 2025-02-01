//Write a c program to multiply two matrices of size 3X3
// program

#include<stdio.h>
int main()
{
    int a[3][3], b[3][3],c[3][3];
    int i,j,k;

    printf("Name-Devansh Palsapure Roll no-34\n");    
    printf("Enter the first 3X3 matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the second 3X3 matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("\n The first matrix was: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\n The second matrix was: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)    
    {    
        for(j=0;j<3;j++)    
        {    
            c[i][j]=0;    
            for(k=0;k<3;k++)    
            {    
                c[i][j]+=a[i][k]*b[k][j];    
            }    
        }    
    }    

    printf("The multiplied matrix is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;

}



//while loop
// difference between while and do while loop
//Difference between break and continue
// what is array
// what is menu defined program
// what is default statement
// which data type of datatype is used in switch case statement
//what is 2d array
// difference between 1d and 2d array
// intialization of array
// Logic of armstrong and palindrome number
    
