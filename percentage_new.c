#include<stdio.h>

int add(int hin,int mar,int eng)
{

    int total=hin+mar+eng;

    return total;
}

 void percentage(int tt)
{

    int per= tt*100/300;

    printf("Percentage=%d",per);


}


int main()
{

  int new_total;
  new_total=add(80,80,80);

  printf("sum of marks=%d\n",new_total);

  percentage(new_total);


  return 0;
}
