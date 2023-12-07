#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int computePowxn(int n,int i,int x);

int main(){

    int n,x ;
    printf("Enter number for  n : ");
    scanf("%d",&n);
    printf("Enter number for x = : ");
    scanf("%d",&x);
    printf("%d power %d = %d\n",x,n, computePowxn(n,0,x));
    return 0;
}


int computePowxn(int n,int i,int x){
    return ( i == n )? 1 : x*computePowxn(n,i+1,x);
}