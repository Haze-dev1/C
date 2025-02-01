#include<stdio.h>

struct teacher
{

    char name[100];
    int exp;
    int salary;

};
int main()
{
struct teacher a;

printf("Enter your name, How many years of work experience and salary");
printf("\n");
scanf("%s%d%d",&a.name,&a.exp,&a.salary);

printf("SO YOUR NAME IS %s ,YOUR work is %d ,YOUR SALARY IS %d",a.name,a.exp,a.salary);

return 0;

}
