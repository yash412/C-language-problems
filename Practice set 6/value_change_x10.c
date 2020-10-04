// WAP to change the value of a variable 10 times of its current value, write a function and pass the value by reference.

#include<stdio.h>

void change_val();
int main() {
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    change_val(&a);
    printf("%d",a);
    return 0;
}

void change_val(int *ptr) {
    *ptr = 10 *(*ptr);
}