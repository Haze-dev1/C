/*
Create a structur employee consists of employee name, age, salary as structure member.
create two structure variables, store and display the values of these structure variables.

program
*/
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
printf("Name-Devansh Palsapure Roll no-34\n ");

printf("Enter your name, age and salary\n");
scanf("%s%d%d",&a.name,&a.age,&a.salary);

printf("SO YOUR NAME IS %s ,YOUR AGE IS %d ,YOUR SALARY IS %d",a.name,a.age,a.salary);

struct employee b;

printf("\nEnter your name, age and salary\n");
scanf("%s%d%d",&b.name,&b.age,&b.salary);

printf("SO YOUR NAME IS %s ,YOUR AGE IS %d ,YOUR SALARY IS %d",b.name,b.age,b.salary);

return 0;

}
