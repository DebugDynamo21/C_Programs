// To create link list.

#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;
};
int main(){
    struct node *head = NULL;
    head = (struct node *) malloc(sizeof(struct node));
    head -> data = 10;      //sets the data field of the node to 10
    head -> link = NULL; //indicates that this node does not point to any other node (it is the last node in the list).
    printf("%d\n", head ->data);
    return 0;
}