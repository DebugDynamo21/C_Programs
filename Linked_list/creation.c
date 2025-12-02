// User defined code to create linked list using functions.

#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;
};

struct node *createlist(int);
void display(struct node*);
struct node *head = NULL;

int main(){
    int n;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    head = createlist(n);
    display(head);
    return 1; 
}
struct node *createlist(int n){
    struct node *temp = NULL;
    struct node *ptr = NULL;
    for(int i = 0; i<n; i++){
        temp = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data for node: %d",i+1);
        scanf("%d", &temp -> data);
        temp -> link = NULL;

        if(head == NULL){
            head = temp;    // creation of node
        }
        else{
            ptr = head;
            while(ptr -> link != NULL){
                ptr = ptr -> link;      //traversal from one ode to other
            }
            ptr -> link = temp;         //connect to next node
        }
    }
    return (head);
}