#include <stdio.h>
void main()
{
printf("Devansh Palsapure\tRoll No: 34\n");
int i,j;
for (i=1;i<=5;i++)
{
for(j=5; j>=i; j--)
{
printf("*");
}
for(j=2; j<=i; j++)
{
printf(" ");
}
for(j=5; j>=i; j--)
{
printf("*");
}
printf("\n");
}



}
