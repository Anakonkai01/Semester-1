#include <stdio.h>

int main (){
    int n;
    printf("Input the number: ");
    scanf("%d",&n);
    if (n < 0 ){
        n = -n;
    }
    int remain = 0;
    int integer = n;

    while(integer >  1){
        integer = integer/10;
    }
    int lDigit = n%10;
    printf("Last Digit = %d\n",lDigit);
    printf("First Digit = %d",integer);
    return 0;
}