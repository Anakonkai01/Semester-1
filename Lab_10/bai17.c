#include <stdio.h>

int SumEven(int a[],int n){
    int sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        if(a[i]%2 == 1){
            sum+= a[i];
        }
    }
    return sum;
}

// int main(){
//     int a[] = {1,2,3,4,5,6,7};
//     int n = sizeof(a) / sizeof(a[0]);
//     printf("SumEven: %d\n",SumEven(a,n));
//     return 0;   
// }