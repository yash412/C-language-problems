// WAP to calculate the sum of numbers occuring in the multiplication table of 8.

#include<stdio.h>

int sum = 0;
int main() {
    for (int i = 1; i < 11; i++) {
        sum = sum + 8 * i;
    }
    printf("The sum of numbers occuring in the multiplication table of 8 is %d\n",sum );

    return 0;
}