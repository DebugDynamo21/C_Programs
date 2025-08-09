// (LINEAR SEARCH)

#include <stdio.h>
int main(){
    int a[7],n, loc = -1;
    printf("Enter the values of array: ");
    for(int i = 0;i<7;i++){
        scanf("%d", & a[i]);
    }
    printf("Enter the number to be searched: ");
    scanf("%d", & n);

    printf("Values of array: \n");
    for(int i = 0; i<7;i++){
        printf("%d\t", a[i]);
    }
    printf("\n");
    for(int i = 0; i<7;i++){
        if(n==a[i]){
            loc = i;
            break;
        }
    }
    if(loc>-1){
        printf("%d is found at %d\n",n, loc);
    }else{
        printf("Element does not exist.\n");
    }
     return 0; 
}