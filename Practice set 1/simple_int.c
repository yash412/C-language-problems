//WAP to calculate simple intrest for a set of various representing principal no of years and the rate of intrest.

#include<stdio.h>

int main() {
    float principal, simpleInt;
    int rate, year;
    printf("Enter the amount : ");
    scanf("%f", &principal);

    printf("Enter the rate : ");
    scanf("%d", &rate);

    printf("Enter the year : ");
    scanf("%d",&year);

    simpleInt = (principal* rate* year)/100;
    printf("The Simple Interest on %f rupees on the rate of %d %, for %d years is %f",principal, rate, year, simpleInt);
    return 0;
}