// [c]: differentiate between the concept of break and continue keyword
// Program:
//2
#include<stdio.h>
int main()
{
int i;

for (i = 0; i < 10; i++)
{

  if (i == 4) 
  {
      continue;
  }
  printf("%d\n", i);
}
return 0;
} 