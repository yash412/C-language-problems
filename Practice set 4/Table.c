// WAP to print table of the given number.

#include<stdio.h>

int main() {
    int num, sum=0;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("The table for %d is :\n ",num );

    for(int i=1; i<11; i++ ) {
        sum = num * i;
        printf("%d x %d = %d\n",num,i,sum);
    }
    return 0;
}