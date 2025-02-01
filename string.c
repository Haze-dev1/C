#include<stdio.h>

int main()
{

    //string: String is the sequence of characters. To print string value we take char
    // data type. To print the string value we take format string %s.

    //char a[]="santosh";

    char a[7];

    //char a[]={'s','a','n','t','o','s','h','\0'};

    printf("Enter any string:");
    scanf("%s",&a);

    printf("%s",a);

    return 0;
}
