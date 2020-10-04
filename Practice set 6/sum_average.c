// WAP using function which calculate the sum and average of two numbers, use pointers and print the values of sum and average in main().

#include<stdio.h>

void sum_And_Average(int x, int y, int *ptr1, float *ptr2);
int main() {
    int a,b,sum;
    float average;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    sum_And_Average(a,b,&sum,&average);

    printf("The sum of two numbers is %d\n",sum);
    printf("The average of the numbers is %f\n ",average);
    return 0;
}

void sum_And_Average(int x, int y, int *ptr1, float *ptr2) {
    *ptr1 = x + y;
    *ptr2 = (float)(*ptr1)/2; 
}