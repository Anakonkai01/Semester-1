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
    int sum =0;
    while(integerPart > 0 ){
        remain = integerPart%10;
        sum += remain;
        integerPart /= 10;
    }
    printf("Sum of all digit in the number = %d",sum);
    return 0;
}