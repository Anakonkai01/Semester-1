#include <stdio.h>

int main(){
    float a,b,c;
    printf("Nhap 3 canh a,b,c :\n");
    scanf("%f%f%f",&a,&b,&c);
    
    if (a+b+c == 180)
    {
        printf("day la 3 goc cua 1 tam giac");
    }
    else{
        printf("day ko phai la 3 goc cua 1 tam giac");
    }
    
    
    return 0;   

}
