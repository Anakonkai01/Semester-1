#include <stdio.h>



int calculate(int x){
    if (x  == 0)
    {
        return 3;
    }
    if (x == 1)
    {
        return 5;
    }
    return calculate(x-1)+ 2*calculate(x-2);
}

// int main(){
//     int x = 10;
//     printf("gia tri cua f(x) khi x = 10 la: %d",calculate(x));
//     return 0;
// }