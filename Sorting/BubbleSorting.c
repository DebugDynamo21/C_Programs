// *** BUBBLE SORTING ***

#include <stdio.h>
int main(){
      int n, i, t, j;
      printf("\nEnter the size of array: ");
      scanf("%d", &n);

      int arr[n];
      printf("Enter the elements in array: ");
      for(i = 0; i < n; i++){
            scanf("%d", &arr[i]);
      }

      printf("Array: \n");
      for(i = 0; i < n; i++){
            printf("\t%d", arr[i]);
      }

      for(i = 0; i < n - 1; i++){
            for(j = 0; j < n - i - 1; j++){
                  if(arr[j] > arr[j + 1]){  // For ascending order
                        t = arr[j];         // swapping
                        arr[j] = arr[j + 1];
                        arr[j + 1] = arr[j];
                  }
            }
      }

      printf("\nThe sorted array(in ascending order: \n");
      for(i = 0; i < n; i++){
            printf("\t%d", arr[i]);
      }
      
      printf("\n");
      return 0; 
}