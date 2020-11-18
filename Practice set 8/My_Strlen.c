// Write your own version of strlen from string.h

#include<stdio.h>

int str_length(char *ptr);
char *ptr;
int len =0;
int main() {
    char str[100];
    printf("Enter the string : \n");
    scanf("%s",str);
    int x = str_length(&str[0]);
    printf("The length of string is : %d",x);
    return 0;
}

int str_length(char *ptr) {
    while(*ptr!='\0') {
        len = len + 1;
        ptr++;
    }
    return len;

}