     #include<stdio.h>


  struct donor
   {
    char name[20];
     char address[100];
      char blood_group[20];
       int age;
       int weight,contact;
        };



    int main()
    {
        struct donor a[3];
        int i,flag=0,record=0;

     for(int i=0;i<=3;i++)
        {


        printf("Enter your name:");
        scanf("%s",&a[i].name);

        printf("Enter your blood group:");
        scanf("%s",&a[i].blood_group);

        printf("Enter your age:");
        scanf("%d",&a[i].age);

        printf("Enter your weight:");
        scanf("%d",&a[i].weight);

        printf("Enter your contact number:");
        scanf("%d",&a[i].contact);

        printf("Enter your address:");
        scanf("%s",&a[i].address);
        printf("\n");
        }
for(i=0;i<3;i++)
{
    printf("Donor name is %s",a[i].name);
    printf("Donor's blood group is %s",a[i].blood_group);
    printf("Donor's age is %d",a[i].age);
    printf("Donor's weight is %d",a[i].weight);
    printf("Donor's contact number is %d",a[i].contact);
    printf("Donor's address is %s",a[i].address);
    printf("\n");
}
printf("------------------------------------");
printf("\n");
for(i=0;i<3;i++)
{
    if(a[i].age<35)
    {
        flag=flag+1;
        printf("Donor name is %s",a[i].name);
    printf("Donor's blood group is %s",a[i].blood_group);
    printf("Donor's age is %d",a[i].age);
    printf("Donor's weight is %d",a[i].weight);
    printf("Donor's contact number is %d",a[i].contact);
    printf("Donor's address is %s",a[i].address);
    printf("\n");}
}
printf("------------------------------------");
printf("\n");
for(i=0;i<3;i++)
{
    if(a[i].blood_group=="O+ve")
    {
        record=record+1;
        printf("Donor name is %s",a[i].name);
    printf("Donor's blood group is %s",a[i].blood_group);
    printf("Donor's age is %d",a[i].age);
    printf("Donor's weight is %d",a[i].weight);
    printf("Donor's contact number is %d",a[i].contact);
    printf("Donor's address is %s",a[i].address);
    printf("\n");}

    return 0;

}
    }
