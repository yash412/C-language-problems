//WAP to calculate force of attraction on the body of mass m exerted by earth using function.

#include<stdio.h>

float calculate_force(int mass);
int main() {
    int mass, force;
    printf("Enter the mass of the body : ");
    scanf("%d",&mass);

    force = calculate_force(mass);
    printf("%d newton of force of attraction on the body of mass %d kg exerted by the earth.",force,mass);
    return 0;
}

float calculate_force(int mass) {
    float force = (float)(mass * 9.81);
    return force;
}