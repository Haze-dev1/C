#include<stdio.h>
int main()
{
 int n;

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

printf("elements are=%d\n",a[i]);

}
return 0;
}

