// Calculate the area of circle and modify the same program to calculate the volume of cylinder given its radius and height.

#include<stdio.h>

int main() {
    // int radius;
    // float area;
    // printf("Enter the radius of circle : ");
    // scanf("%d",&radius);

    // area = 3.14* radius* radius;
    // printf("The area of circle is :%f\n",area);

    int radius, height;
    float volume;
    printf("Enter the radius of cylinder : ");
    scanf("%d",&radius);

    printf("Enter the height of cylinder : ");
    scanf("%d",&height);

    volume = 3.14* radius* radius* height;
    printf("The area of cylinder is :%f\n",volume);

    return 0;
}