// Linear search using functions.

#include <stdio.h>
void display(int []);
int linear(int []);
int p;
int main(){
    printf("Enter the number of elements in array: ");
    scanf("%d", & p);
    int a[p], i;
    printf("Enter the values in array: ");
    for(i = 0; i<p; i++)
    scanf("%d", & a[i]);
    display(a);
    linear(a);
    return 0;
}
void display(int a[]){
    int i;
    printf("Values in array: \n");
    for(i = 0; i<p; i++)
    printf("%d\t",a[i]);
}
int linear(int a[]){
    int m,i,loc=-1;
    printf("\nEnter the element to be searched: ");
    scanf("%d", & m);
    for(i = 0; i<p; i++){
        if(m == a[i]){
            loc = i;
            break;
        }
    }
    if(loc>-1){
        printf("%d is found at %d\n", m, loc);
    }else{
        printf("\nElement does not exist\n");
    }
    return m;
}