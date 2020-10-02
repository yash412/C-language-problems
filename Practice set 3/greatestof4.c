// WAP to find greatest of four number.

#include<stdio.h>

int main() {
    int fst,sec,thr,fort,max;

    printf("Enter the value of variable : ");
    scanf("%d %d %d %d",&fst,&sec,&thr,&fort);
    
    max = (fst > sec) ? fst : sec;
    max = (max > thr) ? max : thr;
    max = (max > fort) ? max : fort;

    printf("%d is a greatest number", max);

    return 0;
}