#include <stdio.h>

int main(){
    int n ;
    printf("Input the number:");
    scanf("%d",&n);

    int integerPart = n;
    if (n < 0){
        n = -n;
    }
    int count =0;
    while(integerPart > 0 ){
        integerPart /= 10;
        count++;
    }
    printf("Digit in the number = %d",count);
    return 0;
}