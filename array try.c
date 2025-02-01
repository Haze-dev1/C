#include<stdio.h>
int main()
{
    int a[4],i,sum,j;

    for(i=0;i<4;i++)
{

printf("enter the elements:");

scanf("%d",&a[i]);
}
sum=0;
for(j=0;j<4;j++)
{
sum=sum+a[j];
}

printf("So the sum of %d,%d,%d,%d is %d",a[0],a[1],a[2],a[3],sum);

return 0;
}
