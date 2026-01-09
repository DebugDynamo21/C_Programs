//To pass structure variable to function.

#include <stdio.h>
void display(struct student);   //(user defined datatype)
struct student{
    char name[20];
    int r;
    float percentage;
};

int main(){
    struct student s = {"Amit",1,24.24};
    display(s);
    return 0; 
}
void display(struct student s1){
    printf("%s\n%d\n%.2f\n",s1.name,s1.r,s1.percentage);
}