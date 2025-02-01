//write a c program to convert given distance in m to its equivalent cm, km and inch and feet

#include<stdio.h>

int main()
{
    float m,cm,km,i,f;

    printf("Enter the distance in meter: ");
    scanf("%f",&m);

    cm=100*m;
    km=m/1000;
    i=cm/2.54;
    f=m/12;

    printf("\nSo the equivalent cm is %.2f: ",cm);
    printf("\nSo the equivalent km is %f: ",km);
    printf("\nSo the equivalent inch is %.2f: ",i);
    printf("\nSo the equivalent feet is %.2f: ",f);

    return 0;
}


