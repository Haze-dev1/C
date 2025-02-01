#include<stdio.h>

//structure is a user defined data type which is used to store different data types in one,

struct employee{

int code;
char designation[100];
char name[100];
int salary;
};
int main()
{
    int b;
   struct employee a;

    printf("Enter your name:");
    scanf("%s",&a.name);
printf("\n");
    printf("Enter your employee code:");
    scanf("%d",&a.code);
printf("\n");
    printf("Enter your designation:");
    scanf("%s",&a.designation);
printf("\n");
    printf("Enter your salary:");
    scanf("%d",&a.salary);


    printf("PLEASE CHECK YOUR DETAILS AGAIN");
printf("\n");
    printf("Name-%s",a.name);
printf("\n");
    printf("Employee code-%d",a.code);
printf("\n");
    printf("Designation-%s",a.designation);
printf("\n");
    printf("Salary-%d",a.salary);
printf("\n");


    printf("If the details are incorrect press 0 and if correct press 1");
    scanf("%d",&b);
printf("\n");
    if(b==1)
    {
        printf("Thanks for confirming");

    }

    else if (b==0)
    {
        printf("Please refill the form");

    }

    return 0;
}

