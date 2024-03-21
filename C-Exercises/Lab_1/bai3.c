#include <stdio.h>

int main(){
    float d, r, cv, dt;
    printf("Nhap chieu dai va chieu rong: ");
    scanf("%f%f",&d,&r);

    dt = d*r;
    cv = (d+r)*2;

    printf("dien tich = %.2f\ncv = %.2f",dt,cv);
    return 0;
}
