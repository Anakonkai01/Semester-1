#include <stdio.h>

int countDigits(int n);

int main() {
    int n;
    printf("Enter a possitive number: ");
    if (n < 0)
    {
        n = -n;
    }
    
    scanf("%d", &n);
    printf("The number of digits in %d = %d\n", n, countDigits(n));

    return 0;
}

int countDigits(int n) {
    if (n  == 1) {
        return 1;  
    } else {
        return 1+countDigits(n / 10);
    }
}
