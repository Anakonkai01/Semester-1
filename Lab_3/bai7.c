#include <stdio.h>
// tich cac chu so trong 1 con so 

int productAllDigit(int n);

int main(){
    int n ;
    printf("Input the number:");
    scanf("%d",&n);

    
    printf("Product of all digit in the number = %d",productAllDigit(n));
    return 0;
}


int productAllDigit(int n){
    int integerPart = n;
    if (n < 0){
        n = -n;
    }
    int remain = 0;
    int pro = 1 ;
    while(integerPart > 0 ){
        remain = integerPart%10;
        pro *= remain;
        integerPart /= 10;
    }
    return pro;
}