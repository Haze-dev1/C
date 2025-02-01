#include<stdio.h>

int main(){

char a[15];
char b[15];

//printf("enter your first name:");
//scanf("%s",a);

printf("Enter any string:");

gets(a);// to take user input from the user

puts(a);// to print the string value

//printf("enter your last name:");
//scanf("%s",b);

printf("So your full name is %s ",a);

return 0;

}
