// WAP to convert celcius temprature into fahrenheit. 

#include<stdio.h>

void Temp_Converter();
int main() {
    int cel;
    printf("Enter the temprature in degree celcius : ");
    scanf("%d",&cel);
    Temp_Converter(cel);
    return 0;
}

void Temp_Converter(int cel) {
        float fahr = (float)((cel * (9/5)) + 32); 
        printf("The temprature in fahrenheit is %f\n",fahr);
    }