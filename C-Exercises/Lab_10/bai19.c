#include <stdio.h>


int minNum(int a[],int n){
    int min = a[0];
    for (size_t i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
        
    }
    return min;
}

// int main(){
//     int a[] = {0,1,2,3,4,5,6};
//     int n = sizeof(a) / sizeof(a[0]);
//     printf("So lon nhat trong mang la: %d\n", minNum(a,n));
// }