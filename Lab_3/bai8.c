#include <stdio.h>
// dem trong so do co bao nhieu chu so

int countDigit(int n);

int main(){
    int n ;
    printf("Input the number:");
    scanf("%d",&n);

    
    printf("Digit in the number = %d",countDigit(n));
    return 0;
}


int countDigit(int n){
    int integerPart = n;
    if (n < 0){
        n = -n;
    }
    int count =0;
    while(integerPart > 0 ){
        integerPart /= 10;
        count++;
    }
    return count;
}