//write a c program to sort the array.
//implement a user defined function selection which will sort the elements in accending order using slection sort method.

#include <stdio.h>

void selectionSort(int arr[], int n) {
   int i, j, min, temp;

   for (i = 0; i < n-1; i++) {
      min = i;
      
      for (j = i+1; j < n; j++)
         if (arr[j] < arr[min])
            min = j;

      temp = arr[i];
      arr[i] = arr[min];
      arr[min] = temp;
   }
}


void printArray(int arr[], int size) {
   int i;
   for (i=0; i < size; i++)
       printf("%d ", arr[i]);
   printf("\n");
}


int main() {
   int arr[5];
   int i,j;
   printf("Name-Devansh Palsapure Roll no-34\n ");
   printf("Enter 5 numbers:");
   for(i=0;i<5;i++)
   {
      scanf("%d",&arr[i]);
   }

   int n = sizeof(arr)/sizeof(arr[0]);
   selectionSort(arr, n);
   printf("Sorted array: \n");
   printArray(arr, n);
   
   return 0;
}
