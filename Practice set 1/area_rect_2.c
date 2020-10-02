// WAP a C Program to calculate area of a rectangle using input supplied by the user.

#include<stdio.h>

int main() {
    int length, breadth, area;
    printf("Enter length of a rectangle : ");
    scanf("%d", &length);

    printf("Enter breadth of a rectangle : ");
    scanf("%d", &breadth);

    area = length* breadth;
    printf("The area of a rectangle is : %d", area);
    return 0;
}