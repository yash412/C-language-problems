// Create an array of size 3 X 10 containing multiplication table of the numbers 2,7 and 9 respectively.

#include<stdio.h>

void Table(int *ptr, int n, int j);
int arr[3][10];

int main() {
    
    printf("multiplication Table for 2 is :\n");
    Table(&arr[0][0], 2, 0);
    printf("****************************************************************************\n");
    printf("multiplication Table for 7 is :\n");
    Table(&arr[1][0], 7, 1);
    printf("****************************************************************************\n");
    printf("multiplication Table for 9 is :\n");
    Table(&arr[2][0], 9, 2);
    printf("****************************************************************************\n");  
     
    return 0;
}

void Table(int *ptr, int n, int j) {
    
    for(int i=0; i<10;i++) {  
        arr[j][i] = n*(i+1);
        printf("%d X %d = %d\n",n,i+1,arr[j][i]);
        ptr++;
        
    }

}