#include<stdio.h>
int main()

{int b,c;
{for(int a=10;a>=1;a--)
{

printf("%d ,",a);}

}

for(int a=1;a<=10;a++)
    {
    printf("%d ,",a);
    }

printf("was it good?\n");
printf("type 1 for yes and 2 for no");
scanf("%d",&b);

if(b==1){
printf("thank you for your support\n");
}
else if(b==2){
printf("we are sorry\n");
}

else{
printf("we are sorry, what can we change");

scanf("%s",c);
printf("so we will try to improve our system by %s",c);
}
return 0;
}

