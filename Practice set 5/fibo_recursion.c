#include<stdio.h>
int Fibbo_Rec(int var);
int main() {
    int n, m=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("The fibbonachi series is :\n");

    for(int i =1; i<= n; i++) {
        int y = Fibbo_Rec(m);
        printf("%d\t",y);
        m++;
    }
    return 0;
}

int Fibbo_Rec(int var) {
    if (var==0 || var==1) {
        return var;
    } else {
        return Fibbo_Rec(var-1) + Fibbo_Rec(var-2);
    } 

}