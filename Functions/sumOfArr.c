//To print sum of elements of array usning functions.

#include <stdio.h>
void display(int []);
int sum(int[]);
int main(){
    int a[10], i,r;
    printf("Enter elements in array: ");
    for(i = 0; i<10; i++)
    scanf("%d", & a[i]);
    display(a);
    r = sum(a);
    printf("\nSum is: %d\n",r);
    return 0; 
}
void display(int a[]){
    int i;
    printf("Elements in array: \n");
    for(i = 0; i<10; i++)
    printf("%d\t", a[i]);
}
int sum(int a[]){
    int i,s=0;
    for(i = 0; i<10; i++)
    s = s + a[i];
    return s;
}