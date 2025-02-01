#include<stdio.h>

int main(){

//char a[100];

char a[10];

printf("please suggest any changes to code blocks:");

//gets(a);

fgets(a,10,stdin);

//printf("So your suggestion was '%s'",a);

puts(a);

return 0;

}
