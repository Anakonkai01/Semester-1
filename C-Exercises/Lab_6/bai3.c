#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int computePow2n(int n,int i);

int main(){

    int n ;
    printf("Enter number n : ");
    scanf("%d",&n);
    printf("2 power n = %d\n", computePow2n(n,0));
    return 0;
}


int computePow2n(int n,int i){
    return ( i == n )? 1 : 2*computePow2n(n,i+1);
}