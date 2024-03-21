#include <stdio.h>

int a(int n){
    if (n == 1)
    {
        return 3;
    }
    return 2*n + 1 +a(n-1);
}

int factorial(int n){
    if (n<=1) return 1;
    return n*factorial(n-1);
}

int b(int n) {
    if (n == 1) {
        return 2;
    }
    
    
    int factN = factorial(n);

    return factN + 1 + b(n - 1);
}

float c(float n){
    if (n == 1)
    {
        return 3.0;
    }
    return (2*n + 1)/n + c(n-1);
}
// int main(){
//     int n = 3;
//     printf("a = %d\n", a(n));
//     printf("b = %d\n", b(n));
//     printf("c = %f\n", c(n));
//     return 0;
// }