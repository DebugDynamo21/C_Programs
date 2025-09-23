// Linear search Program using functions.

#include <stdio.h>
int linear_search(int[], int, int);
void display(int[], int);
int main()
{
    int n, num, i, pos = -1;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    display(arr, n);
    printf("\nEnter the number to search for: ");
    scanf("%d", &num);
    linear_search(arr, n, num);
    return 0;
}

void display(int arr[], int n)
{
    int i;
    printf("Array: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

int linear_search(int arr[], int n, int num)
{
    int pos = -1, i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            pos = i;
            printf("\n%d is found at %d position.\n", num, pos + 1);
        }
    }
    if (pos == -1)
        printf("%d does not present in given array.\n", n);

    return 0;
}