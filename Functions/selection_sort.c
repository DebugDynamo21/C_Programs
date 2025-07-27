//WAP to sort an array using selection sort

#include <stdio.h>
void selection_sort(int arr[], int n);
int main(){
    int m, i;
    printf("Enter the size of array: ");
    scanf("%d", &m);
    int arr[m];
    printf("Enter the elements in array: ");
    for(i = 0; i < m; i++){
        scanf("%d", &arr[i]);
    }
    printf("Array: \n");
    for(i = 0; i < m; i++){
        printf("%d\t", arr[i]);
    }
    selection_sort(arr, m);
    printf("\nSorted array: \n");
    for(i = 0; i < m; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0; 
}
void selection_sort(int arr[], int n){
    int t, min, loc, i, j;
    for(i = 0; i < n; i++){
        min = arr[i];
        loc = i;
        for(j = i + 1; j < n; j++){
            if(arr[j] < min){
                min = arr[j];
                loc = j;
            }
        }
        if(loc != i){
                t = arr[i];
                arr[i] = arr[loc];
                arr[loc] = t;
            }
    }
}