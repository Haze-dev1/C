#include<stdio.h>

int add(int hin,int mar,int eng)
{

    printf("Enter the marks of Hindi:");
    scanf("%d",&hin);

    printf("Enter the marks of Maths:");
    scanf("%d",&mar);

    printf("Enter the marks of English:");
    scanf("%d",&eng);


int total=hin+mar+eng;

return total;
}

void percentage(int p)
{

 int mark;
    printf("Enter maximum marks:");
    scanf("%d",&mark);

int per=p*100/mark;

printf("Percentage is equal to %d",per);
}


int main()
{
int hin,mar,eng;
  int new_total;

  new_total=add(hin,mar,eng);

  printf("sum of marks=%d\n",new_total);

  percentage(new_total);


  return 0;
}
