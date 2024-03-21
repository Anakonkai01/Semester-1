#include <string.h>
#include <stdio.h>




int main(){
    int giay; 
    printf("nhap vao so giay: ");
    scanf("%d",&giay);

    double gio = giay/3600;
    double phut = giay/60;
    printf("so gio : %lf",gio);
    printf("\nphut : %lf", phut);
    return 0;
}