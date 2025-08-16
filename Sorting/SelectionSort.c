//SELECTION SORTING.

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of terms in array: ");
    scanf("%d",& n);

    int a[n],i,j,t,loc,min;
    printf("Enter the values in array: ");
    for(i = 0; i<n; i++){
        scanf("%d", & a[i]);
    }
    printf("Values in array: \n");
    for(i = 0;i<n; i++){
        printf("%d\t", a[i]);
    }
    printf("\n");
    for(i = 0; i<n; i++){
        min = a[i];             //Here element at first index is assumed minimun.
        loc = i;                // here the index of minimum value is locked in loc variable.
        for(j = i+1; j<n; j++){
            if(a[j]<min){       //now it will compare the value at next index with minimum value.
                min = a[j];    // if min value is found at another index
                loc = j;        // its index will be stored in loc variable.
            }
        }
        if (loc!=i){            // here if another min value is found at other index other than we assumed.
            t = a[i];           // it will swap the value and place the min value at first index.
            a[i] = a[loc];
            a[loc] = t;
        }
    }
    printf("Sorted array: \n");
    for(i = 0; i<n; i++){
        printf("%d\t", a[i]);
    }
    printf("\n");
     return 0; 
}
