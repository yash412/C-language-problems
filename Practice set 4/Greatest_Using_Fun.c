// WAP to find greatest of four number.

#include<stdio.h>

int Max_Of_Four(int w, int x, int y, int z); // function declaration.

int main() {
    int a,b,c,d,max;

    printf("Enter the value of variable : ");
    scanf("%d %d %d %d",&a ,&b ,&c ,&d);
    
    max = Max_Of_Four(a,b,c,d); // function call.

    printf("%d is a greatest number", max);

    return 0;
}

// function defination.
int Max_Of_Four(int w, int x, int y, int z) {

    int max;
    
    max = (w > x) ? w : x;
    max = (max > y) ? max : y;
    max = (max > z) ? max : z;
    
    return max;

}