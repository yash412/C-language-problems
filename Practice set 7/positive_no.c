// WAP containing functions which counts the number of positive integers in an array.

#include<stdio.h>

int sum=0;

int Calculate_int(int *ptr, int num);

int main() {
    int n;
    int a[100];
    printf("Enter the size of array : \n");
    scanf("%d",&n);
    printf("Enter the elements of array : ");

    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    
    int var = Calculate_int(a,n);
    printf("The total number of positive integers in array are : %d\n",var);
    return 0;
}

int Calculate_int(int *ptr, int num) {
        
        for (int i=0; i<num; i++) {

            if(*ptr>0) {

               sum = sum+1;
            }
            ptr++;
        }
        return sum;
        
}