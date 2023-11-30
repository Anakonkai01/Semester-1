#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

int checkPrimeRECURSIVE(int n, int i);
int checkPrimeITERATION(int n);

int main() {
    int i = 2;
    int n;
    printf("Enter a number to check if it is prime or not: ");
    scanf("%d", &n);

    clock_t begin = clock();
    printf("Using RECURSIVE\n");
    if (checkPrimeRECURSIVE(n, i)) {
        printf("%d is prime number\n", n);
    } else {
        printf("%d is not a prime number\n", n);
    }
    clock_t end = clock();
    double time_spent1 = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Time execute = %f seconds\n", time_spent1);

    clock_t begin_iter = clock();
    printf("Using ITERATION\n");
    if (checkPrimeITERATION(n)) {
        printf("%d is prime number\n", n);
    } else {
        printf("%d is not a prime number\n", n);
    }
    clock_t end_iter = clock();
    double time_spent2 = (double)(end_iter - begin_iter) / CLOCKS_PER_SEC;
    printf("Time execute = %f seconds\n", time_spent2);

    return 0;
}

int checkPrimeRECURSIVE(int n, int i) {
    if (sqrt(n) <= i) {
        return 1;
    }
    if (n % i == 0) {
        return 0;
    } else {
        return checkPrimeRECURSIVE(n, i + 1);
    }
}

int checkPrimeITERATION(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0; // not a prime number
        }
    }
    return 1; // prime number
}
