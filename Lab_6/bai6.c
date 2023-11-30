#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>


int testRecursion(int n,int i);
int a(int n,int i);
int b(int n,int i);
int c(int n,int i);
float d(int n,int i);
int factorial(int i);

int main (){
    int i = 1;
    int n;
    printf("Input for n: ");
    scanf("%d",&n);
    printf("result of exercise 6a = %d\n", a(n,i));
    printf("result of exercise 6b = %d\n", b(n,i));
    printf("result of exercise 6c = %d\n", c(n,i));
    printf("result of exercise 6d = %f\n", d(n,i));
    

    return 0;
}


// 


int a(int n, int i) {
    return (i == n + 1) ? 0 : 2 * i + 1 + a(n, i + 1);
}

 
int b(int n, int i) {
    return (i == n + 1) ? 0 : i/2 + b(n, i+1);
}

int c(int n, int i) {
    return (i == n + 1) ? 0 : factorial(i)+c(n,i+1);
}

float d(int n, int i) {
    return (i == n + 1) ? 0 : sqrt(i)+d(n,i+1);
}


int factorial(int i){
    if (i == 1) return 1;
    return i*factorial(i - 1);
}


