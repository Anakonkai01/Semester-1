#include <stdio.h>


int maxNum(int a[],int n){
    int max = a[0];
    for (size_t i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        
    }
    return max;
}

// int main(){
//     int a[] = {0,1,2,3,4,5,6};
//     int n = sizeof(a) / sizeof(a[0]);
//     printf("So lon nhat trong mang la: %d\n", maxNum(a,n));
// }