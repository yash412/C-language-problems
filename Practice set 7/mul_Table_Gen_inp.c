// WAP to create an array of 10 integers and store mulitplication table in it by taking input form user.

#include<stdio.h>

void printValues();
int arr[10];

int main() {
    int n;
    printf("Enter the value of n :\n");
    scanf("%d",&n);
    printValues(n);
    return 0;
}

void printValues(int a) {
    printf("The table of %d is :\n",a);
    for(int i =0; i<10;i++) {
        arr[i] = a * (i+1);
        printf("%d x %d = %d\n",a, i+1, arr[i]);
    }
}
