// WAP to calculate the n'th element of fibonacchi series.

#include<stdio.h>
void Fibonachi_series();
int main() {
    int num;
    printf("Enter the number up to which you want fibonachi series : ");
    scanf("%d",&num);

    Fibonachi_series(num);
    return 0;
}

void Fibonachi_series(int num) {
    int fst = 0;
    int sec = 1;
    printf("%d\t%d\t",fst,sec);
    for(int i= 1; i<=num; i++) {
       
        int fibo = fst + sec; 
        printf("%d\t",fibo);
        fst = sec;
        sec = fibo;
    }
    
}