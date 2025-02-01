Problem Statement B:
Program:
#include <stdio.h>
void main()
{
char ch;
printf("Devansh Palsapure\tRoll No: 34");
printf("\nEnter any lower case letter: ");
scanf("%c", &ch);
if(ch>=97&&ch<=122)
{
ch=ch-32;
}
printf("\nUpper case: %c", ch);
}