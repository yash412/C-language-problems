#include<stdio.h>

int main() {
    int num, fact = 1,i;
    printf("Enter the number : ");
    scanf("%d",&num);
    i = num;
    while (num>0)
    {   
        fact = fact * num;
        num--;
    }
    
    printf("The factorial of %d is %d",i,fact);
    return 0;
}