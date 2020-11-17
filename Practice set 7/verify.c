// Create an array of numbers.verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.

#include<stdio.h>

int main() {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr;
    ptr = &arr[0];

    ptr+=2;

    if(*ptr==arr[2]) {
        printf("verified your pointer is pointing towards third element of an array.");

    } else {
        printf("something is wrong your pointer is not pointing towards third element of an array.");
    }
    
    return 0;
}