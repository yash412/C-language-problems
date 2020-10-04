// WAP to print the values of a variable i by using pointer to pointer type of variable.

#include<stdio.h>

int main() {
    int a =5;
    int *ptr1, **ptr2;
    ptr1 = &a;
    ptr2 = &ptr1;

    printf("%d\n",*ptr1);
    printf("%d\n",**ptr2);
    return 0;
}