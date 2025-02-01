#include<Stdio.h>
int main()

{
    float a,b,c,d;


    printf("Enter marks obtained:");
    scanf("%f",&a);

    printf("Enter total number of marks:");
    scanf("%f",&b);


    c=a/b;
    c=c*100;


    printf("Your percentage is %f",c);

    return 0;
}
