// WAP to find out whether a student is pass or fail if it requires total 40% and at least 30% in each subject and take marks as an input from the user.  

#include<stdio.h>

int main() {
    int phy, mth, che;

    printf("Enter the marks of physic : ");
    scanf("%d",&phy);
    printf("Enter the marks of maths : ");
    scanf("%d",&mth);
    printf("Enter the marks of chemistry : ");
    scanf("%d",&che);

    if ( ((phy+mth+che)/3) < 40 || phy < 30 || mth < 30 || che < 30 ) {
        printf("You are fail!! ");
    } else {
        printf("Congrass!! You are Pass");
    }
    return 0;
}