// WAP to check gcc compiler execute the program from right to left.

#include<stdio.h>

int main() {
    int a=3;        
    printf("%d %d %d\n",a,++a,a++); // Expected output is 3 4 4 but it gives 5 5 3 because gcc compiler execute from right to left.
                    //  <<==  <<==
    return 0;
}