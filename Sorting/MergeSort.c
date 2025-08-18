/* MERGE SORT- Sorting algorithm thet divides, conquer and combine the algorithmic paradigm.
(Time complexity is O(n logn))
    Divide - means partioning the n elements array into sub arrays of n/2 elements.
    Conquer - means sorting the two sub arrays recursively using merge sort. 
    Combine - means merging the two sorted sub arrays of size n/2 to produce the sorted array sof n elements.*/

#include <stdio.h>
#define size 100        //Define maximum size of array as 100

void merge(int a[], int, int, int);     //merges two sorted sub arrays
void merge_sort(int a[], int, int);     //Recursively divides the array into smaller part and sorts them

int main(){
    int arr[size], i, n;    //declare a array to store elements, loop variable, number of elements in array
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", & n);

    printf("\nEnter the elements of the array: ");
    for(i = 0; i < n; i++){
        scanf("%d", & arr[i]);
    }
    merge_sort(arr, 0, n - 1);
    printf("\nThe sorted array is: \n");
    for(i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}

void merge(int arr[], int beg, int mid, int end){
//This function merges the two sorted halves of the sub arrays.

    int i = beg, j = mid + 1, index = beg, temp[size], k;
    //temp[size] - temporary array for merging

    while((i <= mid) && (j <= end)) {
        
        //Compares elements from both halves and stores the smaller one in temp[]
        if(arr[i] < arr[j]){
            temp[index] = arr[i];
            i++;
        }
        else{
            temp[index] = arr[j];
            j++;
        }
        index++;
    }
    if(i > mid){
        //If the left half is fully processed, copy the remaining elements of the right half.
        while(j <= mid){
            temp[index] = arr[j];
            j++;
            index++;
        }
    }
    else{
        //If the right half is fully processed, copy the remaining elements of the left half.
        while(i <= mid){
            temp[index] = arr[i];
            i++;
            index++;
        }
    }
    //Copies the merged elements from temp[] back to arr[].
    for(k = beg; k < index; k++){
        arr[k] = temp[k];
    }
}

void merge_sort(int arr[], int beg, int end){
    int mid;
    if(beg < end){
        mid = (beg + end) / 2;
        merge_sort(arr, beg, mid);
        merge_sort(arr, mid + 1, end);
        merge(arr, beg, mid, end);
    }
}