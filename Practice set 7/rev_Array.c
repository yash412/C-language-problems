// WAP which reverse the array passed to it.
#include<stdio.h>

void rev_Array();
int main() {    
    int arr[10]= {1,2,3,4,5,6,7,8,9,10};

    rev_Array(arr, 10);

    return 0;
}  

void rev_Array(int ar[10], int q) {
    for(int i=0; i<=q/2;i++) {
        int temp = ar[i];
        ar[i] = ar[q-i-1];
        ar[q-i-1] = temp;
        
    }

    printf("The reverse array is : ");
    for(int i=0; i<q;i++) {
        printf("%d\t",ar[i]);
    }
 }