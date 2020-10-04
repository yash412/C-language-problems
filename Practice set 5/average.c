// WAP to calculate the average of three number using function.

#include<stdio.h>

void average_three(int a, int b, int c);
int average;
int main() {
    int a,b,c;
    printf("Enter first number : ");
    scanf("%d",&a);

    printf("Enter second number : ");
    scanf("%d",&b);

    printf("Enter third number : ");
    scanf("%d",&c);

    average_three(a,b,c);

    return 0;
}

void average_three(int a, int b, int c) {
    average = (a+b+c)/3;
    printf("The sum of your third number is %d\n",average);
}