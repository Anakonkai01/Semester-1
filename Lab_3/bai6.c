#include <stdio.h>
// tong cac chu so trong mot con so 
int sumAllDigit(int n);

int main(){
    int n ;
    printf("Input the number:");
    scanf("%d",&n);

    printf("Sum of all digit in the number = %d",sumAllDigit(n));
    return 0;
}


int sumAllDigit(int n){
    int sum = 0;
    int integerPart = n;
    if (n < 0){
        n = -n;
    }
    int remain = 0;
    while(integerPart > 0 ){
        remain = integerPart%10;
        sum += remain;
        integerPart /= 10;
    }
    

    return sum;
}