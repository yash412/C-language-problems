#include<stdio.h>

int main() {
    int sum=0;       
    int i = 1;
    while (i<11)
    {
        sum = sum + i;
        i++;
    }
    
    printf("The sum of 1st ten natural number is : %d\n ", sum);
    return 0;
}