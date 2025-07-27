#include <stdio.h>
#define MAX 500

void multiply(int res[], int *res_size, int x) {
    int carry = 0;
    for (int i = 0; i < *res_size; i++) {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }
    while (carry) {
        res[(*res_size)++] = carry % 10;
        carry /= 10;
    }
}

void factorial(int n) {
    int res[MAX];    // A result arrray of size 500 is declared to store each digit of factorial of large numbers.
    res[0] = 1;
    int res_size = 1;
    
    for (int x = 2; x <= n; x++) {
        multiply(res, &res_size, x);
    }
    
    for (int i = res_size - 1; i >= 0; i--) {
        printf("%d", res[i]);
    }
    printf("\n");
}

int main() {
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    while (t--) {
        int n;
        printf("Enter the value of n: ");
        scanf("%d", &n);
        factorial(n);
    }
    return 0;
}