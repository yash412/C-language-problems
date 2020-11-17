// WAP to create 3D Array and print the address of its elements in increasing order.

#include<stdio.h>

int main() {
    int arr[10][10][10];
    int *ptr;
    ptr = &arr[0][0][0];

    for(int i=0; i<=10; i++) {
        for(int j=0; j<=10; j++ ) {
            for(int k=0; k<=10; k++) {
                printf("%u\n",ptr);
                ptr++;
            }
        }
    }
    

    return 0;
}