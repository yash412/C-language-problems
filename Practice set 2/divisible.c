// WAP to check weather a number is divisible by 97 or not.

#include<stdio.h>

int main() {
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    if (num%97==0) {
        printf("The number %d is divisible by 97", num);
    }   else {
        printf("The number %d is not divisible by 97", num);
    }

    // int x=2; 
    // int y= 3;
    // int z=3;
    // int k=1;
    // int q = 3*x/y-z+k;
    // printf("%d",q);
    return 0;
}