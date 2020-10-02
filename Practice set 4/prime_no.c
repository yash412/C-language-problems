#include<stdio.h>
#include<math.h>

int main() {
    int num, flag =1;
    printf("Enter a number : ");
    scanf("%d",&num);

    for(int i=2; i<=sqrt(num); i++) {

        if (num%i == 0) {
            flag = 0;
            break;
        }
        
    }

    if(num<=1) {
        flag = 0;
    } else if (num==2) {
        flag = 1;
    }

    if (flag == 1)
    {
        printf("%d is a prime nummber",num);
    } else {
        printf("%d is not a prime number",num);
    }
    
    return 0;
}