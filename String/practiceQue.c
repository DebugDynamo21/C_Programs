/* if n is an integer (1<=n<=100)
   for  n=1 i hate it
        n=2 i hate that i love it
        n=3 i hate that i love that i hate it.
        so on.  */

#include <stdio.h>
#include<string.h>
int main(){
    int n, i;
    printf("Enter an integer: ");
    scanf("%d", & n);
    char output[1000] = "";
    for(i = 1; i <= n; i++){
        if(i % 2 == 1){
            strcat(output,"I hate");
        }else{
            strcat(output, "I love");
        }

        if(i != n){
        strcat(output," that ");
        }
    }
        strcat(output," it.");
        printf("%s\n",output);
    return 0; 
}