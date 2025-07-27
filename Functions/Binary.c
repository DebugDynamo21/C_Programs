// Binary Search Program.

// #include <stdio.h>
// int main(){
//     int i, n, num, beg, end, mid, pos = -1;
//     printf("Enter the size of array: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter the (sorted)elements in array: ");
//     for(i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }
//     printf("Array: ");
//     for(i = 0; i < n; i++){
//         printf("%d\t", arr[i]);
//     }
//     printf("\nEnter number to search for: ");
//     scanf("%d", &num);

//     beg = 0, end = n - 1;
    
//     while(beg <= end){
//          mid = (beg + end) / 2;
//         if(arr[mid] == num){
//             pos = mid;
//             printf("%d is found at %d position.\n", num, pos);
//             break;
//         }else if(arr[mid] < num){
//             beg = mid + 1;
//         }else{
//             end = mid - 1;
//         }
//     }
//     if(beg > end)
//         printf("\n%d is not present in given array.\n", num);
//     return 0; 
// }

// Binary Search using function.

#include <stdio.h>
void display(int [], int);
int binary_search(int [], int, int);
int main(){
    int i, n, num;
    printf("\nEnter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter (sorted)numbers in array: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    display(arr, n);
    printf("\nEnter number to search for: ");
    scanf("%d", &num);
    binary_search(arr, n, num);
    return 0; 
}

void display(int arr[], int n){
    int i;
    printf("Array: ");
    for(i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
}

int binary_search(int arr[], int n, int num){
    int i, beg = 0, end = n - 1, mid, pos = -1;
    while(beg <= end){
        mid = (beg + end) / 2;
        if(arr[mid] == num){
            pos = mid + 1;
            printf("%d is found at %d position.\n", num, pos);
            break;
        }else if(arr[mid] > num){
            end = mid - 1;
        }else{
            beg = mid + 1;
        }
    }
    if(beg > end){
        printf("%d is not present in array.\n", num);
    }
    return 0;
}