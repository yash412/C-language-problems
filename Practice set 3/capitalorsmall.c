// WAP to determine weather a character entered by the user is capital or not.
#include<stdio.h>

int main() {
    char capital;
    printf("Enter a character : ");
    scanf("%c", &capital);

    if(capital >= 65 && capital <= 90) {
        printf("%c is a capital character ",capital);
    } else {
        printf("%c is a lowercase character ",capital);
    }
    return 0;
}