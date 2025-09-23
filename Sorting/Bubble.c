// Implements bubble sorting using functions.

#include <stdio.h>

int bubble_sort(int arr[], int n){
      int i, j, t;
      for(i = 0; i < n - 1; i++){
            for(j = 0; j < n - i - 1; j++){
                  if(arr[j] > arr[j + 1]){
                        t = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = t;
                  }
            }
      }
}

void display(int arr[], int n){
      int i;
      printf("Array: \n");
      for(i = 0; i < n; i++){
            printf("\t%d", arr[i]);
      }
      printf("\n");
}

int main(){
      int n, i, t, j;
      printf("\nEnter the size of array: ");
      scanf("%d", &n);

      int arr[n];
      printf("Enter the elements in array: ");
      for(i = 0; i < n; i++){
            scanf("%d", &arr[i]);
      }

      printf("\nThe unsorted ");
      display(arr, n);

      bubble_sort(arr, n);
      
      printf("\nThe sorted ");
      display(arr, n);
      return 0; 
}

