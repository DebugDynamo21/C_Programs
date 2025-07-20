/*10000
  02000
  00300
  00040
  00005 */

#include <stdio.h>
int main(){
    int n,k=1;
    printf("Enter the value of n: ");
    scanf("%d", & n);

    for(int i=0; i<n;i++){
        for(int j = 0; j<n;j++){
            if(i==j){
                printf("%d",k++);
            }else{
                printf("0");
            }
        }
        printf("\n");
    }
     return 0; 
}