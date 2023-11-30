#include <stdio.h>
float getFactorial(int);
int main()
{
    int n = 5;
    printf("Factorial(%d) = %f", n, getFactorial(n));
    return 0;
}
    float getFactorial(int n)
{
    if(n == 0 || n == 1) return 1;
    return n * getFactorial(n - 1);
}