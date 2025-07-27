#include <stdio.h>
int binarySearch(int [], int, int, int);
void performBinarySearch(){
    int n, find, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the sorted elements in array: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search for: ");
    scanf("%d", &find);
    int result = binarySearch(arr, 0, n - 1, find);
    if(result != -1){
        printf("%d is found at %d position.\n", find, result + 1);
    }else{
        printf("%d does not exist.\n", find);
    }
}

int binarySearch(int arr[], int low, int high, int find){
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == find)
            return mid;
        if(arr[mid] > find)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
int main(){
    performBinarySearch();
    return 0;
}