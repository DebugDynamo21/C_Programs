#include <stdio.h>
struct customer{
    unsigned long int Acc_No[200];
    char name[50];
    float balance;
};
int main(){
    int i;
    struct customer c[3];
    for(i = 0; i < 3; i++){
        printf("Enter detail of customer %d: \n", i+1);
        printf("\nEnter Account No.: ");
        scanf("%lu\n", &c->Acc_No);
        printf("Enter Name: ");
        scanf("%s\n", &c->name);
        printf("Enter Balance: ");
        scanf("%f\n", &c->balance);
    }
    printf("Customer with balance less than Rs. 100: \n");
    for(i = 0; i < 3; i++){
        if(c[i].balance <= 100.00){
            printf("%lu\n", c->Acc_No);
            printf("%s\n", c->name);
            printf("%.2f\n", c->balance);
        }
    }
    return 0; 
}