//Write a c program to find the largest and smallest number present in a array of size 15
//program

#include<stdio.h>
int main()
{
    int a[15];
    int max,min,i;

printf("Name-Devansh Palsapure Roll no-34\n");

printf("Enter 15 numbers:");
for(i=0;i<15;i++)
{
    scanf("%d",&a[i]);
}

max=a[0];
min=a[0];

for(i=0;i<15;i++)
{
    if(a[i]>max)
    {
        max=a[i];
    }
}

for(i=0;i<15;i++)
{
    if(a[i]<min)
    {   
        min=a[i];
    }
}

printf("The largest number is %d and the smallest number is %d",max,min);   

return 0;
}