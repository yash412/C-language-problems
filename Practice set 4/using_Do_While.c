// WAP to calculate the sum of 1st ten natural number using do while loop.

#include<stdio.h>

int main() {
    int sum=0;       
    int i = 1;
    do {
        sum = sum + i;
        i++;
    } while(i<11);
    
    printf("The sum of 1st ten natural number is : %d\n ", sum);
    return 0;
}