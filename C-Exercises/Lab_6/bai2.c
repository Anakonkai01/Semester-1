#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>


int factorial(int n);
int main(){
    int n;
    printf("Enter a number n: ");
    scanf("%d",&n);
    printf("factorial of n = %d\n",factorial(n));

    return 0;
}

int factorial(int n){
    return (n <= 1)? 1 : n* factorial(n-1); 
}