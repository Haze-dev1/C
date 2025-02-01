#include<stdio.h>
int main()
{
    int n,sum;

    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n],i;

    for(i=0;i<n;i++)
{

printf("enter the numbers:");

scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("So the sum of %d numbers is %d",n,sum);
return 0;
}
