#include <stdio.h>

int main(){
    float c;
    printf("Nhap do C = \n");
    scanf("%f",&c);

    float convertCelToFaf = c*33.8;

    printf("%.1f C in Celsius to Fahrenheit : %.1f ",c,convertCelToFaf);
    return 0;
}
