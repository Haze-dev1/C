#include <stdio.h>

int main() 
{
  int n, i;
  printf("Enter the size of the array: ");
  scanf("%d", &n);

  int array[n];

  printf("Enter the elements of the array: ");
  for (i = 0; i < n; i++) 
  {
      scanf("%d", &array[i]);
  }

  printf("The array is: ");
  for (i = 0; i < n; i++) 
  {
      printf("%d ", array[i]);
  }

  printf("\n");

  return 0;
}