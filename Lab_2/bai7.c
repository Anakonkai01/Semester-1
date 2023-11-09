#include <stdio.h>

int main(){
    int n ;
    printf("Input the number:");
    scanf("%d",&n);

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
    printf("Product of all digit in the number = %d",pro);
    return 0;
}