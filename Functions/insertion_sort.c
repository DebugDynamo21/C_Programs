//WAP to sort an array using insertion sort.
#include <stdio.h>
void insertion_sort(int arr[], int n);
int main(){
    int m, i;
    printf("Enter the size of array: ");
    scanf("%d", &m);
    int arr[m];
    printf("Enter the elements in array: ");
    for(i = 0; i < m; i++){
        scanf("%d", &arr[i]);
    }
    insertion_sort(arr, m);
    printf("\nSorted array: \n");
    for(i = 0; i < m; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}
void insertion_sort(int arr[], int n){
    int t, i, j;
    for(i = 0; i < n; i++){
        t = arr[i];
        j = i - 1;
        while(t < arr[j] && j >= 0){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = t;
    }
}