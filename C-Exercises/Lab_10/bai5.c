#include <stdio.h>

void decimalToBinary(int n) {
    if (n == 0) {
        return;
    }
    decimalToBinary(n / 2);
    printf("%d", n % 2);
}

int main() {
    int decimalNumber=23;
    
    printf("so nhi phan la: ");
    decimalToBinary(decimalNumber);

    return 0;
}
