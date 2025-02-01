#include<stdio.h>

struct student
{
    char name[100];
    int class;
    int roll;
};
int main()
{
struct student a;

printf("Enter your Name, Class and Roll no.");
printf("\n");
scanf("%s%d%d",&a.name,&a.class,&a.roll);

printf("SO YOUR NAME IS %s ,YOUR Class IS %d ,YOUR Roll No. IS %d",a.name,a.class,a.roll);



return 0;

}
