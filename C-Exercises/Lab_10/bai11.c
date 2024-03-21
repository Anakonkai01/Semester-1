#include <stdio.h>


int sumArray(int a[],int SIZE){
    int sum = 0;
    for (size_t i = 0; i < SIZE; i++)
    {
        sum += a[i];   
    }
    return sum;
}

// int main(){
//     int a[]= {1,2,3,4,5,6,7,8,9,10};
//     int SIZE = sizeof(a)/sizeof(a[0]);
//     printf("tong cua toan bo so nguyen trong mang la: %d\n",sumArray(a,SIZE));
//     return 0;
// }