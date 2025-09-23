//INSERTION SORTING

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of terms in array: ");
    scanf("%d", & n);

    int a[n],i,j,t;
    printf("Enter the values in array: ");
    for(i = 0; i<n; i++){
        scanf("%d", & a[i]);
    }
    
    printf("Values in array: \n");
    for(i = 0; i<n; i++){
        printf("%d\t", a[i]);
    }
    printf("\n");

    // Insertion sort algorithm
    for(i = 0;i<n; i++){
        t = a[i];       // t is the current index value.
        j = i-1;        // j is the previous index value.
        while(t<a[j] && j>=0){   // comparing current index value with previous index value.
            a[j+1] = a[j];   // shifting the previous index value to next index.
            j = j - 1;      // decrementing the previous index value.
        }
        a[j+1] = t;     // placing the current index value to its correct position.
    }

    printf("Sorted array: \n");
    for(i = 0; i<n; i++){
        printf("%d\t", a[i]);
    }

    printf("\n");
     return 0; 
}
