#include<stdio.h>
int main()
{

int a=0,r,sum=0,pro=1;

for(int a=0;a<=10;a++)
{

if(a%2==0)
{

    sum=sum+a;


}



else{

    pro=pro*a;


}


}
printf("SUM=%d\n",sum);
printf("PRODUCT=%d\n",pro);

return 0;
}




