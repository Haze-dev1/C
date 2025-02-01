#include<stdio.h>

struct employee
{

    char name[100];
    int age;
    int salary;

};
int main()
{
struct employee a;

printf("Enter your name, age and salary");
printf("\n");
scanf("%s%d%d",&a.name,&a.age,&a.salary);

printf("SO YOUR NAME IS %s ,YOUR AGE IS %d ,YOUR SALARY IS %d",a.name,a.age,a.salary);


return 0;

}
