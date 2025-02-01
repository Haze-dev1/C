#include<stdio.h>
int main(){
int i,j;                                                                       //1
                                                                               //1    2
for (i=1;i<=4;i++)                                                             //1    2   3
{                                                                              //1    2   3   4
for (j=1;j<=i;j++)
    printf("%d",j);
printf("\n");
}
return 0;
}
