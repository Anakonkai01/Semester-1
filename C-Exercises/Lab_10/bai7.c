
#include <stdio.h>


int factorial(int n){
    if (n <= 1)
    {
        return 1;
    }
    return n*factorial(n-1);
}

// int main (){
//     int n = 5;
//     printf("giai thua cua 5 la: %d\n", factorial(n));
//     return 0 ;
// }