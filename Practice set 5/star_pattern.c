// WAP to print following star pattern using c.
/*
*
* *
* * *
*/

#include<stdio.h>

int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++) {
        
        for(int j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}