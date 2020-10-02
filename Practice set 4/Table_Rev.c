// WAP to print table in reverse of the given number.

#include<stdio.h>

int main() {
    int num, sum=0;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("The table for %d in reverse order is :\n ",num );

    for(int i=10; i>0; i-- ) {
        sum = num * i;
        printf("%d x %d = %d\n",num,i,sum);
    }
    return 0;
}