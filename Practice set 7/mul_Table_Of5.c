// WAP to create an array of 10 integers and store mulitplication table of 5 in i.

#include<stdio.h>

void printValues();
int arr[10];

int main() {
    
    printValues();
    return 0;
}

void printValues() {
    for(int i =0; i<10;i++) {
        arr[i] = 5 * (i+1);
        printf("%d x %d = %d\n",5, i+1, arr[i]);
    }
}
