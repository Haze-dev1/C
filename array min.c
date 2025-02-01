#include<stdio.h>
int main()

{
    int a[3],i;

    for(i=0;i<3;i++)
{

printf("enter the number:");

scanf("%d",&a[i]);
}
if(a[0]<a[1]&&a[0]<a[2])
{
    printf("%d is lowest number",a[0]);
}

else if(a[1]<a[0]&&a[1]<a[2])
{
    printf("%d is lowest",a[1]);
}

else
{
    printf("%d is lowest",a[2]);
}
return 0;

}
