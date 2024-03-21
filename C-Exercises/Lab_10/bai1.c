#include <stdio.h>
#include <math.h>


double khoangCach(double xa,double xb, double ya,double yb){
    return sqrt(pow(xa-xb,2) + pow(ya-yb,2));
}


int main(){
    int xA  = 10; 
    int xB = 5;
    int yA = 8;
    int yB = 4;

    printf("khoang Cach Giua A va B = %.3lf",khoangCach(xA,xB,yA,yB));
    return 0;
}