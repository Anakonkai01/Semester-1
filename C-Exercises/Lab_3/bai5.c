#include <stdio.h>
// tim chu so dau tien va chu so cuoi cung

int fDigit(int n);
int lDigit(int n);

int main (){
    int n;
    printf("Input the number: ");
    scanf("%d",&n);
    if (n < 0 ){
        n = -n;
    }

    printf("Last Digit = %d\n",lDigit(n));
    printf("First Digit = %d",fDigit(n));
    return 0;
}


int fDigit(int n){
    int firstDigit = n;
    while(firstDigit >  1){
        firstDigit = firstDigit/10;
    }
    return firstDigit;
}

int lDigit(int n){
    int lDigit = n%10;
    return lDigit;
}