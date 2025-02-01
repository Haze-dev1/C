#include<stdio.h>
int main(){
int i,j;

for(i=1;i<=4;i++)
{
    for (j=1;j<=4;j++)
    {
        if(i==1&&j==2)
        {continue;}

        if(i==1&&j==3)
        {continue;}

        if(i==1&&j==4)
        {continue;}

        if(i==2&&j==3)
        {continue;}

        if(i==2&&j==4)
        {continue;}

        if(i==3&&j==4)
        {continue;}


        printf("%d  ",j);


    }
printf("\n");
}

return 0;
}


