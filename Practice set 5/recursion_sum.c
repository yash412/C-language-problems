// WAP using recursion to calculate the sum of 1'st n natural numbers.

#include<stdio.h>
int sum(int num);
int sm;
int main() {
    int n;
    int add =0;
    printf("Enter the number : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++) {
    int w=sum(i);
    printf("%d\n",w);
    add =add+w;
    }
    printf("The sum of n natural numbers is %d",add);
    return 0;
}
int sum(int num) {
    if(num ==1) {
        return num;
    } else {
        sm =1+ sum(num-1); // instead of 1 we can also write as sum(1).
        return sm;
    }
    
}