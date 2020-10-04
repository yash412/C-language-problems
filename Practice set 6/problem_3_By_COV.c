#include<stdio.h>

void change_val();
int main() {
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    change_val(a);
    printf("%d is the value of a var\n",a); // The value of a is different here.
    return 0;
}
// Both variable have different values.
void change_val(int r) {
    r = 10 *(r);  
    printf("%d is the value of r var\n",r);// The value of r is 10 times more than a.
}