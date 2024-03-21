#include <stdio.h>
#include <math.h>




int main(){
    double cv;
    printf("Nhap vao chu vi hinh tron: ");
    scanf("%lf",&cv);

    double r = 2*3.14/cv;
    double dt = r*r*3.14;
    printf("Dien tich hinh tron: %.3lf",dt);


    return 0;
}