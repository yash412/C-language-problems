// Create an array of size 3 X 10 containing multiplication table of the 3 number entered by the user respectively.

#include<stdio.h>

void Table(int *ptr, int n, int j);
int arr[3][10];
int a,b,c;
int main() {
    
    printf("Enter 3 numbers : ");
    scanf("%d%d%d",&a,&b,&c);

    printf("multiplication Table for %d is :\n",a);
    Table(&arr[0][0], a, 0);
    printf("****************************************************************************\n");
    printf("multiplication Table for %d is :\n",b);
    Table(&arr[1][0], b, 1);
    printf("****************************************************************************\n");
    printf("multiplication Table for %d is :\n",c);
    Table(&arr[2][0], c, 2);
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