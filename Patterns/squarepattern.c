/* Print a pattern of numbers from 1 to n as shown below. Each of the numbers is separated by a single space.

         4 4 4 4 4 4 4  
         4 3 3 3 3 3 4   
         4 3 2 2 2 3 4   
         4 3 2 1 2 3 4   
         4 3 2 2 2 3 4   
         4 3 3 3 3 3 4   
         4 4 4 4 4 4 4   
    
    The input will contain a single integer n.
 */

#include <stdio.h>
void printPattern(int n);
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", & n);

    if(n < 1){
        printf("Enter a value greater than 1");
        return 1;
    }
    printPattern(n);
    return 0; 
}

void printPattern(int n){
    int size = 2 * n - 1;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            int min = i < j ? i : j;
            min = min < size - i ? min : size - i - 1;
            min = min < size - j - 1 ? min : size - j - 1;

            printf("%d ", n - min);
        }
        printf("\n");
    }
}