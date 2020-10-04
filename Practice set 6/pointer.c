// WAP to print address of a variable, use this address to get the value of this variable. 

#include<stdio.h>

int main() {
    int a=12;
    int *ptr1;
    ptr1 = &a;
    int *ptr= &a;
    printf("%u\n",ptr);
    printf("%d\n",*ptr);
    printf("%u\n",ptr1);
    printf("%u\n",*ptr1);
    printf("%d\n",ptr1);
    printf("%d\n",*ptr1);
    printf("%u\n",&a);
    printf("%d\n",&a);
    printf("%u\n",*(&a));
    printf("%d\n",*(&a));
    return 0;
}