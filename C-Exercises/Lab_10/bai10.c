#include <stdio.h>

int calculate(int x){
    if (x == 0)
    {
        return 4;
    }
    if (x == 1)
    {
        return 7;
    }
    return 4*calculate(x-1) - calculate(x-2);
}


// int main(){
//     int x =10;
//     printf("Gia tri cua f(x) khi x = 10 la: %d\n",calculate(x)) ;
//     return 0;
// }