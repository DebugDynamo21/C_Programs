//  BINARY SEARCH 

#include <stdio.h>
int main(){
    int a[7],n,low,high,mid;
    printf("Enter the values of array: ");
    for(int i = 0;i<7;i++){
        scanf("%d", & a[i]);
    }
    printf("Values of array: \n");
    for(int i = 0; i<7;i++){
        printf("%d\t", a[i]);
    }
    printf("\n");
    printf("Enter the number to be searched = ");
    scanf("%d",& n);
    low = 0;
    high = 6;
    mid = (low + high)/2;
    while(low<=high){
        if(n == a[mid]){
        printf("%d is found at index %d\n",n,mid+1);
        break;
        }else if(n < mid){
            high = mid - 1;
        }else{
            low = mid + 1;
            mid = (low + high)/2;
        }if(low > high){
            printf("Element does not exist\n");
        }
   }
     return 0;
}
